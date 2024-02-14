#include<iostream>
#include<string>  // Include the <string> header for using std::string
using namespace std;

class Book {
protected:
    char bookno[20];
    char bookname[10];

public:
    Book() {
        bookno[0] = '\0';
        bookname[0] = '\0';
    }

    void add() {
        cout << "Enter the book no: ";
        cin >> bookno;
        cout << "Enter book name: ";
        cin >> bookname;
    }

    void display() {
        cout << "Book no: " << bookno << endl;
        cout << "Book name: " << bookname << endl;
    }
};

class Library {
protected:
    // Use a dynamic array to store books
    Book* books[100];  // Assuming a library can have up to 100 books
    int numBooks;  // Track the number of books in the library

public:
    Library() {
        numBooks = 0;
        // Initialize the books array elements to nullptr
        for (int i = 0; i < 100; ++i) {
            books[i] =0;
        }
    }

    void addBook() {
        // Create a new book object dynamically
        books[numBooks] = new Book();
        books[numBooks]->add();
        numBooks++;
    }

    void displayBooks() {
        for (int i = 0; i < numBooks; ++i) {
            cout << "Book " << i + 1 << ":" << endl;
            books[i]->display();
            cout << endl;
        }
    }

    void deleteBook(int index) {
        if (index >= 0 && index < numBooks) {
            // Delete the book object at the specified index
            delete books[index];

            // Shift the remaining books in the array
            for (int i = index; i < numBooks - 1; ++i) {
                books[i] = books[i + 1];
            }

            numBooks--;
        } else {
            cout << "Invalid index for deletion." << endl;
        }
    }

    ~Library() {
        // Deallocate memory for all book objects
        for (int i = 0; i < numBooks; ++i) {
            delete books[i];
        }
    }
};

int main() {
    Library library;

    // Add books to the library
    for (int i = 0; i < 5; i++) {
        cout << "Adding Book " << i + 1 << ":" << endl;
        library.addBook();
    }

    // Display available books
    cout << "Available Books:" << endl;
    library.displayBooks();

    // Delete a book (e.g., book at index 2)
    int indexToDelete;
    cout << "Enter the index of the book to delete: ";
    cin >> indexToDelete;
    library.deleteBook(indexToDelete - 1);  // Adjust index for user input

    // Display updated list of books
    cout << "Updated List of Books:" << endl;
    library.displayBooks();

    return 0;
}

