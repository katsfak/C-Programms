#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu();
int menu1();
int dynami(int,int);
int paragontiko(int);
int plithos(int,int);
int prosthesi(int,int);
int afairesi(int,int);
int pollaplasiasmos(int,int);
int tetragonikiriza(int);
int ypoloipodiairesis(int,int);
int diairesi(float,float);

int main(int argc, char *argv[]) {
	system("chcp 1253");
	int A,B,epi,metr=0,ap1,ap2;
	printf("Εισαγωγή του πρώτου αριθμού : ");
	scanf("%d",&A);
	printf("Εισαγωγή του δευτέρου αριθμού : ");
	scanf("%d",&B);
	int end = 0;
	while(end!=1)
	{
		int ep;
		ep = menu1();
		switch(ep)
		{
		case 1:
			dynami(A,B);
			metr=metr+1;
			break;
		case 2:
			dynami(B,A);
			metr=metr+1;
			break;
		case 3:
			paragontiko(A);
			metr=metr+1;
			break;
		case 4:
			paragontiko(B);
			metr=metr+1;
			break;
		case 5:
			plithos(A,B);
			metr=metr+1;
			break;
		case 6:
			prosthesi(A,B);
			metr=metr+1;
			break;
		case 7:
			afairesi(A,B);
			metr=metr+1;
			break;
		case 8:
			pollaplasiasmos(A,B);
			metr=metr+1;
			break;
		case 9:
			diairesi(A,B);
			metr=metr+1;
			break;
		case 10:
			ypoloipodiairesis(A,B);
			metr=metr+1;
			break;
		case 11:
			diairesi(B,A);
			metr=metr+1;
			break;
		case 12:
			ypoloipodiairesis(B,A);
			metr=metr+1;
			break;
		case 13:
			tetragonikiriza(A);
			metr=metr+1;
			break;
		case 14:
			tetragonikiriza(B);
			metr=metr+1;
			break;
		case 15: 
			end = 1;
			metr=metr+1;
			break;
		}
	}
	printf("Οι επιλογές που έκανες είναι : %d",metr);
	return 0;
}

void menu()
{
	
	printf("1.Υπολογισμός της δύναμης ΑΒ\n");
	printf("2.Υπολογισμός της δύναμης BA\n");
	printf("3.Υπολογισμός του Α!\n");
	printf("4.Υπολογισμός του Β!\n");
	printf("5.Υπολογισμός του πλήθους των συνδυασμών Α ανά Β\n");
	printf("6.Πρόσθεση\n");
	printf("7.Αφαίρεση\n");
	printf("8.Πολλαπλασιασμός\n");
	printf("9.Διαίρεση Α/Β\n");
	printf("10.Υπόλοιπο διαίρεσης Α/Β\n");
	printf("11.Διαίρεση Β/Α\n");
	printf("12.Υπόλοιπο διαίρεσης Β/Α\n");
	printf("13.Τετραγωνική ρίζα του Α\n");
	printf("14.Τετραγωνική ρίζα του Β\n");
	printf("15.Έξοδος\n");

}

int menu1()
{
	int ep;
	do{
		system("cls");
		menu();
		printf("Εισαγωγή Επιλογής: ");
		scanf("%d",&ep);
	}while(ep<=0 ||ep>=16);
return ep;	
}

int dynami(int num1,int num2)
{
	int result=1;
	
	for(num2;num2>0;num2--)
	{
		result=result*num1;
	}
	printf("Το αποτέλεσμα της δύναμης είναι: %d \n",result);
	system("pause");
	return 0;
}

int paragontiko(int x)
{
	int ap,metr1;
	if(x>=0)
	{
		metr1=x;
		ap=1;
		while(metr1 >0)
		{
			ap=(ap*metr1);
			metr1=metr1-1;
		}
		printf("Το παραγοντικό είναι : %d \n",ap);
		system("pause");
		
	}
	else
	{
		printf("Αδύνατο να γίνει το παραγοντικό με αρνητικό αριθμό \n");
		system("pause");
		
	}
	return 0;
}

int plithos(int a,int b)
{
	int ap3,ap4,metr2;
	int metr3,gin;
	if(a>=0)
	{
		metr2=a;
		ap3=1;
		while(metr2 >0)
		{
			ap3=(ap3*metr2);
			metr2=metr2-1;
		}
	}
	else
	{
		ap3=0;
	}
	
	if(b>=0)
	{
		metr3=b;
		ap4=1;
		while(metr3 >0)
		{
			ap4=(ap4*metr3);
			metr3=metr3-1;
		}
	}
	else
	{
		ap4=0;
	}
	int ap5,gin1,metr4;
	gin1=(a-b);
	if(gin1>=0)
	{
		metr4=gin1;
		ap5=1;
		while(metr4 >0)
		{
			ap5=(gin1*metr4);
			metr4=metr4-1;
		}
	}
	else
	{
		gin1=0;
	}
	
	
	if((a-b)>0 && a>=0){
	gin=ap3/(ap4*(ap5));
	printf("Το πλήθος των συνδυασμών Α ανά Β είναι  : %d \n",gin);
}
else{
	printf("Αδύνατο \n");
}
system("pause");
return 0;
}

int prosthesi(int x,int y)
{
	int sum;
	sum=x+y;
	printf("Το αποτέλεσμα της προσθέσης είναι : %d \n",sum);
	system("pause");
	return 0;
}

int afairesi(int x,int y)
{
	int sum;
	sum=x-y;
	printf("Το αποτέλεσμα της αφαίρεσης είναι : %d \n",sum);
	system("pause");
	return 0;
}

int pollaplasiasmos(int x,int y)
{
	int sum;
	sum=x*y;
	printf("Το αποτέλεσμα του πολλαπλασιασμού είναι : %d \n",sum);
	system("pause");
	return 0;
}
int diairesi(float x,float y)
{
	float sum;
	if(y!=0)
	{
		sum=x/y;
		printf("Το αποτέλεσμα της διαίρεσης είναι : %f \n",sum);
	}
	else
	{
		printf("Αδύνατη η διαίρεση με το μηδέν \n");
	}
	system("pause");
	return 0;
}
int tetragonikiriza(int x)
{
	int sum;
	sum=sqrt(x);
	printf("H τετραγωνίκη ρίζα του %d είναι : %d \n",x,sum);
	system("pause");
	return 0;
}
int ypoloipodiairesis(int x,int y)
{
	float sum;
	if(y!=0)
	{
		sum=x%y;
		printf("Το υπόλοιπο της διαίρεσης είναι : %f \n",sum);
	}
	else
	{
		printf("Αδύνατο \n");
	}
	system("pause");
	return 0;
}
