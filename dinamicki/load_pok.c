#include"dz3p1.h"
edges_type *load_pok(FILE *ulaz, int *n, int *m,int *size,int *prvi) {
	int num = 0, zn;
	int row = 0;
	int col = 0;
	edges_type *edges = NULL;
	while ((zn = fgetc(ulaz)) != EOF) {
		fseek(ulaz, -1L, SEEK_CUR);
		char c = fgetc(ulaz);
		if (c == '\n') {
			row++;
			*n = col;
			col = 0;
			continue;
		}
		if (c !='-') {
			edges =realloc(edges, (num + 1) * sizeof(edges_type));
			edges[num].col = col++;
			edges[num].row = row;
			if (c == 'o') {
				edges[num].t = false;
				edges[num].s = false;
				num++;
				continue;
			}
			if (c == 'S') {
				edges[num].s = true;
				edges[num].t = false;
				*prvi = num++;
				continue;
			}
			if (c == 'T') {
				edges[num].t = true;
				edges[num++].s = false;
			}
		}
	}
	*size = num;
	*m = ++row;
	return edges;
}