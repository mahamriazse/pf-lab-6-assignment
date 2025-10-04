#include<stdio.h>
int main(){
	int balance=50000 , amount ;
	
	printf("your current balance in your accout is \n");
printf("\n%d",balance);
	
while(balance >0){
	printf("\nenter your withdrawl amount\n");
	scanf("%d",&amount);
	
	if (amount<=0){
		printf("invalid entry ");
	
		
		
	}
	else if(amount>balance){
		printf("insufficient balance");
		
	}
    else {
    	balance-=amount;
    	printf("remaining balance is: %d",balance );
    	
	}
if (balance == 0) {
    printf(" Your bank balance has reached 0. No further withdrawals allowed.\n");
    }
    

    printf("Thank you for using the ATM!\n");
}
return 0;
}
