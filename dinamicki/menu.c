#include"dz3p1.h"
int menu() {
	printf("\n1.Ucitaj graf");
	printf("\n2.Resenje");
	printf("\n3.Igrajmo se!");
	printf("\n4.Upisi u file");
	printf("\n5.Izlaz");
	printf("\n6.Unesi cvor");
	printf("\n7.Izbrsi cvor");
	printf("\nOdabir: ");
	int a;
	scanf_s("%d", &a);
	return a;
}