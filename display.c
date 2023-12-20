#include<stdio.h>
void main()
{ int A[3][3],i,j;
  for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
      { printf("enter the elements into an ARRAY:");
        scanf("%d",&A[i][j]);
      }
    }
    printf("\n the elements of A:\n");
    for(i=0;i<3;i++)
      { for(j=0;j<3;j++)
        { printf("%d",A[i][j]);
        }
      printf("\n");
      }
      
}