#include <stdio.h>
#include <math.h>
#define pi 2.0*acos(0.0)

int main(void) {
	double a,b,c,r;

	scanf("%lf",&r);
	a=((r*(r/2))-(((sqrt(3)*r/2)*(r/2))/2)-((r*r*pi)/12))*8;
	
    b=((r*r)-((r*r*pi)/4)-(0.5*a))*4;
    
    c=(r*r)-a-b;
    
    printf("%lf\n%lf\n%lf",c,b,a);
    
	return 0;
}

