#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,c=0,A[3][3]={3,6,16,21,16,25,30,51,108};
    printf("\nthe even number:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(A[i][j]%2==0)
            {   printf("%d %d\n",A[i][j],c);
                c++;
            }
        }
    }
    printf("\n the total even no=%d",c);
}