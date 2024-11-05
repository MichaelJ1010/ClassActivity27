#ifndef ADDBOOK_H
#define ADDBOOK_H

#include "./Book.hpp"
#include <vector>

namespace store {
	book::Book addBook(const std::vector<book::Book>& collection);
}



#endif
