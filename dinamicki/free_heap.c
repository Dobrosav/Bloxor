#include"dz3p1.h"
void free_heap(heap_type heap) {
	for(int i=0;i<heap.size;i++)
		free(heap.inf[i].otac);
		free(heap.inf);
		heap.inf = NULL;
}