#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isAvailable;
};

Book books[100];
int bookCount = 0;

void addBook() {
    Book b;
    cout << "Enter book ID: ";
    cin >> b.id;
    cout << "Enter book title: ";
    cin >> b.title;
    cout << "Enter book author: ";
    cin >> b.author;
    b.isAvailable = true;
    books[bookCount++] = b;
}

void searchBook() {
    int id;
    cout << "Enter book ID: ";
    cin >> id;
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            cout << "Book found: " << books[i].title << " by " << books[i].author << endl;
            return;
        }
    }
    cout << "Book not found." << endl;
}

void issueBook() {
    int id;
    cout << "Enter book ID: ";
    cin >> id;
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id && books[i].isAvailable) {
            books[i].isAvailable = false;
            cout << "Book issued." << endl;
            return;
        }
    }
    cout << "Book not available." << endl;
}

void returnBook() {
    int id;
    cout << "Enter book ID: ";
    cin >> id;
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id &&!books[i].isAvailable) {
            books[i].isAvailable = true;
            cout << "Book returned." << endl;
            return;
        }
    }
    cout << "Book not issued." << endl;
}

int main() {
    int choice;
    while (true) {
        cout << "1. Add book\n2. Search book\n3. Issue book\n4. Return book\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                issueBook();
                break;
            case 4:
                returnBook();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }
    return 0;
}