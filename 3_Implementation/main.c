#include<stdio.h>
#include"inc/operation.h"
#include"inc/operation1.h"
#include "inc/operation2.h"

int main()
{ int m;
 int a,b,sum;  
int s=0;

   do{
   	
   	printf("  \n\n*Select an operation to perform the calculation*\n\n");
   	printf(" 1.Addition \n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Square\n 6.Cube\n 7.Modulous\n 8.Factorial\n Enter 0 to exit\n");
	scanf("%d",&m);
   	
   	switch(m)
   	{  case 0:
       s=1;
       break;

   		case 1:   
     printf("Enter the first number\n");
     scanf("%d",&a);
     printf("Enter the second number:\n");
      scanf("%d",&b);
     printf("result = %d",Addition(a,b));
     break;
   			
   			
   	  case 2:
	   printf("Enter the first number\n");
       scanf("%d",&a);
       printf("Enter the second number:\n");
        scanf("%d",&b);
        printf("result = %d",Subtraction(a,b));
   		break;
   			
   	   case  3:
        printf("Enter the first number\n");
        scanf("%d",&a);
        printf("Enter the second number:\n");
        scanf("%d",&b);
        printf("result = %d",Multiplication(a,b));
   		break;
	
   		case 4:
         printf("Enter the first number\n");
         scanf("%d",&a);
         printf("Enter the second number:\n");
         scanf("%d",&b);
         printf("result = %d",Division(a,b));
   		 break;
   					
		case 5:
        printf("Enter the number\n");
        scanf("%d",&a);
   		printf( "result is %d",Square(a));
   		break;
   						
   		case 6:
        printf("Enter the number\n");
        scanf("%d",&a);
   		printf( "result is %d",Cube(a));
        break;	
           
        case 7:
        printf("Enter the Dividend number\n");
        scanf("%d",&a);
         printf("Enter the Divisior number:\n");
        scanf("%d",&b);
        printf("result = %d",Modulous(a,b));
   		break;

        case 8:
        printf("Enter the  number\n");
        scanf("%d",&a);
   		printf( "result is %d",Factorial(a));
           


   		default:
   		printf("Enter correct option");
   		return 0;
   							
   };

} while(s==0);

return 0;
 
    }