#include <stdio.h>
#include <stdlib.h>

int hanoi(int,char,char,char);
int main(int argc, char *argv[]) {
	system("chcp 1253");
	int i;
	const char a='Α';
	const char b='Β';
	const char c='Γ';
	do{
		system("cls");
	printf("Εισαγωγή αριθμού δίσκων : ");
	scanf("%d",&i);
	if(i==0)
	{
		printf("Δεν γίνεται να μην υπάρχει δίσκος \n");
		system("pause");
	}
	}while(i<=0);
	hanoi(i,a,b,c);
	return 0;
}

int hanoi(int I,char A,char B,char C)
{
	if(I==1)
	{
		printf("Μετακίνηση από τον Στύλο %c στον Στύλο %c \n",A,B);
	}
	else
	{
		hanoi(I-1,A,C,B);
		printf("Μετακίνηση από τον Στύλο %c στον Στύλο %c \n",A,C);
		hanoi(I-1,B,A,C);
	}
	return 0;
}
