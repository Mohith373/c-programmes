#include<stdio.h>  
 int fibanocci(int n)    
{    
  if(n==0)
  return 0;
  else if(n==1)
  return 1;
  else
  return (fibanocci(n-1)+fibanocci(n-2));
return 0;  
}   
int main()
{
  int n;
  printf("enter th vallue of n  ");
  scanf("%d",&n);
  printf("the fibonacci series is ");
  for(int i=0;i<n;i++)
  {
    printf(" %d",fibanocci(i));
  }

  return 0;
}