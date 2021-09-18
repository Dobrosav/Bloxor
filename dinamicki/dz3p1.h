#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define mat 200
#define true 1
#define false 0
#define greska "Greska u povezivanju falja"
typedef struct {
	int row;
	int col;
	int s;
	int t;
}edges_type;
typedef struct c {
	int lvl;
	edges_type node1;
	edges_type node2;
	struct c *otac;
}node;
typedef struct a {
	int size;
	int tek_lvl;
	int tek_otac;
	node *inf;
}heap_type;

int menu();
void print(edges_type edges[],int m,int n,FILE *izlaz);
heap_type form_heap(edges_type *, int size);
node sused(edges_type edge[], node otac, heap_type heap, int size);
int exist_in_heap(heap_type heap, node sin);
int find_in_edge(int row, int col,int size);
node sort_row(node otac);
node sort_col(node otac);
edges_type *load_pok(FILE *ulaz, int *n, int *m, int *size);
void resenje(heap_type heap);
void free_heap(heap_type heap);
void delete_node(edges_type **a_edges,int *size);
void insert_node(edges_type **a_edges,int *size);
void move(edges_type *edges, int size, int m, int n);
node sused2(edges_type edge[], node otac, int size, char zn);
void screen(edges_type *edges, int m, int n, int size);
node first_s(edges_type *edges, int size);
void printcmd(edges_type* edges, int m, int n, int size);