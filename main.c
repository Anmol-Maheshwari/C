#include<stdio.h>

int main
{
  int A[50],n,i=0;
  printf("enter the decimal no into an array:");
  scanf("%d",&n);

  while(n>0)
  { A[i]=(n%2)
    n=n/2;
    i++;
  }
    printf("enter the binary form:");
    i=i-1;
    while(i>0)
    { 
      printf("%d",A[i]);
      i--;
    
    }

  return 0;
}
