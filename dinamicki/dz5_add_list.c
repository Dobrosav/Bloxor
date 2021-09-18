#include"dz5.h"
void add_list(list **a_first, list **a_last,list *new) {
	if (*a_first == NULL) {
		new->sled = new;
		new->pret = new;
		(*a_first) = new;
		(*a_last) = new;
	}

	else {
		new->sled = NULL;
		new->pret =( *a_last);
		(*a_last)->sled = new;
		(*a_last) = new;
		(*a_first)->pret = NULL;
	}

}