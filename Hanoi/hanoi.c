#include <stdio.h>
#include <stdlib.h>

int op=0;

void hanoi_c(char pillar_1[], char pillar_2[], char pillar_3[], int disk) {
	if (disk == 1) {
		printf("Move from %s to %s \n",pillar_1, pillar_3);
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

	printf("Insert the number of disks.\n");
	scanf("%d",&num_disk);
	hanoi_c("Pillar 1", "Pillar 2", "Pillar 3", num_disk);
	printf("\nOperations: %d\n", op);

return 0;
}
