#ifndef OPERATOR_EQUALS_H
#define OPERATOR_EQUALS_H

#include "./Book.hpp"

namespace equal {
	bool operator==(const book::Book& book1, const book::Book& book2);
}

#endif