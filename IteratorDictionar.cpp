#include "IteratorDictionar.h"
#include "Dictionar.h"

using namespace std;

IteratorDictionar::IteratorDictionar(const Dictionar& d) : dict(d) {
	/* de adaugat */
	this->index = 0;
	this->current->key = dict.elem->key;
	this->current->val = dict.elem->val;
	this->current->next = NULL;
}

void IteratorDictionar::prim() {
	/* de adaugat */
	this->index = dict.primLiber;
}


void IteratorDictionar::urmator() {
	/* de adaugat */
}


TElem IteratorDictionar::element() const {
	/* de adaugat */
	if (!valid()) return pair <TCheie, TValoare>(-1, -1);
	else return dict.elems[this->current->key];
}

bool IteratorDictionar::valid() const {
	/* de adaugat */
	if (this->current != NULL) return true;
	return false;
}

