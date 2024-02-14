#include <iostream>
#include <vector>
#include <string>
using namespace std;

class shop {
public:
    string name;
    int price;
    string category;
    int stockQuantity;        
    int minStockQuantity;   

    shop() {
        name = "";
        price = 0;
        category = "";
        stockQuantity = 0;      
        minStockQuantity = 0;  
    }

    shop(string n, int p, string c, int s, int m) {
        name = n;
        price = p;
        category = c;
        stockQuantity = s;
        minStockQuantity = m;
    }
    shop(shop & a){
    	name=a.name;
    	price=a.price;
    	category=a.category;
    	stockQuantity=a.stockQuantity;
    	minStockQuantity=a.minStockQuantity;
	}

    char menu() {
        system("cls");
        char choice;
        cout << "Press 1 for adding a product: " << endl;
        cout << "Press 2 for showing a product: " << endl;
        cout << "Press 3 for product with highest price : " << endl;
        cout << "Press 4 for total price : " << endl;
        cout << "Press 5 for View Sales Tax of All Products" << endl;  
        cout <<"Press 6 for product to be odered : "<<endl;
        cin >> choice;
        cin.ignore();
        return choice;
    }

    shop addproduct() {
        system("cls");
        shop s1;
        cout << "Enter name: ";
        cin >> s1.name;
        cout << "Enter Price: ";
        cin >> s1.price;
        cout << "Enter category: ";
        cin >> s1.category;
        cout << "Enter stock quantity: ";
        cin >> s1.stockQuantity;        
        cout << "Enter minimum stock quantity: ";
        cin >> s1.minStockQuantity;    
        return s1;
    }

    void showsproduct(shop s[], int count) {
        system("cls");
        if (count == 0) {
            cout << "No record found " << endl;
        }
        for (int i = 0; i < count; i++) {
            cout << "\nName: " << s[i].name << "\nPrice: " << s[i].price  << "\nCategory: " << s[i].category  << "\nStock Quantity: " << s[i].stockQuantity<<"\nMinimum Stock Quantity: " << s[i].minStockQuantity << endl;
            float salesTax = s[i].calculateSalesTax();
            cout << "Sales Tax: " << salesTax << endl;        
        }
	    cout << "Press any key to continue" << endl;
        cin.ignore();
        cin.get();
    }

    void viewSalesTax(shop s[], int count) {
        system("cls");
        if (count == 0) {
            cout << "No products found." << endl;
        }
        for (int i = 0; i < count; i++) {
            cout << "Name: " << s[i].name << "\nSales Tax: " << s[i].calculateSalesTax() << endl;
        }
        cout << "Press any key to continue" << endl;
        cin.ignore();
        cin.get();
    }

    int largest(shop s[], int start, int end) {
        int index = start;
        float large = s[start].price;
        for (int x = start; x < end; x++) {
            if (large < s[x].price) {
                large = s[x].price;
                index = x;
            }
        }
        return index;
    }

    void total(shop s[], int count) {
        system("cls");
        if (count == 0) {
            cout << "No record found " << endl;
        }
        else if (count == 1) {
            showsproduct(s, 1);
        }
        else if (count == 2) {
            for (int x = 0; x < 2; x++) {
                int index = largest(s, x, count);
                shop temp = s[index];
                s[index] = s[x];
                s[x] = temp;
            }
            showsproduct(s, 2);
        }
        else {
            for (int x = 0; x < 3; x++) {
                int index = largest(s, x, count);
                shop temp = s[index];
                s[index] = s[x];
                s[x] = temp;
            }
        }

        showsproduct(s, 3);
    }

    void totalPrice(shop s[], int count) {
        system("cls");
        if (count == 0) {
            cout << "No products found." << endl;
        }
        else {
            int total = 0;
            for (int i = 0; i < count; i++) {
                total += s[i].price;  
            }          
            cout << "Total price of all products: " << total << endl;  
        }
        cout << "Press any key to continue" << endl;
        cin.ignore();
        cin.get();
    }

    float calculateSalesTax() {
        float taxRate;
        if (category == "fruits") {
            taxRate = 0.10; 
        }
        else if (category == "groceries") {
            taxRate = 0.05;
        }
        else {
            taxRate = 0.15; 
        }
        return price * taxRate;
    }

    bool needsReorder() {
        if (stockQuantity < minStockQuantity) {
            return true;
        }
        else {
            return false;
        }
    }
    void displayProductsToBeOrdered(shop s[], int count) {
    system("cls");
    bool productsToBeOrdered = false;

    if (count == 0) {
        cout << "No products found." << endl;
    } 
	else {
        
        for (int i = 0; i < count; i++) {
            if (s[i].needsReorder()) {
                productsToBeOrdered = true;
                cout <<"product Need to be odered "<<endl;
            }
        }
        if (!productsToBeOrdered) {
            cout << "No products need to be reordered." << endl;
        }
    }

    cout << "Press any key to continue" << endl;
    cin.ignore();
    cin.get();
}

    
};

int main() {
    shop s[3];
    char option;
    int count = 0;
    shop obj;
    do {
        option = obj.menu();
        if (option == '1') {
            s[count] = obj.addproduct();
            count = count + 1;
        }
        else if (option == '2') {
            obj.showsproduct(s, count);
        }
        else if (option == '3') {
            obj.total(s, count);
        }
        else if (option == '4') {
            obj.totalPrice(s, count);
        }
        else if (option == '5') {
            obj.viewSalesTax(s, count);
        }
        else if (option == '6') {
            obj.displayProductsToBeOrdered(s,count);
        }
        else if(option=='7'){
        	break;
            
        }
        else{
        	cout << "Invalid choice" << endl;
		}
    } while (option != '7');
    cout << "Press enter to exit";
    cin.ignore();
    cin.get();
}

