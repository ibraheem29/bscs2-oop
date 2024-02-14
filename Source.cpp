#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Medicine//Class for adding medicines
{
private:
	string med_name;
	float med_price;
	int med_stock;
public:
	Medicine()
	{
		med_stock = 0;
		med_price = 0.0;
		med_name = " ";
	}
	Medicine(string mn, float mp, int ms)
	{
		med_name = mn;
		med_price = mp;
		med_stock = ms;
	}
	void Main_Menu()
	{
		system("cls");
		cout << "\n\n\t\t************ Main Menu ************\n";
		cout << "\n 1. Add New Medicine";
		cout << "\n 2. Display Medicines";
		cout << "\n 3. Check Specific Medicine";
		cout << "\n 4. Update Medicine";
		cout << "\n 5. Exit";
	}
	void addmedicine()  //Function For Adding Medicines
	{
		system("cls");
		ofstream file;
		file.open("medicine.txt", ios::app);
		cout << "\n\t\t\t\t ADD New Medicine ";
		cout << "\n Medicine Name : ";
		cin >> med_name;
		cout << "\n Medicine Price : ";
		cin >> med_price;
		cout << "\n Stock Left : ";
		cin >> med_stock;
		file << med_name << endl;
		file << med_price << endl;
		file << med_stock << endl;
		file.close();
	}
	void display_medicines()// Function For Displaying Medicines
	{
		system("cls");
		ifstream file;
		int med_stock;
		float med_price;
		string med_name;
		cout << "\n\n\t\t\t\t All Medicines ";
		file.open("medicine.txt");
		if (!file)
		{
			cout << "\n\n File Openning Error...!!!";
		}
		else
		{
			cout << "\n\n************MEDICINE INFORMATION************\n\n";
			file >> med_name;
			file >> med_price;
			file >> med_stock;
			do
			{
				cout << " Medicine name : " << med_name << endl;
				cout << " Medicine price : " << med_price << endl;
				cout << " Medicine Stock : " << med_stock << endl;
				file >> med_name;
				file >> med_price;
				file >> med_stock;
			} while (!file.eof());
		}
		file.close();
	}
	void search_medicine()//Function To Search Stored Medicine
	{
		system("cls");
		ifstream file;
		int med_stock, count = 0;
		string med_name, med_price, med1_name;
		cout << "\n\n\t\t\t\tSearch Specific Medicine";
		file.open("medicine.txt");
		if (!file)
		{
			cout << "\n\n File Openning Error...";
		}
		else
		{
			cout << "\n\n Medicine Name : ";
			cin >> med1_name;
			file >> med_name >> med_price >> med_stock;
			while (!file.eof())
			{
				if (med1_name == med_name)
				{
					system("cls");
					cout << "\n\n\t\t\t\tSearch Specific Medicine";
					cout << "\n\n Medicine Name : " << med_name << endl;
					cout << "\n\n\Medicine Price : " << med_price << endl;
					cout << "\n\n\Medicine Stock : " << med_stock << endl;
					count++;
					break;
				}
				file >> med_name >> med_price >> med_stock;
			}
			file.close();
			if (count == 0)
			{
				cout << "\n\n Sorry...!!Medicine Not Found...!";
			}
		}
	}
	void update_medicine_rec()  //Function For Updating Medicine Record
	{
		system("cls");
		ofstream  file1;
		file1.open("medicine1.txt", ios::app);
		ifstream searchmedicine;
		searchmedicine.open("medicine.txt");
		string med_name, user_input;
		float med_price;
		int med_stock;
		int  count = 0;
		cout << "*******Update Medicine's Record*******" << endl;
		cout << "ENTER MEDICINE NAME  :";
		cin >> user_input;
		if (!searchmedicine)
		{
			cout << "\n\n File Openning Error...";
		}
		else
		{
			while (!searchmedicine.eof())
			{
				searchmedicine >> med_name;
				searchmedicine >> med_price;
				searchmedicine >> med_stock;
				if (user_input == med_name && !searchmedicine.eof())
				{
					cout << "*******Update Medicine Record*******" << endl;
					cout << "MEDICINE NAME :";
					cin >> med_name;
					file1 << med_name << endl;
					cout << "MEDICINE PRICE:";
					cin >> med_price;
					file1 << med_price << endl;
					cout << "STOCK OF MEDICINE :";
					cin >> med_stock;
					file1 << med_stock << endl;
					count++;
				}
				if (user_input != med_name && !searchmedicine.eof())
				{
					file1 << med_name << endl;
					file1 << med_price << endl;
					file1 << med_stock << endl;
				}
			}
			if (count == 0)
			{
				cout << "\n\nThere Is No Medicine Of This Name...";
			}

			searchmedicine.close();
			file1.close();
			remove("medicine.txt");
			bool flag = rename("medicine1.txt", "medicine.txt");
		}
	}
};
int main()
{
	Medicine m;
	int choice, a;
	char x, check;
	do
	{
		m.Main_Menu();
		cout << "\n\nEnter Your Choice : ";
		cin >> choice;
		if (choice == 1)
		{
			do
			{
				m.addmedicine();
				cout << "Do you want to add a medicine?(y/n) : ";
				cin >> x;
			} while (x == 'y');
		}
		if (choice == 2)
		{
			m.display_medicines();
			cout << " Go To Main Menu (y) : ";
			cin >> x;
			if (x != 'y')
			{
				choice = 5;
			}
		}
		if (choice == 3)
		{
			m.search_medicine();
			cout << " Go To Main Menu (y) : ";
			cin >> x;
			if (x != 'y')
			{
				choice = 5;
			}
		}
		if (choice == 4)
		{
			m.update_medicine_rec();
			cout << " Go To Main Menu (y) : ";
			cin >> x;
			if (x != 'y')
			{
				choice = 5;
			}
		}
		if (choice == 5)
		{
			cout << endl << " Thanks for visiting!!!" << endl;
			exit(0);  //This command will End the whole program
		}
	} while (choice != 6);
}