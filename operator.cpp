#include "./operator.hpp"
#include "./Book.hpp"
#include "./ReleaseDate.hpp"

using std::ostream;
using namespace book;
using namespace release;

namespace out {
	ostream& operator<< (ostream& stream, const Book& book) {
		return stream << "\"" << book.title << "\"" <<  ", by: " << book.author 
			<< "\nPublished " << book.date.month << "/" << book.date.day << "/" << book.date.year;

	}
}