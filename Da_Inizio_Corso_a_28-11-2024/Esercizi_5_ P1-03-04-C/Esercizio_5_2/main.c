#include <stdio.h>
#include <stdlib.h>

/* Inserire il voto in input:
- se � uguale a 10 stampare �Eccellente�
- se � uguale a 9 stampare �Ottimo�
- se � uguale a 8 stampare �Buono�
- se � uguale a 7 stampare �Distinto�
- se � uguale a 6 stampare �Sufficiente�
- altrimenti � �Bocciato�
Eseguire sia con if/else che con switch. */

int main() {
	int voto;
	
	printf("Inserisci voto: \n");
	scanf("%d", &voto);
	
	switch(voto){
		case 10:
			printf("\nEccellente");
			break;
		case 9:
			printf("\nOttimo");
			break;
		case 8:
			printf("\nBuono");
			break;
		case 7:
			printf("\nDistinto");
			break;
		case 6:
			printf("\nSufficiente");
			break;
		default:
			printf("\nBocciato");
	}
	
	return 0;
}
