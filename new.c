#include<stdio.h>
#include<math.h>
void main()
{    float D, a, b, c, r1, r2;

    printf("enter the coefficient a,b and c:");
    scanf("%f%f%f",&a,&b,&c);
    D=b*b-4*a*c;
    
    if(D>0)
    {   r1=(-b+sqrt(D))/(2*a);
        r2=(-b-sqrt(D))/(2*a);
        printf("the roots are real and different:%f\n%f",r1,r2);
    }
    else if(D==0)
    {   r1=-b/(2*a);
        r2=r1;
        printf("roots are real and same:%f\n%f",r1, r2);
    }
    else //D<0
    {   
        printf("roots are complex: %f + i%f \n %f - i%f", -b/(2*a), sqrt(4*a*c - b*b)/(2*a), -b/(2*a), sqrt(4*a*c - b*b)/(2*a));
    }
    
}