#include "./Book.hpp"
#include "./ReleaseDate.hpp"
#include "./operator.hpp"
#include <iostream>
#include <vector>
#include <limits>


using namespace book;
using namespace std;
using namespace release;
using namespace out;

namespace store {
	Book addBook(const vector<book::Book>& collection) {
		string title;
		string author;
		int copies;
		int size = collection.size();
		short month;
		short day;
		short year;
		
			cout << "book title: " << endl;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin, title);
			cout << "author: " << endl;
			/*cin.ignore(numeric_limits<streamsize>::max(), '\n');*/
			getline(cin, author);
			cout << "number of copies: " << endl;
			
			cin >> copies;
			cout << "Publishing month (mm)" << endl;
			cin >> month;
			cout << "day (dd)" << endl;
			cin >> day;
			cout << "year (yyyy)" << endl;
			cin >> year;
			Book newBook{ title, author, copies, {month, day, year} };
			

			cout << "Adding " << Book{ title, author, copies, {month, day, year} } << endl;
			return Book{ title, author, copies, {month, day, year} };
	}
}