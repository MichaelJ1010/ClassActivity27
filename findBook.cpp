#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include "./Book.hpp"
#include "./operator.hpp"
#include "./operator!=.hpp"

using namespace std;
using namespace notequal;
using namespace out;

namespace find {
	void findBook(const vector<book::Book>& collection) {
		string title;
		bool found = false;
		int size = collection.size();

		cout << "Please enter the title of the book you are trying to find." << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin, title);

		for (int i = 0; i < size; i++) {
			if (title != collection[i]) {
				continue;
			}
			cout << "Found book: " << collection[i] << "\nCopies left: " << collection[i].numberOfCopies << endl;
			found = true;
		}
		if (!found) {
			cout << "Sorry, we don't have that book!" << endl;
		}


	}
}