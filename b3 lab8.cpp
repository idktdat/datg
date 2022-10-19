#include<stdio.h>
#include<string.h>
int Kiemtradoixung(char x[]){
	size_t len = strlen(x);
	for(int i = 0; i < len/2; i++){
		if(x[i] != x[len - i - 1]) 
		return 0;	
	}
	return 1;
}
int main(){
	char s[50];
	printf("Nhap s = ");
	fgets(s, sizeof(s), stdin);
	if(Kiemtradoixung(s)){
		printf("Day la chuoi doi xung");
	}else{
		printf("Day la chuoi khong doi xung"); 
	} 
	return 0;
}
