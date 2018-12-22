/*To implement an electricity bill*/

#include<stdio.h>

int main()
{
	float charge;
	int units;
	char name[25];
	
	//Input required	
	printf("\nEnter the name: ");
	scanf("%s", &name);
	printf("Enter the no.of.units consumed: ");
	scanf("%d", &units);
	
	//Compute charge
	if(units<=200)
	{
		charge = units*0.8;
	}
	else if(units<=300)
		{
			/*
			
			From previous if(), we have determined that units>200, 
			but we should charge only 80p for first 200 units, so 200*0.8 = 160
			and the next hundred units to be charged 90p, 
			so no.of units to be charged 90p = units - 300
			
			*/
			charge = 160 + (units-200)*0.9;	
		}
		else
		{	
			/*
			
			From previous if(), we have determined that units>300, 
			but we should charge only 80p for first 200 units and 90p for next 100, so 200*0.8 + 100*0.9= 250
			and the next units to be charged Rs.1, 
			so no.of units to be charged Rs.1 = units - 300
			
			*/
			charge = 250 + (units - 300)*1;
		}
	
	//Additional meter charge
	charge += 100;
	
	//Additional 15% tax
	if(charge > 400)
	{
		charge = charge +charge*0.15;
	}
	
	//Required Output
	printf("\nName: %s ", name);
	printf("\nUnits consumed: %d", units);
	printf("\nCharge = Rs %f\n", charge);
	
	return 0;

}
