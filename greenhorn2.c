#include <stdio.h>

main()
{
//	to find gross salary by adding % of HRA, DA, and TA of user choice.
    int bs,hra,da,ta,gross_salary;
 
 
    printf("Enter the value of bs=");
	scanf("%d",&bs);
	 
    printf("Enter the value of HRA =");
	scanf("%d",&hra);
	
	printf("Enter the value of DA=");
	scanf("%d",&da);
	
	printf("Enter the value of TA=");
	scanf("%d",&ta);
	
    hra = (bs * hra) / 100;
    da = (bs * da) / 100;
    ta = (bs * ta) / 100;

    gross_salary = bs + hra + da + ta;
    printf("the gross salary by adding hra,da and ta is=%d",gross_salary);

}

