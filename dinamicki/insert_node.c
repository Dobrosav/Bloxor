#include"dz3p1.h"
void insert_node(edges_type **a_edges, int *size) {
	printf("\nUnesite poziciciju cvora");
	int i, j;
	printf("\nrow col: ");
	scanf_s("%d %d", &i, &j);
	(*size)++;
	*a_edges = realloc(*a_edges, ((*size) * sizeof(edges_type)));
	(*(a_edges)+*size - 1)->row = i;
	(*(a_edges)+*size-1)->row = j;
	(*(a_edges)+*size - 1)->s = 0;
	(*(a_edges)+*size - 1)->t = 0;
}