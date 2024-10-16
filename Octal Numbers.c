#include<stdio.h>

int main (){
	int num;
	int octalnum[32];
	int i;
	
	printf("Enter a number to convert to Octal:");
	scanf("%d",&num);
	
	for(i=0; num>0; i++){
		octalnum[i]=num%8;
		num=num/8;
	}
	printf("Octal form of the entered number is:");
	
	for(i=i-1; i>=0; i--){
		printf("%d", octalnum[i]);
	}
	return 0;
}