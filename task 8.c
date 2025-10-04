#include <stdio.h>
#include<math.h>
int main(){
	int intensity,stand_ref_value;
	float magnitute;
	
	printf("enter intensity of earthquack");
	scanf("%d",&intensity);
	
	printf("enter standard ref value");
	scanf("%d",&stand_ref_value);
	
	//calculation
 magnitute = log10( intensity / stand_ref_value);
 printf("the magnitute of earthquack is :%f",magnitute);
 return 0;
}
