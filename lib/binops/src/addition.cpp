//

#include "../include/binops.hpp"

using namespace BinOps;

void Addition::setLHS(int lhs) {
	this->lhs = lhs;
}

void Addition::setRHS(int rhs) {
	this->rhs = rhs;
}

int Addition::getLHS() {
	return this->lhs;
}

int Addition::getRHS() {
	return this->rhs;
}

int Addition::perform() {
	return this->lhs + this->rhs;
}
