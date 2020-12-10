#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	/* a(x^2)+bx+g=0 */
	system("chcp 1253");
	float A,B,G,D,x1,x2,x9;
	printf("Εισαγωγή του πρώτου αριθμού : ");
	scanf("%f",&A);
	printf("Εισαγωγή του δεύτερου αριθμού :  ");
	scanf("%f",&B);
	printf("Εισαγωγή του τρίτου αριθμού :  ");
	scanf("%f",&G);
	if(A==0)
	{
		if(B==0 && G==0)
		{
			printf("Αδύνατο");
		}
		else if( B!=0 && G==0 )
		{
			printf("Αόριστο");
		}
		else
		{
			printf("Έχει μοναδική λύση %f:",(-B)/A);
		}
	}
	else
	{
		D=((pow(B,2))-(4*A*G));
		if(D > 0)
		{
		 x1=(-B+sqrt(D))/((2*A));
		 x2=(-B-sqrt(D))/((2*A));
		printf("Η πρώτη λύση είναι %f\n",x1);
		printf("Η δεύτερη λύση είναι %f\n",x2);
		}
	
		else if(D<0)
		{
			printf("Η διακρίνουσα είναι αρνητική");
		}
		else if(D==0)
		{
			x9=(-B)/((2*A));
			printf("Η Λύση είναι: %f",x9);
		}
	}
	return 0;
}
