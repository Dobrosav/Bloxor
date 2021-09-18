#include"dz3p1.h"
void move(edges_type *edges,int size,int m,int n) {
	node poz = first_s(edges,size);
	char zn;
	while (1) {
		system("cls");
		while (getchar() != '\n');
		screen(edges, m, n,size);
		printf("\nUnesite potez: ");
		scanf_s("%c", &zn, 1);
		if (zn == 'A' || zn == '1') zn = 1;
		else if (zn == 'S' || zn == '2')
			zn = 2;
		else if (zn == 'D' || zn == '3') zn = 3;
		else if (zn == 'W' || zn == '4') zn = 4;
		if (zn == '0') return;
		node proba=sused2(edges,poz,size,zn);
		if (proba.node1.row == -1) {
			system("COLOR CF");
			printf("\nKraj");
			return; 
		}
		if ((proba.node1.t == 1) && (proba.node2.t == 1)) {
			printf("Pobeda");
			break;
		}
		edges[find_in_edge(edges, poz.node1.row, poz.node1.col, size)].s = 0;
		edges[find_in_edge(edges, poz.node2.row, poz.node2.col, size)].s = 0;
		poz = proba;
		edges[find_in_edge(edges, poz.node1.row, poz.node1.col, size)].s = 1;
		edges[find_in_edge(edges, poz.node2.row, poz.node2.col, size)].s = 1;
		poz.node1.s = 1;
		poz.node2.s = 1;
		system("COLOR F0");
	}
}