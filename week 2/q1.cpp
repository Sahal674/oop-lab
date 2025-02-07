// sahal arif
// 24k-0991


#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

int main() {
    int n, filteryear;
    cout << "Enter the number of books in libry: ";
    cin >> n;

    Book* books = new Book[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter title of the book " << i + 1 << ": ";
        cin >> books[i].title; 
        cout << "Enter author nsame " << i + 1 << ": ";
        cin >> books[i].author;  
        cout << "Enter publication year " << i + 1 << ": ";
        cin >> books[i].year;
    }

    cout << "Enter a year to filter books published after: ";
    cin >> filteryear;

    cout << "Books published after " << filteryear << ":\n";
    for (int i = 0; i < n; i++) {
        if (books[i].year > filteryear) {
            cout << "Title: " << books[i].title << ", Author: " << books[i].author << ", Year: " << books[i].year << endl;
        }
    }

    delete[] books;
    return 0;
}