#include "./Book.hpp"
#include <string>

namespace notequal {
	bool operator!=(std::string title, const book::Book& book1) {
		return (title != book1.title);
	}
}