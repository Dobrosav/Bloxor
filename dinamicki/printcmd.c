#include"dz3p1.h"
void printcmd(edges_type* edges, int m, int n, int size, FILE* izlaz) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int k = find_in_edge(edges, i, j, size);
			if (k > -1) {
				if (edges[k].s != 1 && edges[k].t != 1)
					fprintf(stdout, "o");
				else if (edges[k].s == 1)
					fprintf(stdout, "S");
				else if (edges[k].t == 1)
					fprintf(stdout, "T");
			}
			else fprintf(stdout, "–");
		}
		fprintf(stdout, "\n");
	}
}