#include"dz3p1.h"
void delete_node(edges_type **a_edges, int *size) {
	printf("\nUnesite poziciciju cvora");
	int i, j;
	printf("\nrow col: ");
	scanf_s("%d %d", &i, &j);
	int poz = find_in_edge(*a_edges,i,j,*size);
	if (poz ==-1) return;
	else {
		(*size)--;
		(*a_edges)[poz] = (*a_edges)[*size];
		*a_edges = realloc(*a_edges, ((*size) * sizeof(edges_type)));
	}
	
}