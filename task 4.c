#include<stdio.h>
int main(){
	int num, digit,sum=0 , original;

	printf("enter any 3 digit num");
	scanf("%d",&num);
	original=num;
	
	while(num!=0){
		digit=num%10;
		sum=sum+ digit*digit*digit;
		num=num/10;
		
	}
	if (sum==original){
		printf("your num is armstrong num");
		
	}
	else {
		printf("not an armstrong num");
	}

	return 0;
}
	
