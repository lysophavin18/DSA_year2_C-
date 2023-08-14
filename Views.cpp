#include <iostream>
#include <string>
using namespace std;

struct BookData {
    int bookID;
    string bookNAME;
    BookData* next;
};

struct usersData {
    int userID;
    string userNAME;
    char userGender;
    int userAge;
    string DATE;
    BookData* borrowedBooks; // Linked list of borrowed book IDs 
    usersData* next;
};

void viewUserBorrowedBooks(usersData* user) {
    cout << "User " << user->userNAME << "'s Borrowed Books:\n";
    cout << "------------------------------------------\n";
    cout << "Book ID\t\t\t\t BOOK NAME\n";
    cout << "------------------------------------------\n";

    BookData* currentBook = user->borrowedBooks;
    while (currentBook != nullptr) {
        cout << currentBook->bookID << "\t\t\t\t " << currentBook->bookNAME << "\n";
        currentBook = currentBook->next;
    }

    cout << "------------------------------------------\n";
}

void viewAllBooks(BookData* book) {
    cout << "All Books:\n";
    cout << "------------------------------------------\n";
    cout << "Book ID\t\t\t\t BOOK NAME\n";
    cout << "------------------------------------------\n";

    BookData* currentBook = book;
    while (currentBook != nullptr) {
        cout << currentBook->bookID << "\t\t\t\t " << currentBook->bookNAME << "\n";
        currentBook = currentBook->next;
    }

    cout << "------------------------------------------\n";
}

int main() {
    usersData* user1 = new usersData{1, "Nettra", 'F', 25, "2023-08-08"};
    user1->borrowedBooks = new BookData{101, "Book A"};
    user1->borrowedBooks->next = new BookData{102, "Book B"};

    viewUserBorrowedBooks(user1);

    usersData* user2 = new usersData{2, "Sophavinn", 'M', 18, "2023-01-12"};
    user2->borrowedBooks = new BookData{103, "Book C"};
    user2->borrowedBooks->next = new BookData{104, "Book D"};

    viewUserBorrowedBooks(user2);

    // Creating book data for the viewAllBooks function
    BookData* allBooks = new BookData{101, "Book A"};
    allBooks->next = new BookData{102, "Book B"};
    allBooks->next->next = new BookData{103, "Book C"};
    allBooks->next->next->next = new BookData{104, "Book D"};

    viewAllBooks(allBooks);

    return 0;
}
