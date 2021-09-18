#include"dz3p1.h"
void screen(edges_type *edges, int m, int n, int size) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int k = find_in_edge(edges, i, j, size);
			if (k > -1) {
				if (edges[k].s != 1 && edges[k].t != 1)
					printf("o");
				else if (edges[k].s == 1)
					printf("S");
				else if (edges[k].t == 1)
					printf("T");
			}
			else printf("–");
		}
		printf("\n");
	}
}