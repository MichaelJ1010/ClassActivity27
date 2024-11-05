#include <iostream>
#include <vector>
#include <limits>
#include "./Book.hpp"
#include "./Choice.hpp"
#include "addBook.hpp"
#include "findBook.hpp"
#include "./operator==.hpp"

using namespace std;
using namespace book;
using namespace option;
using namespace store;
using namespace equal;
using namespace find;


int main() {
	vector <Book> collection;
	Book newBook;
	string storeName;
	cout << "What's this store name?\n";
	getline(cin, storeName);

	while (true) {
		cout << "Welcome to " << storeName << ". What would you like to do?" << "\n1: add a book" << "\n2: find a book" << "\n3: finish" << endl;
		int choice;
		bool end = false;
		bool copy = false;
		cin >> choice;

		switch (choice) {
		case static_cast<int>(Choice::add):
			newBook = addBook(collection);
			
			for (Book& book : collection) {
				if (newBook == book) {
					book.numberOfCopies += newBook.numberOfCopies;
					copy = true;
					cout << "Book exists. Adding copies" << endl;
				}
			}
			if (!copy) {
				collection.push_back(newBook);
			}
			break;

		case static_cast<int>(Choice::find):
			findBook(collection);
			break;

		case static_cast<int>(Choice::quit):
			cout << "closing system.";
			end = true;
			break;

		default:
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
			cout << "Error: not a valid input." << endl;
			break;
		}
		if (end)
			break;
	}

	return 0;
}