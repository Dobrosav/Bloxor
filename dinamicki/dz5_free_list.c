#include"dz3p1.h"
void free_list(list **a_first, list **a_last) {
	while (*a_first) {
	}
	free((*a_first));
}