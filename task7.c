 #include<stdio.h>
int main(){
	int onecent=0,fivecents=0,tencents=0 , twentyfivecent=0,amount;
	
	printf("enter your amount in cents");
	scanf("%d",&amount);
	
	while(amount>0 ){
		if (amount>=25){
			amount-=25;
			twentyfivecent++;
			
		}
	else if (amount>=10){
		amount-=10;
		tencents++;
		
	}	
	else if(amount>=5){
	
		amount-=5;
		fivecents++;
		
	}
	else {
	
		amount-=1;
		onecent++;
	}
	 
}
printf("coins needed:\n");
    printf("25cents: %d\n", twentyfivecent);
    printf("10cenets: %d\n",tencents);
    printf("5cents: %d\n", fivecents);
    printf("1cent: %d\n", onecent);

return 0; }
