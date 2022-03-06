#include <stdio.h>
int main() 
{    
  int a,b,c;
  printf("Enter A and B: ");
  scanf("%d %d", &a, &b);
  c=a+b;      
  printf("%d + %d = %d", a,b,c);
  return 0;
}