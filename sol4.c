#include<stdio.h>
int main()
{
  int i,n,Sum=0,nums;
  float Avg;
  printf("\n Please enter the no.of numbers you're going to enter ? : \n");
  scanf("%d",&n);
  printf("\nPlease Enter the numbers one by one\n");
  for(i=0;i<n;++i)
   {
     scanf("%d",&nums);
     Sum = Sum +nums;
   }
  Avg = Sum/n;
  printf("\nSum of the %d Numbers = %d",n, Sum);
  printf("\nAverage of the %d Numbers = %.2f",n, Avg);
  return 0;
}