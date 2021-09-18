#include"dz3p1.h"
void resenje(heap_type heap) {
	printf("Koraci\n");
	node sin = heap.inf[heap.size -2];//-3
	printf("T:");
	while (sin.node1.row != -5) {
		printf("%d", sin.node1.row);
		printf(",%d", sin.node1.col);
		if ((sin.node1.row == sin.node2.row) && (sin.node1.col == sin.node2.col)){}
		else {
			printf(" ; %d", sin.node2.row);
			printf(",%d", sin.node2.col);
		}
		printf("\n");
	sin = *(sin.otac);
	}

}