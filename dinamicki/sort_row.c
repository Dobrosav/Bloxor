#include"dz3p1.h"
node sort_row(node otac) {
	if (otac.node1.row > otac.node2.row) {
		int row = otac.node1.row;
		int col = otac.node1.col;
		otac.node1.col = otac.node2.col;
		otac.node1.row = otac.node2.row;
		otac.node2.col = col;
		otac.node2.row = row;
	}
	return otac;
}