#include"dz3p1.h"
node first_s(edges_type *edges,int size) {
	node new;
	new.node1.s = 0;
	new.node2.s = 0;
	for (int i = 0; i < size; i++) {
		if (edges[i].s == 1)
			if(new.node1.s == 0){
			new.node1 = edges[i];
			new.node2 = edges[i];
			new.node2.s = 0;
		}
		else if (new.node1.s == 1) {
			new.node2 = edges[i];
			return new;
		}
			
	}
	new.node2.s = 1;
	return new;
}