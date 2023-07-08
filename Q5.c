//Develop a C code to print your Biodata

#include<stdio.h>

void main()
{
	char name[20];
	long long int number;
	int d,m,y;
	
	printf("Enter your Name:");
	gets(name);
	
	printf("Enter your Mobile number: ");
	scanf("%lli", & number);

	printf("Enter your Date of Birth :");
	scanf("%d %d %d", &d,&m,&y);
	

	printf(" Your Name is %s \n", name);
	printf(" Your number is %lli\n", number);
	printf(" Your number is %d\n", d,m,y);
	
}
