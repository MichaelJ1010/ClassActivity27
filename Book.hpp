#ifndef BOOK_H
#define BOOK_H

#include "./ReleaseDate.hpp"

namespace book {
	struct Book {
		string title;
		string author;
		int numberOfCopies;
		release::ReleaseDate date;
	};
}

#endif