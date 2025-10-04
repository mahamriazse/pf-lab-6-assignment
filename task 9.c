#include<stdio.h>
#include<math.h>
int main(){
	int no_of_persons ;
	float cost_per_person=250.50 , roundedcost,total;
printf("enter no of persons");
scanf("%d",&no_of_persons);

//calculation
total= no_of_persons*cost_per_person;
roundedcost =ceil(total);
printf("the minimum total cost for a group:%.0f",roundedcost);
}
