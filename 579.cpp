#include<stdio.h>
#include<stdlib.h>
main()
{
	float x,y,z;
	while(1)
	{
		scanf("%f:%f",&x,&y);
		if(x==0 && y==0)
			break;
		if((x*5+y/12)*6>y*6)
			z=(x*5+y/12.0)*6-y*6;
		else
			z=y*6-(x*5+y/12.0)*6;
		if(z>180)
			printf("%.3f\n",360-z);
		else
			printf("%.3f\n",z);		
	}
} 
