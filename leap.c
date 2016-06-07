#include <stdio.h>
int main(void) {
	long int n;
	scanf("%ld",&n);
	if(n%4==0 && n%100!=0 || n%400==0)
	{
		printf("Given year is leap year");
	}
	else
	{
	printf("Not a leap year");
	}
}
