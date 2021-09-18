#include"dz3p1.h"
int exist_in_heap(heap_type heap,node sin) {
	for (int i = 0; i <heap.size; i++) {
		if (heap.inf[i].node1.row == sin.node1.row)
			if (heap.inf[i].node1.col == sin.node1.col)
				if (heap.inf[i].node2.row == sin.node2.row)
					if (heap.inf[i].node2.col == sin.node2.col)
				return true;
		if (heap.inf[i].node1.row == sin.node2.row)
			if (heap.inf[i].node1.col == sin.node2.col)
				if (heap.inf[i].node2.row == sin.node1.row)
					if (heap.inf[i].node2.col == sin.node1.col)
						return true;
	}
	return false;
}