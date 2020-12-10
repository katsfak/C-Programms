#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	system("chcp 1253");
	float A,B,G,max;
    printf("Εισαγωγή του πρώτου αριθμού : ");
    scanf("%f",&A);
    printf("Εισαγωγή του δεύτερου αριθμού :  ");
    scanf("%f",&B);
    printf("Εισαγωγή του τρίτου αριθμού :  ");
    scanf("%f",&G);
    max=A;
    (max<B) && (max=B);
    (max<G) && (max=G);
    printf("Οι Αριθμοί που έχουν εισαχθεί είναι %f %f %f και ο Μεγαλύτερος αριθμός είναι %f",A,B,G,max);
	return 0;
}
