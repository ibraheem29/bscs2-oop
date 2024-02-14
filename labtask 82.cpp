#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

class animal {
protected:
    string name;
    string species;
    int age;

public:
    animal() {
        name = "";
        species = "";
        age = 0;
    }

    animal(string n, string s, int a) {
        name = n;
        species = s;
        age = a;
    }

    void displayinfo() {
        cout << "the name of animal : " << name << endl;
        cout << "the name of species : " << species << endl;
        cout << "the age of animal : " << age << endl;
    }
};

class enclosure : public animal {
protected:
    string type;
    vector<animal> animals; // Use a vector to store multiple animals
    string typeofenclosure;

public:
    enclosure() : animal() {
        type = "";
        typeofenclosure = "";
    }

    enclosure(string t, string te) : animal() {
        type = t;
        typeofenclosure = te;
    }

    void addanimal() {
        animal a;
        cout << "Enter the name of animal : ";
        cin >> a.name;
        cout << "Enter the species of animal : ";
        cin >> a.species;
        cout << "Enter the age of animal : ";
        cin >> a.age;

        animals.push_back(a);

        cout << "Animal added" << endl;
    }

    void displayenclosureinfo() {
        cout << "Enclosure type: " << type << endl;
        cout << "Type of enclosure: " << typeofenclosure << endl;

        for (const auto& a : animals) {
            cout << "Animal details:" << endl;
            a.displayinfo();
            cout << "------------------------" << endl;
        }
    }
};

class zookeeper : public enclosure {
protected:
    string namep;
    string assigned_enclosure_type;

public:
    zookeeper() : enclosure() {
        namep = "";
        assigned_enclosure_type = "";
    }

    zookeeper(string np, string at) : enclosure() {
        namep = np;
        assigned_enclosure_type = at;
    }

    void addzookeeper() {
        cout << "Enter the name of zookeeper : ";
        cin >> namep;
    }

    void assigned_enclosure(string enclosureType) {
        assigned_enclosure_type = enclosureType;
        cout << "Enclosure type assigned to zookeeper " << namep << ": " << assigned_enclosure_type << endl;
    }

    void DisplayZooKeeperInfo() {
        cout << "Name of zookeeper: " << namep << endl;
        cout << "Type of enclosure they are assigned to: " << assigned_enclosure_type << endl;
    }
};

class zoo {
protected:
    int list_of_enclosure;
    zookeeper z2;

public:
    zoo() {
        list_of_enclosure = 0;
    }

    void addZookeeper() {
        z2.addzookeeper();
    }

    void assignEnclosure() {
        string enclosureType;
        cout << "Enter the type of enclosure to assign to the zookeeper: ";
        cin >> enclosureType;
        z2.assigned_enclosure(enclosureType);
        list_of_enclosure++;
    }

    void displayZooInfo() {
        cout << "\nZOO DETAILS..." << endl;
        z2.DisplayZooKeeperInfo();
    }

    char menu() {
        char op;
        cout << "\n1. ADD ZOOKEEPER\n";
        cout << "2. ASSIGN ENCLOSURE\n";
        cout << "3. DISPLAY ZOO INFO\n";
        cout << "4. EXIT\n";
        cout << "Enter your choice: ";
        cin >> op;
        return op;
    }
};

int main() {
    char option;
    zoo z1;

    do {
        system("cls");
        option = z1.menu();
        switch (option) {
        case '1':
            z1.addZookeeper();
            break;
        case '2':
            z1.assignEnclosure();
            break;
        case '3':
            z1.displayZooInfo();
            break;
        case '4':
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    } while (option != '4');

    return 0;
}

