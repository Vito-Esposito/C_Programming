#include <stdio.h>
#include "libreria.h"

/* Una classe di 10 studenti sostiene un esame.
Avete a disposizione le votazioni per questo esame (numeri interi compresi tra 0 e 100).
Determinate la media della classe in questo esame.
Esempio per votazioni: 50, 90, 99, 18, 100, 45, 76, 81, 90, 61
Qual � la media della classe? */

int main() {
	int media;
	
	printf("Inserisci i voti degli esami di 10 studenti: \n");
	
	media= media_10();
	
	printf("\nMedia dei 10 esami: %d.", media);
	
	return 0;
}
