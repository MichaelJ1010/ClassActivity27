#ifndef BOOK_H
#define BOOK_H

#include "./ReleaseDate.hpp"
#include <string>

namespace book {
	struct Book {
		std::string title;
		std::string author;
		int numberOfCopies;
		release::ReleaseDate date;
	};

}

#endif