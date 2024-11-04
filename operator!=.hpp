#ifndef OPERATOR_NOTEQUALS_H
#define OPERATOR_NOTEQUALS_H

#include "./Book.hpp"
#include <string>

namespace notequal {
	bool operator!=(std::string title, const book::Book& book1);
}

#endif