#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<cstdlib>
using namespace std;
int check = 0;
class employee
{
	string npassword;
	string username;
	string password;
public:
	employee()
	{
		username = "";
		password = "";
		npassword = "";

	}
	void employeedata()
	{
		cout << "Enter you user name:";
		cin >> username;
		cout << "Enter you password:";
		cin >> password;
	}

	void chkemployeeid()
	{

		ifstream fin;
		fin.open("employeinfo.txt");
		string cn;
		string cp;
		string temp_str;
		while (!fin.eof())
		{
			fin >> cn;
			fin >> cp;
			if (cn.compare(username) == 0 && cp.compare(password) == 0)
			{
				temp_str = cp;
				check = 1;
				break;

			}
		}
		if (check == 0)
		{
			cout << "You Entered a wrong user name or password." << endl;
		}

		fin.close();
	}


	void change_password()
	{


		cout << endl;
		cout << "Enter a new password:";
		cin >> npassword;
		cout << "\n\npassword changed successfully.\n";


		int count = 0;
		ifstream fin2;
		ofstream fout;
		string strTemp;
		fout.open("Text.txt", ios::app);
		fin2.open("employeinfo.txt", ios::app);
		if (check == 1)
		{
			while (fin2 >> strTemp)
			{
				count++;
				if (strTemp == password)
				{
					strTemp = npassword;
				}

				strTemp += " ";
				fout << strTemp;
				if (count % 2 == 0)
					fout << endl;
			}
			fin2.close();
			fout.close();


			std::ofstream ofs;
			ofs.open("employeinfo.txt", std::ofstream::out | std::ofstream::trunc);
			ofs.close();


			ifstream fin3;
			ofstream fout4;
			fout4.open("employeinfo.txt", ios::app);
			fin3.open("Text.txt", ios::app);
			count = 0;

			while (fin3 >> strTemp)
			{
				count++;
				strTemp += " ";
				fout4 << strTemp;

				if (count % 2 == 0)
					fout4 << endl;
			}
			fin3.close();
			fout4.close();

			std::ofstream ofs2;
			ofs2.open("Text.txt", std::ofstream::out | std::ofstream::trunc);
			ofs2.close();
		}

	}


	~employee()
	{
	}
};
class coustomer
{
	string cid;
	string cbirth;
	string cname;
	string cadress;
	string cphonenumber;
	string cconnection;
	int cunit;

	string nval;
	string oldval;

	string* cn;
public:
	coustomer()
	{
		cid = " ";
		cbirth = " ";
		cname = " ";
		cadress = " ";
		cphonenumber = " ";
		cconnection = " ";
		cunit = 0;

		nval = " ";
		oldval = " ";
	}

	void coustomerdata()
	{
		cout << "Enter your ID:";
		cin >> cid;
		cout << "Enter you password:";
		cin >> cbirth;
	}

	void chkcostumerid()
	{

		ifstream fin;
		fin.open("customerinfo.txt");
		string cn;
		string cp;
		string temp_str;
		while (!fin.eof())
		{
			fin >> cn;
			fin >> cp;
			if (cn.compare(cid) == 0 && cp.compare(cbirth) == 0)
			{
				temp_str = cp;
				check = 1;
				break;

			}
		}
		if (check == 0)
		{
			cout << "You Entered a wrong user name or password." << endl;
		}

		fin.close();
	}

	void MeterInstallment()
	{
		int id = 0004;
		cout << "Coustomer Information  \n\n";

		cout << "Enter date of birth:";
		cin >> cbirth;
		cout << "Enter name:";
		cin >> cname;
		cout << "Enter adress:";
		cin >> cadress;
		cout << "Enter Phone Number:";
		cin >> cphonenumber;
		cout << "Enter Date of connection:";
		cin >> cconnection;

		ofstream out;
		out.open("customerinfo.txt", ios::app);
		id++;
		out << endl;
		out << "00" << id << " " << cbirth << " " << cname << " " << cadress << " " << cphonenumber << " " << cunit << "  " << cconnection;

		cout << "\n New Meter installed.";
		out.close();
	}
	void updatecoustomerEntry()
	{

		cout << "Enter which entry do you want to update:";
		cin >> oldval;

		cout << "Enter new value:";
		cin >> nval;


		ifstream fin;
		fin.open("customerinfo.txt");
		cn = new string[50];
		string temp_str;
		int i = 0;
		while (!fin.eof())
		{
			if (i != 0)
				i++;

			fin >> cn[i];

			if (oldval.compare(cn[i]) == 0)
			{
				temp_str = cn[i];
				check = 1;
				break;

			}
			if (i == 8)
			{
				i = 0;
			}

		}

		fin.close();




		cout << endl;
		cout << "\n\nvalue updated successfully.\n";


		int count = 0;
		ifstream fin2;
		ofstream fout;
		string strTemp;
		fout.open("Text.txt", ios::app);
		fin2.open("customerinfo.txt", ios::app);
		if (check == 1)
		{
			while (fin2 >> strTemp)
			{
				count++;
				if (strTemp == oldval)
				{
					strTemp = nval;
				}

				strTemp += " ";
				fout << strTemp;
				if (count % 8 == 0)
					fout << endl;
			}
			fin2.close();
			fout.close();


			std::ofstream ofs;
			ofs.open("customerinfo.txt", std::ofstream::out | std::ofstream::trunc);
			ofs.close();


			ifstream fin3;
			ofstream fout4;
			fout4.open("customerinfo.txt", ios::app);
			fin3.open("Text.txt", ios::app);
			count = 0;

			while (fin3 >> strTemp)
			{
				count++;
				strTemp += " ";
				fout4 << strTemp;

				if (count % 8 == 0)
					fout4 << endl;
			}
			fin3.close();
			fout4.close();

			std::ofstream ofs2;
			ofs2.open("Text.txt", std::ofstream::out | std::ofstream::trunc);
			ofs2.close();
		}


	}


	~coustomer()
	{
		delete[]cn;
	}
};
class billing
{
	string bid;
	string bmonth;
	int bmeterreading;
	string bentrydate;
	int bcostE;
	int bStax;
	int bFcharges;
	int btotal;
	string bduedate;
	string bstatus;
	string bPaymentdate;
	string nval;
	string oldval;
	string* cn;
	string* cp;
	string** arr;
	string** arr1;
public:
	billing()
	{
		bid = " ";
		bmonth = " ";
		bmeterreading = 0;
		bentrydate = " ";
		bcostE = 0;
		bStax = 0;
		bFcharges = 0;
		btotal = 0;
		bduedate = " ";
		bstatus = " ";
		bPaymentdate = " ";

		nval = " ";
		oldval = " ";
	}
	void meter_reading()
	{
		cout << "Meter Readings  \n\n";

		cout << "Enter four digit id:";
		cin >> bid;
		cout << "Enter billing month:";
		cin >> bmonth;
		cout << "Enter current meter reading:";
		cin >> bmeterreading;
		cout << "Enter Date of Entry:";
		cin >> bentrydate;
		cout << "Enter cost of electricity:";
		cin >> bcostE;
		cout << "Enter sales Tax amount:";
		cin >> bStax;
		cout << "Enter fixed charges:";
		cin >> bFcharges;
		cout << "Enter Due Date:";
		cin >> bduedate;
		cout << "Enter status of bill is it (PAID) or (UNPAID):";
		cin >> bstatus;
		if (bstatus == "PAID")
		{
			cout << "Enter Bill payment Date:";
			cin >> bPaymentdate;
		}
		btotal = bcostE + bStax + bFcharges;
		ifstream in;



		ofstream outt;
		outt.open("billinfo.txt", ios::app);
		outt << endl;
		outt << bid << " " << bmonth << " " << bmeterreading << " " << bentrydate << " " << bcostE << " " << bStax << " " << bFcharges << " " << btotal << " " << bduedate << " " << bstatus << " " << bPaymentdate;

		cout << "\nMeter Readings Entered in the system.";
		outt.close();
	}

	void update_payment() {

		string curr_reading;

		cout << "Enter ID of customer who paid the bill : ";
		cin >> oldval;

		
		nval = "PAID";

		cout << endl;
		cout << "\n\nvalue updated successfully.\n";


		int count = 0;
		ifstream ff2;
		ofstream ffout;
		string strTemp;
		ffout.open("Text.txt", ios::app);
		ff2.open("billinfo.txt", ios::app);
		
		while (ff2 >> strTemp)
		{
			if (oldval.compare(strTemp) == 0)
			{
				
				for (int i = 1; i <= 11; i++)
				{

					if (i == 3)
					{
						curr_reading = strTemp;
						//cout << curr_reading << endl;
					}

					count++;
					
					if(i==11)
						strTemp = nval;

					if(count%12 != 0)
						strTemp += " ";
					ffout << strTemp;
					if (count % 12 == 0)
						ffout << endl;

					ff2 >> strTemp;
				}

			}
			count++;
			
			if (count % 12 != 0)
				strTemp += " ";
			ffout << strTemp;
			if (count % 12 == 0)
				ffout << endl;
		}
		ff2.close();
		ffout.close();


		std::ofstream of8;
		of8.open("billinfo.txt", std::ofstream::out | std::ofstream::trunc);
		of8.close();


		ifstream ffin3;
		ofstream ffout4;
		ffout4.open("billinfo.txt", ios::app);
		ffin3.open("Text.txt", ios::app);
		count = 0;

		while (ffin3 >> strTemp)
		{
			count++;
			strTemp += " ";
			ffout4 << strTemp;

			if (count % 12 == 0)
				ffout4 << endl;
		}
		ffin3.close();
		ffout4.close();

		std::ofstream of9;
		of9.open("Text.txt", std::ofstream::out | std::ofstream::trunc);
		of9.close();
		
		//to change meter reading in customer.txt (updating it to latest)

		count = 0;
		ifstream ff3;
		ofstream fout22;
		fout22.open("Text.txt", ios::app);
		ff3.open("customerinfo.txt", ios::app);

		while (ff3 >> strTemp)
		{
			if (oldval.compare(strTemp) == 0)
			{

				for (int i = 1; i <= 14; i++)
				{


					count++;

					if (i == 13)
						strTemp = curr_reading;

					if (count % 14 != 0)
						strTemp += " ";
					fout22 << strTemp;
					if (count % 14 == 0)
						fout22 << endl;

					ff3 >> strTemp;
				}

			}
			count++;

			if (count % 14 != 0)
				strTemp += " ";
			fout22 << strTemp;
			if (count % 14 == 0)
				fout22 << endl;
		}
		ff3.close();
		fout22.close();


		std::ofstream of22;
		of22.open("customerinfo.txt", std::ofstream::out | std::ofstream::trunc);
		of22.close();


		ifstream ffin32;
		ofstream fout44;
		fout44.open("customerinfo.txt", ios::app);
		ffin32.open("Text.txt", ios::app);
		count = 0;

		while (ffin32 >> strTemp)
		{
			count++;
			strTemp += " ";
			fout44 << strTemp;

			if (count % 14 == 0)
				fout44 << endl;
		}
		ffin32.close();
		fout44.close();

		std::ofstream of99;
		of99.open("Text.txt", std::ofstream::out | std::ofstream::trunc);
		of99.close();



	}

	void updatebillingEntry()
	{

		cout << "Enter which entry do you want to update:";
		cin >> oldval;

		cout << "Enter new value:";
		cin >> nval;


		ifstream fin;
		fin.open("billinfo.txt");

		cn = new string[50];
		string temp_str;
		int i = 0;
		while (!fin.eof())
		{
			if (i != 0)
				i++;

			fin >> cn[i];

			if (oldval.compare(cn[i]) == 0)
			{
				temp_str = cn[i];
				check = 1;
				break;

			}
			if (i == 8)
			{
				i = 0;
			}
			if (i == 0)
			{
				i++;
			}

		}

		fin.close();




		cout << endl;
		cout << "\n\nvalue updated successfully.\n";


		int count = 0;
		ifstream fin2;
		ofstream fout;
		string strTemp;
		fout.open("Text.txt", ios::app);
		fin2.open("billinfo.txt", ios::app);
		if (check == 1)
		{
			while (fin2 >> strTemp)
			{
				count++;
				if (strTemp == oldval)
				{
					strTemp = nval;
				}

				strTemp += " ";
				fout << strTemp;
				if (count % 11 == 0)
					fout << endl;
			}
			fin2.close();
			fout.close();


			std::ofstream ofs;
			ofs.open("billinfo.txt", std::ofstream::out | std::ofstream::trunc);
			ofs.close();


			ifstream fin3;
			ofstream fout4;
			fout4.open("billinfo.txt", ios::app);
			fin3.open("Text.txt", ios::app);
			count = 0;

			while (fin3 >> strTemp)
			{
				count++;
				strTemp += " ";
				fout4 << strTemp;

				if (count % 11 == 0)
					fout4 << endl;
			}
			fin3.close();
			fout4.close();

			std::ofstream ofs2;
			ofs2.open("Text.txt", std::ofstream::out | std::ofstream::trunc);
			ofs2.close();
		}


	}

	void DisplayBill()
	{
		cout << "Enter four digit id:";
		cin >> bid;

		ifstream fin;
		fin.open("billinfo.txt");

		cp = new string[50];
		string temp_str;
		int i = 0;
		while (!fin.eof())
		{
			if (i != 0)
				i++;

			fin >> cp[i];

			if (bid.compare(cp[i]) == 0)
			{
				temp_str = cp[i];
				check = 1;
				break;

			}
			if (i == 8)
			{
				i = 0;
			}
			if (i == 0)
			{
				i++;
			}

		}

		fin.close();




		cout << endl;
		cout << "\n\nAmount Of Paid And Unpaid Bills .\n\n";


		int count = 0;
		ifstream fin2;
		string strTemp;
		string val;
		arr = new string * [200];
		for (int i = 0; i < 200; i++)
		{
			arr[i] = new string[200];
		}
		arr1 = new string * [200];
		for (int i = 0; i < 200; i++)
		{
			arr1[i] = new string[200];
		}
		fin2.open("billinfo.txt");
		if (check == 1)
		{
			int i = 0;
			while (!fin.eof())
			{

				fin2 >> arr[i][0];
				if (arr[i][0] == temp_str)
				{
					cout << arr[i][0] << " ";
					count = 0;
					while (fin2 >> arr1[i][count])
					{


						arr1[i][count] += " ";
						cout << arr1[i][count];
						if (count % 9 == 0 && count != 0)
						{
							cout << endl;
							break;
						}
						count++;
					}
				}
				if (i == 100)
				{
					break;
				}
				i++;
			}
			fin2.close();
		}
	}

	~billing()
	{
		for (int i = 0; i < 200; i++)
			delete arr[i];
		delete arr;

		for (int i = 0; i < 200; i++)
			delete arr1[i];
		delete arr1;


		delete[]cn;
	}
};
int main()
{
	char choice;
	int n;
	employee e;
	coustomer c;
	billing b;
	char s;

	while (1)
	{
		cout << "\n*****Welcome To LESCO Billing System*****\n\n";
		cout << "\n***** MENUE******\n\n";
		cout << "1. Login Employee Id.\n";
		cout << "2. Login Coustomer Id.\n";
		cout << "-1.Quit\n\n";

		cout << "\nEnter your choice:";
		cin >> n;

		if (n == 1)
		{
			e.employeedata();
			e.chkemployeeid();
			if (check == 1)
			{
				while (1)
				{
					cout << "\n*****SUB-MENUE******\n\n";
					cout << "\n\nN.change password.\n";
					cout << "B.Enter meter reading in system\n";
					cout << "P.Paid/Unpaid Monthly update in the customer bill\n";
					cout << "U.update any entry in coustomer info\n";
					cout << "E.update any entry in bill info\n";
					cout << "Q.Logout from employee id\n";
					cout << "D.Display Amount of paid and unpaid bills\n";
					cout << "\nWhat operation do you want to perform:";
					cin >> s;



					if (s == 'N')
					{
						e.change_password();
						system("cls");
						break;
					}
					if (s == 'B')
					{
						b.meter_reading();
					}
					if (s == 'P')
					{
						b.update_payment();
					}
					if (s == 'Q')
					{
						cout << "You are logged out from employee id.";
						system("cls");
						break;
					}
					if (s == 'U')
					{
						c.updatecoustomerEntry();
					}

					if (s == 'E')
					{
						b.updatebillingEntry();
					}
					if (s == 'D')
					{
						b.DisplayBill();
					}
					system("pause");
					system("cls");
					check = 0;
				}
			}
			system("pause");
			system("cls");
		}
		if (n == 2)
		{
			c.coustomerdata();
			c.chkcostumerid();
			if (check == 1)
			{
				cout << "\n*****SUB-MENUE******\n\n";
				cout << "Y.Yes\n";
				cout << "N.No\n";
				cout << "\nDo you want to install new meter\n:";
				cin >> choice;
				if (choice == 'Y')
				{
					c.MeterInstallment();
				}
				if (choice == 'N')
				{
					cout << "\nLogged Out of Coustemer Id.";
				}
				check = 0;
			}
			system("pause");
			system("cls");
		}
		if (n == -1)
		{
			system("cls");
			cout << "\nThank You\n";
			break;
		}

		system("cls");
	}

	system("pause");
	return 0;
}