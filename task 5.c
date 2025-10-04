#include<stdio.h>
int main(){
	int  i=1,parts ;
	unsigned long long factorial =1;
	printf("enter no of participants");
	scanf("%d",&parts);
	if (parts<0){
		printf("invalid data entry");
		
	}
		else{
			for (i=1;i<=parts;i++){
				factorial=factorial*i;
			
		}
		
	printf("factorial of %d : %llu",parts,factorial);
	
		}
	}
