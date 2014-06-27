#include <stdio.h>

main()
{
	//Declaring the variables	
	float ax,ay,az,bx,by,bz,dr,cx,cy,cz;
	int x;
	
	//Very start of the programm. It gives two choices. Either dot or cross production.
	printf("Which process do you want to be done?");
	printf("\n     1:Dot multiplication");
	printf("\n     2:Cross multiplication");
	printf("\nEnter your choice:");
	scanf("%d",&x);
	if (x==1)
	goto dot;
	if (x==2)
	goto cross;
	
	//After end of an task, the program comes here. User can redo dot or cross production or user can exit the programm.
	restart:
	printf("\nWhich process you want to be done again?");
	printf("\n     1:Dot multiplication");
	printf("\n     2:Cross multiplication");
	printf("\n     3:I want to exit");
	printf("\nEnter your choice:");
	scanf("%d",&x);
	if (x==1)
	goto dot;
	if (x==2)
	goto cross;
	if (x==3)
	return 0;
	
	//Fucntion of dot production
	dot:
	printf("Enter the coefficient of i of the first vector:");
	scanf("%f",&ax);
	printf("Enter the coefficient of j of the first vector:");
	scanf("%f",&ay);
	printf("Enter the coefficient of k of the first vector:");
	scanf("%f",&az);
	printf("Enter the coefficient of i of the second vector:");
	scanf("%f",&bx);
	printf("Enter the coefficient of j of the second vector:");
	scanf("%f",&by);
	printf("Enter the coefficient of k of the second vector:");
	scanf("%f",&bz);
	dr=ax*bx+ay*by+az*bz;
	printf("The dot product of the two vectors is %f", dr);
	goto restart;
	
	//function of cross production
	cross:
	printf("Enter the coefficient of i of the first vector:");
	scanf("%f",&ax);
	printf("Enter the coefficient of j of the first vector:");
	scanf("%f",&ay);
	printf("Enter the coefficient of k of the first vector:");
	scanf("%f",&az);
	printf("Enter the coefficient of i of the second vector:");
	scanf("%f",&bx);
	printf("Enter the coefficient of j of the second vector:");
	scanf("%f",&by);
	printf("Enter the coefficient of k of the second vector:");
	scanf("%f",&bz);
	cx=ay*bz-az*by;
	cy=az*bx-ax*bz;
	cz=ax*by-ay*bx;
	printf("The cross product of the two vectors is (%fi)+(%fj)+(%fk)", cx,cy,cz);
	goto restart;
}
