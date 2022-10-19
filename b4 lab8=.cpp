#include<stdio.h>
#include<conio.h>

int main(){
	int A[5];
	int B[5];
	int i;
	int sum = 0;
	int *ptr = A;
	
	printf("\nNhap 5 phan tu: ");
	for(int i = 0; i < 5; i++) {
		printf("\nNhap A[%d] =  ", i + 1);
		scanf("%d", &A[i]);
		printf("\nNhap B[%d] = ", i + 1);
		scanf("%d", &B[i]);
	}
	//*ptr = A;
	for(int i = 0; i < 5; i++){
		sum += *ptr;
		ptr++;
	}
	printf("Tong C =", A[i] + B[i]);
	return 0;
}
