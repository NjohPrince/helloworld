#include<stdio.h>
int main(void)
{
	long int  bin;
	printf("Enter binary number: ");
	scanf("%ld", &bin);
	printf("%d\n\n", sizeof(bin)); 
	return 0;
}
