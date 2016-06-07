#include <stdio.h>
int main(void) {
	int a,b,c,n;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
		n=a;
	else
     	n=b;
     if(c>n)
     printf("%d is greater value",c);
     else
     printf("%d is greater value",n);
	return 0;
}
