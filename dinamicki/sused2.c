#include"dz3p1.h"
node sused2(edges_type edge[], node otac, int size, char zn) {
	int blizi;
	int dalji;
	node nista;
	nista.node1.row = -1;
	if ((otac.node2.col == otac.node1.col) && (otac.node2.row == otac.node1.row)) {
		switch (zn) {
		case 4:blizi = find_in_edge(edge, otac.node1.row, otac.node1.col + 1, size);
			if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node1.row, otac.node1.col + 2, size))) {
				node sin;
				sin.node1 = edge[blizi];
				sin.node2 = edge[dalji];
				return sin;
			}otac.node1.row = -1; return otac;
		case 3:blizi = find_in_edge(edge, otac.node1.row, otac.node1.col - 1, size);
			if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node1.row, otac.node1.col - 2, size))) {
				node sin;
				sin.node1 = edge[blizi];
				sin.node2 = edge[dalji];
				return sin;
			}otac.node1.row = -1; return otac;
		case 2:blizi = find_in_edge(edge, otac.node1.row + 1, otac.node1.col, size);
			if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node1.row + 2, otac.node1.col, size))) {
				node sin;
				sin.node1 = edge[blizi];
				sin.node2 = edge[dalji];
				return sin;
			}otac.node1.row = -1; return otac;
		case 1:blizi = find_in_edge(edge, otac.node1.row - 1, otac.node1.col, size);
			if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node1.row - 2, otac.node1.col, size))) {
				node sin;
				sin.node1 = edge[blizi];
				sin.node2 = edge[dalji];
				return sin;
			}break;
		}
	}
	else {
		if ((otac.node2.col != otac.node1.col) && (otac.node1.row == otac.node2.row)) {
			otac = sort_col(otac);
			switch (zn) {
			case 1:blizi = find_in_edge(edge, otac.node1.row - 1, otac.node1.col, size);
				if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node2.row - 1, otac.node2.col, size))) {
					node sin;
					sin.node1 = edge[blizi];
					sin.node2 = edge[dalji];
					return sin;
				} otac.node1.row = -1; return otac;
			case 2:blizi = find_in_edge(edge, otac.node1.row + 1, otac.node1.col, size);
				if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node2.row + 1, otac.node2.col, size))) {
					node sin;
					sin.node1 = edge[blizi];
					sin.node2 = edge[dalji];
					return sin;
				} otac.node1.row = -1; return otac;
			case 3:blizi = find_in_edge(edge, otac.node1.row, otac.node1.col - 1, size);
				if (blizi > -1) {
					node sin;
					sin.node1 = edge[blizi];
					sin.node2 = edge[blizi];
					return sin;
				} otac.node1.row = -1; return otac;
			case 4:blizi = find_in_edge(edge, otac.node2.row, otac.node2.col + 1, size);
				if (blizi > -1) {
					node sin;
					sin.node1 = edge[blizi];
					sin.node2 = edge[blizi];
					return sin;
				} otac.node1.row = -1; return otac;
			}
		}
		else {
			otac = sort_col(otac);
			switch (zn) {
			case 1:blizi = find_in_edge(edge, otac.node1.row - 1, otac.node1.col, size);
				if (blizi > -1) {
					node sin;
					sin.node1 = edge[blizi];
					sin.node2 = edge[blizi];
					return sin;
				} otac.node1.row = -1; return otac;
			case 2:blizi = find_in_edge(edge, otac.node2.row + 1, otac.node2.col, size);
				if (blizi > -1) {
					node sin;
					sin.node1 = edge[blizi];
					sin.node2 = edge[blizi];
					return sin;
				} otac.node1.row = -1; return otac;
			case 3:blizi = find_in_edge(edge, otac.node1.row, otac.node1.col - 1, size);
				if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node2.row, otac.node2.col - 1, size))) {
					node sin;
					sin.node1 = edge[blizi];
					sin.node2 = edge[dalji];
					return sin;
				} otac.node1.row = -1; return otac;
			case 4:blizi = find_in_edge(edge, otac.node1.row, otac.node1.col + 1, size);
				if (blizi > -1)  if (-1 < (dalji = find_in_edge(edge, otac.node2.row, otac.node2.col + 1, size))) {
					node sin;
					sin.node1 = edge[blizi];
					sin.node2 = edge[dalji];
					return sin;
				} otac.node1.row = -1; return otac;
			}
		}
	}
	return nista;
}