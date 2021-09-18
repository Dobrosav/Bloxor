#include"dz3p1.h"
node sused(edges_type edge[], node otac, heap_type heap,int size) {
	int blizi;
	int dalji;
	node nista;
	nista.node1.row = -1;
	if ((otac.node2.col == otac.node1.col)&&(otac.node2.row== otac.node1.row)) {
		blizi = find_in_edge(edge, otac.node1.row, otac.node1.col + 1,size);
		if (blizi > -1)  if(-1<(dalji = find_in_edge(edge, otac.node1.row, otac.node1.col + 2, size))){
			node sin;
			sin.node1 = edge[blizi];
			sin.node2 = edge[dalji];
			if(!exist_in_heap(heap,sin)) return sin;
		}
		blizi = find_in_edge(edge, otac.node1.row, otac.node1.col -1, size);
		if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node1.row, otac.node1.col -2, size))) {
			node sin;
			sin.node1 = edge[blizi];
			sin.node2 = edge[dalji];
			if (!exist_in_heap(heap, sin)) return sin;
		}
		blizi = find_in_edge(edge, otac.node1.row+1, otac.node1.col, size);
		if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node1.row+2, otac.node1.col, size))) {
			node sin;
			sin.node1 = edge[blizi];
			sin.node2 = edge[dalji];
			if (!exist_in_heap(heap, sin)) return sin;
		}
		blizi = find_in_edge(edge, otac.node1.row-1, otac.node1.col, size);
		if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node1.row-2, otac.node1.col, size))) {
			node sin;
			sin.node1 = edge[blizi];
			sin.node2 = edge[dalji];
			if (!exist_in_heap(heap, sin)) return sin;
		}
	}
	else {
		if ((otac.node2.col != otac.node1.col) && (otac.node1.row == otac.node2.row)) {
			otac = sort_col(otac);
			blizi = find_in_edge(edge, otac.node1.row+1, otac.node1.col, size);
			if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node2.row+1, otac.node2.col, size))) {
				node sin;
				sin.node1 = edge[blizi];
				sin.node2 = edge[dalji];
				if (!exist_in_heap(heap, sin)) return sin;
			}
			blizi = find_in_edge(edge, otac.node1.row -1, otac.node1.col, size);
			if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node2.row -1, otac.node2.col, size))) {
				node sin;
				sin.node1 = edge[blizi];
				sin.node2 = edge[dalji];
				if (!exist_in_heap(heap, sin)) return sin;
			}
			blizi = find_in_edge(edge, otac.node1.row , otac.node1.col - 1, size);
			if (blizi > -1){
				node sin;
				sin.node1 = edge[blizi];
				sin.node2 = edge[blizi];
				if (!exist_in_heap(heap, sin)) return sin;
			}
			blizi = find_in_edge(edge, otac.node2.row, otac.node2.col +1, size);
			if (blizi > -1) {
				node sin;
				sin.node1 = edge[blizi];
				sin.node2 = edge[blizi];
				if (!exist_in_heap(heap, sin)) return sin;
			}

		}
		else{
			otac = sort_row(otac);
			blizi = find_in_edge(edge, otac.node1.row , otac.node1.col+1, size);
			if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node2.row , otac.node2.col+1, size))) {
				node sin;
				sin.node1 = edge[blizi];
				sin.node2 = edge[dalji];
				if (!exist_in_heap(heap, sin)) return sin;
			}
			blizi = find_in_edge(edge, otac.node1.row, otac.node1.col-1, size);
			if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node2.row , otac.node2.col-1, size))) {
				node sin;
				sin.node1 = edge[blizi];
				sin.node2 = edge[dalji];
				if (!exist_in_heap(heap, sin)) return sin;
			}
			blizi = find_in_edge(edge, otac.node1.row-1, otac.node1.col, size);
			if (blizi > -1) {
				node sin;
				sin.node1 = edge[blizi];
				sin.node2 = edge[blizi];
				if (!exist_in_heap(heap, sin)) return sin;
			}
			blizi = find_in_edge(edge, otac.node2.row+1, otac.node2.col, size);
			if (blizi > -1) {
				node sin;
				sin.node1 = edge[blizi];
				sin.node2 = edge[blizi];
				if (!exist_in_heap(heap, sin)) return sin;
			}
		}
		}
	return nista;
	}