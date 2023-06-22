#include<stdio.h>
#include<conio.h>
main()
{
	int z,x,y,xy,XY,XXY,xxy,xyz,XYZ,XYz;
	clrscr();
	printf("xy=(x+y)^2");
	printf("\nXY=(x-y)^2");
	printf("\XXY=(x+y)^3");
	printf("\nxxy=(x-y)^3");
	printf("\nxyz=(x+y+z)^3");
	printf("\nXYZ=(x-y-z)^3");
	printf("\nXYz=(x+y+z)^2");
	printf("\nenter the value of x");
	scanf("%i",&x);
	printf("enter the value of y");
	scanf("%d",&y);
	printf("enter value of z");
	scanf("%d",&z);
	xy=(x*x)+(2*x*y)+(y*y);
	XY=(x*x)-(2*x*y)+(y*y);
	XXY=(x*x*x)+((3*x*y)*(x+y))+(y*y*y);
	xxy=(x*x*x)-(y*y*y)-((3*x*y)*(x+y));
	xyz=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x));
	XYZ=(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z)+(3*(z+y)));
	XYz=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));



	printf("value of xy=%d",xy);
	printf("\nvalue of XY=%d",XY);
	printf("\nvalue of XXY=%d",XXY);
	printf("\nvalue of xxy=%d",xxy);
	printf("\nvalue of xyz=%d",xyz);
	printf("\nvalue of XYZ=%d",XYZ);
	printf("\nvalue of XYz=%d",XYz);
	getch();

}

