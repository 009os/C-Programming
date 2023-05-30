
#include <stdio.h>

int main()
{
    float len,wid,rad,per,area1,area2;
    printf("ENTER THE RADIUS OF CIRCLE :");
    scanf("%f",&rad);
    printf("THE AREA OF CIRCLE IS : %f",(rad*rad*3.14));
    printf("\nTHE CIRCUMFERENCE OF CICLE IS : %f",(2*3.14*rad));
    
    printf("\n\nENTER LEN AND WIDTH :\n");
    scanf("%f %f",&len,&wid);
    printf("THE AREA OF RECTANGLE IS : %f",(len*wid));
    printf("\nTHE PERIMETER OF RECTANGLE IS : %f",(2*(len+wid)));
    

    return 0;
}

