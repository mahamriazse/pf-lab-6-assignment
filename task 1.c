#include<stdio.h>
int main(){

int i=1,sum=0;
do{
	printf("enter your number:");
	scanf("%d",&i);
	sum=sum+i;
	
}
while(i!=0);
	printf("\nsum=%d",sum);

return 0;
}
