
#include <stdio.h>
#include<math.h>

int main()
{
    float x,y,theta,radius;
    printf("ENTER YOUR X AND Y COORDINATES :\n");
    scanf("%f %f",&x,&y);
    
    theta = atan(y/x);
    radius = sqrt(x*x+y*y);
    
    
    printf("YOUR POLAR COORDINATES ARE \nTHETA IS :%f",theta);
    printf("\nRADIUS IS :%f",radius);
    

    return 0;
}

