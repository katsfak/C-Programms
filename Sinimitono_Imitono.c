#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p 3.141592653589793238

float eisagogi(float);
float metatropi(float);
float ypologismosim(float);
float ypologismossin(float);
float dekadika(float,float);
int main(int argc, char *argv[]) {
	system("chcp 1253");
	float moir,rad,imi,sin,isa;
	moir=eisagogi(moir);
	rad=metatropi(moir);
	imi=ypologismosim(rad);
	sin=ypologismossin(rad);
	isa=dekadika(imi,sin);
	printf("Το ημίτονο είναι %f \n",imi);
	printf("Το συνημίτονο είναι %f \n",sin);
	if(isa==1)
	{
		printf("Οι αριθμοί είναι σχεδόν ίσοι");
	}
	else
	{
		printf("Οι αριθμοί δεν είναι ίσοι");
	}
	return 0;
}
float eisagogi(float a)
{
	do{
		system("cls");
		printf("Εισαγωγή Μοιρών : ");
		scanf("%f",&a);	
	}while((a<0 || a>360));
	return a;
}

float metatropi(float b)
{
	float r;
	r=(b*p)/180;
	return r;
}

float ypologismosim(float c)
{
	float d,e,f,i,n,o,a,s,b,p1,j,m;
	float z;
	d=c;
	e=(pow(c,3))/(1*2*3);
	f=fabs(e-d);
	i=3;
	n=0;
	z=c;
	s=1;
	o=1;
	p1=1;
	do{
		if(i>3)
		{
			a=n;
		}
		for(j=1; j<=i;j++)
		{
			s=s*(c/j);
		}
		n=s;
		b=s;
		o=o*(-1);
		n=n*o;
		z=z+n;
		i+=2;
		s=1;
		p1=1;
		m=fabs(n-a);
	}while(m>=0.000001);
	return z;
}

float ypologismossin(float y)
{
int i=1;
	float t0,t1,R,sum,eps,m;
	t0=1;
	sum=t0;
	do{
	
		R=-(y*y)/(2*i-1)/(2*i);
		t1=R*t0;
		sum=sum+t1;
		t0=t1;
		i++;
		m=fabs(t1/sum);
	
	}while(m>=0.000001);
	return sum;
}

float dekadika(float num1,float num2)
{
	if(fabs(num1-num2)<=0.000001){
		return 1;
	}
	else{
		return 0;
	}
}
