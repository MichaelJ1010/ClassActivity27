#ifndef OPERATOR_H
#define OPERATOR_H

#include "./Book.hpp"
#include <ostream>

using std::ostream;

namespace out {
	ostream& operator<<(ostream& stream, const book::Book& book);
}
#endif