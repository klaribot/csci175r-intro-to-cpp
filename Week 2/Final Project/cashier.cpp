//Booksellers Final Project - Week 2 - Justin Reed
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int quantity;
    float unitPrice, totalPerEntry;
    string date, isbn, title;

    cout << "Booksellers" << endl;
    cout << " Cashier Module" << endl << endl;

    // Prompt user for shopping information
    cout << "Date (MM/DD/YY): ";
    cin >> date;
    cout << "Quantity of Book: ";
    cin >> quantity;
    cout << "ISBN: ";
    cin >> isbn;
    cout << "Title: ";
    cin >> title;
    cout << "Price: ";
    cin >> unitPrice;
    cout << endl;

    // Calculate total per each book entry
    totalPerEntry = quantity * unitPrice;

    cout << "Booksellers" << endl << endl;

    cout << "Date: " << date << endl << endl;

    cout << "Qty\tISBN\t\tTitle\t\t\t\tPrice\t\tTotal" << endl;
    cout << "_____________________________________________________________________________" << endl;
    cout << quantity << "\t" << isbn << "\t\t" << title << "\t\t\t" << unitPrice << "\t\t" << totalPerEntry << endl << endl;

    cout << "\tSubtotal" << endl;
    cout << "\tTax" << endl;
    cout << "\tTotal" << endl << endl;

    cout << "Thank You for shopping at Booksellers!" << endl;
}
