#include<stdio.h>
void main()
{     //transpose of a matrix
    int A[3][3],B[3][3],i,j;
    for(i=0;i<3;i++)
      { for(j=0;j<3;j++)
          {   printf("enter the elements into an array:");
              scanf("%d",&A[i][j]);
          }
      }
      for(i=0;i<3;i++)
      { for(j=0;j<3;j++)
          {   B[j][i]=A[i][j];
          }
      }
      printf("the matrixx is=\n");
      for(i=0;i<3;i++)
      { for(j=0;j<3;j++)
        {    printf("%d",A[i][j]);
        }
        printf("\n\n");
      }
      printf("the transpose of a matrix A is:\n");
      for(i=0;i<3;i++)
       {    for(j=0;j<3;j++)
            { printf("%d",B[i][j]);
            }
            printf("\n\n");
        }
}
