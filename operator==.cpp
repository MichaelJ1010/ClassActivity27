#include "./Book.hpp"
#include "./ReleaseDate.hpp"
#include <string>

using namespace book;
using namespace release;

namespace equal {
	bool operator==(const Book& book1, const Book& book2) {
		return (book1.title == book2.title && book1.author == book2.author && book1.date.month == book2.date.month
			&& book1.date.day == book2.date.day && book1.date.year == book2.date.year);
	}
}