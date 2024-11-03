#include "./Book.hpp"
#include "./ReleaseDate.hpp"
#include "./Choice.hpp"
#include <iostream>
#include <limits>


using namespace book;
using namespace std;
using namespace release;

namespace store {
	Book addBook() {
		string title;
		string author;
		int copies;
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

			return Book{ title, author, copies, {month, day, year} };
	}
}