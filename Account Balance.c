#include<stdio.h>

/* Write a program on menu based bankng where the user has three accounts
and he/she can deposit, withdraw and check their balance in any account they 
choose*/

int main(){
	int account1balance= 10000, account2balance=15000, account3balance=30000;
	int a=0;
	int b=0;
	int deposit;
	int withdraw;
	
	printf("To proceed with first account, press 1\nTo proceed with second account, press 2\nTo proceed with third account, press 3\n ");
	scanf("%d",&a);
	
	printf("For depositing money, press 1\nFor withdrawing money, press 2\nFor checking current balance, press 3\n");
	scanf("%d",&b);
	
	switch(a,b){
		
		case 1: a=1; b=1;
		printf("How much money do you want to deposit?\n "); 
		scanf("%d", &deposit);
		account1balance=deposit+account1balance;
		printf("Money dposited. \nNew balance=%d",account1balance);
		break;
		
		case 2: a=1; b=2;
		printf("How much money do you want to withdraw?\n ");
		scanf("%d", &withdraw);
		account1balance=account1balance-withdraw;
		printf("Money withdrawn. \nNew balance=%d",account1balance);
		break;
		
		case 3: a=1; b=3;
		printf("Current balance= %d",account1balance);
		break;
		
		case 4: a=2; b=1;
		printf("How much money do you want to deposit?\n ");
		scanf("%d", &deposit);
		account2balance=deposit+account2balance;
		printf("Money dposited. \nNew balance=%d",account2balance);
		break;
		
		case 5: a=2; b=2;
		printf("How much money do you want to withdraw?\n ");
		scanf("%d", &withdraw);
		account2balance=account2balance-withdraw;
		printf("Money withdrawn. \nNew balance=%d",account2balance);
		break;
		
		case 6: a=2; b=3;
		printf("Current balance= %d",account2balance);
		break;
		
		case 7: a=3; b=1;
		printf("How much money do you want to deposit?\n ");
		scanf("%d", &deposit);
		account3balance=deposit+account3balance;
		printf("Money dposited. \nNew balance=%d",account3balance);
		break;
		
		case 8: a=3; b=2;
		printf("How much money do you want to withdraw?\n ");
		scanf("%d", &withdraw);
		account3balance=account3balance-withdraw;
		printf("Money withdrawn. \nNew balance=%d",account3balance);
		break;
		
		case 9: a=3; b=3; 
		printf("Current balance= %d",account3balance);
		break;
		
	}
	
	return 0;
}