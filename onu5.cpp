#include<stdio.h>
#include<math.h>

/// Determine Area of a Triangles using 3 Peak Points of that Triangle.
///Formula: Area = (1/2)* ( (x1-x2)*(y1-y3) - (y1-y2)*(x1-x3) )

int main()
{
    double x1,y1,x2,y2,x3,y3,Area;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);

    //printf("Test = %lf ",(x1-x2)*(y1-y3));
    //printf("Test = %lf \n",(y1-y2)*(x1-x3));

    Area = ( (x1-x2)*(y1-y3) - (y1-y2)*(x1-x3) )/ 2;

    printf("Area = %.3lf\n",Area);


    return 0;
}




