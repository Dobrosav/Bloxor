#include"dz3p1.h"
int find_in_edge(edges_type edge[],int row, int col,int size) {
	for (int i = 0; i<size; i++)
		if ((row == edge[i].row) && (col == edge[i].col))
			return i;
	return -1;
}