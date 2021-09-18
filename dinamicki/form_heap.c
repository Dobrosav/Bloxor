#include"dz3p1.h"
heap_type form_heap(edges_type *edges,int size) {
	heap_type heap;
	heap.inf = malloc(sizeof(node));
	heap.inf[0] = first_s(edges, size);
	heap.inf[0].otac = malloc(sizeof(node));
	heap.tek_otac = 0;
	heap.size = 1;
	heap.tek_lvl =1;
	heap.inf[0].lvl = 0;
	heap.inf[0].otac->lvl = -1;
	heap.inf[0].otac->node1.col= -5;
	heap.inf[0].otac->node1.row = -5;
	heap.inf[0].otac->node2.row = -5;
	heap.inf[0].otac->node2.col = -5;
	node sin;
	while (1) {
		sin = sused(edges, heap.inf[heap.tek_otac], heap,size);
		sin.otac = malloc(sizeof(node));
		*(sin.otac) = heap.inf[heap.tek_otac];
		while (sin.node1.row != -1) {
			sin.lvl = heap.tek_lvl;
			heap.inf = realloc(heap.inf, (heap.size + 1)*sizeof(node));
			heap.inf[heap.size] = sin;	
			heap.inf[heap.size].lvl = heap.tek_lvl;
			heap.size += 1;
			if ((heap.inf[heap.size - 1].node1.t == 1) && (heap.inf[heap.size - 1].node2.t == 1)) {
				return  heap;
			}
			sin = sused(edges, heap.inf[heap.tek_otac], heap,size);
			sin.otac = malloc(sizeof(node));
			*(sin.otac) = heap.inf[heap.tek_otac];
		}
		heap.tek_otac += 1;
		if (heap.tek_otac > heap.size) return heap;
		if(heap.inf[heap.tek_otac-1].lvl!= heap.inf[heap.tek_otac].lvl)
			heap.tek_lvl+=1;
	}
}