#include<stdio.h>

int main(){
	int a = 2, b = 3; 
	int *p = &a;
	b = a;
	*p = 3;
printf("\ngia tri cua a: %d", *p);
printf("\ngia tri cua b: %d", b);
printf("\ndia chi cua a: %d", &a);
printf("\ndia chi cua b: %d", &b);
return 0;
}
