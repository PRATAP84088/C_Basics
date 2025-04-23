#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isAvailable;
};

vector<Book> books;

void addBook() {
    Book b;
    cout << "Enter book ID: ";
    cin >> b.id;
    cout << "Enter book title: ";
    cin >> b.title;
    cout << "Enter book author: ";
    cin >> b.author;
    b.isAvailable = true;
    books.push_back(b);
}

void searchBook() {
    int id;
    cout << "Enter book ID: ";
    cin >> id;
    for (auto &book : books) {
        if (book.id == id) {
            cout << "Book found: " << book.title << " by " << book.author << endl;
            return;
        }
    }
    cout << "Book not found." << endl;
}

void issueBook() {
    int id;
    cout << "Enter book ID: ";
    cin >> id;
    for (auto &book : books) {
        if (book.id == id && book.isAvailable) {
            book.isAvailable = false;
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
    for (auto &book : books) {
        if (book.id == id && !book.isAvailable) {
            book.isAvailable = true;
            cout << "Book returned." << endl;
            return;
        }
    }
    cout << "Book not issued." << endl;
}

void listBooks() {
    sort(books.begin(), books.end(), [](const Book &a, const Book &b) {
        return a.id < b.id;
    });
    for (const auto &book : books) {
        cout << "Book ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << ", Availability: " << (book.isAvailable ? "Available" : "Issued") << endl;
    }
}

void deleteBook() {
    int id;
    cout << "Enter book ID: ";
    cin >> id;
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->id == id) {
            books.erase(it);
            cout << "Book deleted." << endl;
            return;
        }
    }
    cout << "Book not found." << endl;
}

int main() {
    int choice;
    while (true) {
        cout << "1. Add book\n2. Search book\n3. Issue book\n4. Return book\n5. List books\n6. Delete book\n7. Exit\n";
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
                listBooks();
                break;
            case 6:
                deleteBook();
                break;
            case 7:
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }
    return 0;
}