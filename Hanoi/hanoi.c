#include <stdio.h>
#include <stdlib.h>

int op=0;

void hanoi_c(char pillar_1[], char pillar_2[], char pillar_3[], int disk) {
	if (disk == 1) {
		printf("Sposta da %s a %s \n",pillar_1, pillar_3);
		op++;
	}

	else {
		hanoi_c(pillar_1, pillar_3, pillar_2, disk-1);
		hanoi_c(pillar_1, pillar_2, pillar_3, 1);
		hanoi_c(pillar_2, pillar_1, pillar_3, disk-1); 
	}
	
}


int main() {
	
	int num_disk;
	
	printf("Inserisci il numero di dischi che vuoi spostare dal pilone 1 al pilone 3 secondo il gioco della torre di Hanoi.\n");
	scanf("%d",&num_disk);
	hanoi_c("Pilone 1", "Pilone 2", "Pilone 3", num_disk);
	printf("\nNumero di operazioni effettuate: %d\n", op);

return 0;
}
