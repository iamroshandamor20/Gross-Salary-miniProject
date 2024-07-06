#include<stdio.h>
void main()
{
	float bp,da,pf,hra,ta,gs,ns;
	printf("Enter basic pay\n");
	scanf("%f",&bp);
	
	if(bp>=50000)
	{
		ta=bp*15/100;
		da=bp*20/100;
		hra=bp*20/100;
		pf=bp*30/100;
		gs=ta+da+hra;
    	ns=gs-pf;
    	printf("%f is your Gross Salary\n",gs);
    	printf("%f is your Net Salary\n",ns);
	}
		else if(bp=30000>=50000)
	{
		ta=bp*12/100;
		da=bp*15/100;
		hra=bp*12/100;
		pf=bp*20/100;
		gs=ta+da+hra;
    	ns=gs-pf;
    	printf("%f is your Gross Salary\n",gs);
    	printf("%f is your Net Salary\n",ns);
	}
		else if(bp=20000>=30000)
	{
		ta=bp*10/100;
		da=bp*12/100;
		hra=bp*10/100;
		pf=bp*10/100;
		gs=ta+da+hra;
	    ns=gs-pf;
	    printf("%f is your Gross Salary\n",gs);
	    printf("%f is your Net Salary\n",ns);
	}
		else
	{
		ta=bp*05/100;
		da=bp*10/100;
		hra=bp*05/100;
		gs=ta+da+hra;
	    ns=gs-pf;
	    printf("%f is your Gross Salary\n",gs);
    	printf("%f is your Net Salary\n",ns);
	}
	
}
