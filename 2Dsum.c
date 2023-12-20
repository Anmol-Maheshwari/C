#include<stdio.h>
void main()
{               //sum of left diagonal & sum of right diagonal
    int A[3][3],i,j,ld=0,rd=0;
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
      j=2;
        for(i=0;i<3;i++)
          { ld=ld+A[i][i];
            rd=rd+A[i][j];
            j--;
          }
      printf("\n the sum of left diagonal:%d",ld);
      printf("\n the sum of right diagonal:%d",rd);
}

