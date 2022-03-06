int main(){
   char symbol;
   float a,b,res = 0;
   printf(" Enter a symbol to operate /n : "); 
   scanf("%c", &symbol);
   printf("Enter the values of Operands a and b \n : ");
   scanf("%f%f", &a, &b);
   switch(symbol){
      case '+': res = a + b;
         break;
      case '-': res= a-b;
         break;
      case '*': res = a*b;
         break;
      case '/': res= a/b;
         break;
      default: printf("\n Invalid Operator ");
   }
   printf("The value = %f", res);
   return 0;