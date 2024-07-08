#include<stdio.h>

//Q-2

main()
{
	int inc,hd,ta,da;
	printf("Enter the salary = ");
	scanf("%d",&inc);
	printf("Enter the hdr rate  = ");
	scanf("%d",&hd);
	printf("Enter the ta rate = ");
	scanf("%d",&ta);
	printf("Enter the da rate = ");
	scanf("%d",&da);
	
	int gi,hdr,tar,dar;
	hdr=inc*hd/100;
	tar=inc*ta/100;
	dar=inc*da/100;
	gi=inc+hdr+tar+dar;	
	printf("gross-salary =%d",gi);
}