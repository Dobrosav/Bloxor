#include "dz3p1.h"
void main() {
	FILE *ulaz, *izlaz;
	char c[25];
	printf("Unesi ime mape sa ekstenzijom\n");
	gets_s(c,25);
	if (fopen_s(&ulaz, c, "r")) {
		printf("greska");
		exit(1);
	}
	
	if (fopen_s(&izlaz, "izlaz.txt", "w")) {
		printf("greska");
		exit(1);
	}
	int n=0, m=0;
	int size=8;
	int prvi;
	heap_type heap = { 0,0,0,NULL };
	edges_type *edges = NULL;
	while (1) {
		int i = menu();
		 
		if(i==1) edges = load_pok(ulaz, &n, &m, &size, &prvi);
		if (i == 2){
			heap = form_heap(edges, size);
				if (heap.tek_otac > heap.size) printf("Nema resenja\n");
				else printf("\nBroj koraka %d\n", heap.tek_lvl);
//				for  (int i= 0; i <4; i++)
	//			{
					resenje(heap);

		//		}
		}
		if(i==3) move(edges,size,m,n); 
		 if(i==4)print(edges, m,n , size, izlaz); 
		 if (i == 5) {
			 free(edges); edges = NULL; size = 0;
			 fclose(ulaz);
			 fclose(izlaz);
			 free_heap(heap);
			 break;
		 }
		if(i==6) insert_node(&edges, &size);
		if(i==7) delete_node(&edges, &size);
			system("COLOR F0");
		
	}
	printf("\nCAO!");
}