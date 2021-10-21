 #include<stdio.h>
 int main()
 {
     char operator;
     int num1,num2;
    
     printf("Choose the operator (+,-,*,/): ");
     scanf("%c",&operator);
 
     if(operator==43 ||operator==42 || operator==45 ||operator==47  )
    {
      printf("Enter two numbers: ");
      scanf("%d %d",&num1,&num2);

     switch(operator)
     {
       case '+':

         printf("%d + %d =\t%d\n",num1,num2,num1+num2);
          
         break;

       case '-':

         printf("%d - %d =\t%d\n",num1,num2,num1-num2);
         break;

       case '*':

         printf("%d * %d =\t%d\n",num1,num2,num1*num2);
         break;

       case '/':

         printf("%d / %d =\t%d\n",num1,num2,num1/num2);
         break;

     }
    }
    else 

   return 0;
 }
