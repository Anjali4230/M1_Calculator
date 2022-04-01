#include<stdio.h> 
#include"function files.c"
#include"function files1.c"
#include"function files2.c"

int main()
{ int m;
  

   do{
   	
   	printf("*Select an operation to perform the calculation*\n");
   	printf(" 1.Addition \n 2.Subtraction\n 3. Multiplication\n 4. Division\n 5.square\n 6.cube \n 7. squareroot\n 8.modulous \n 9.power \n 10.factorail\n");
   	
   	scanf("%d",&m);
   	
   	switch(m)
   	{
   		case 1:
   			addition();
   			break;
   			
   			
   			case 2:
   			subtraction();
   			break;
   			
   			case 3:
   				multiplication();
   				break;
   				
   				case 4:
   					division();
   					break;
   					
   					case 5:
   						square();
   						break;
   						
   						case 6:
   							cube();
   							break;
   							
   							case 7 :
   							        squareroot();
   							        break;
   							        
   							case 8 :
   							        modulous();
   							        break; 
   							        
   							        case 9:
   							        	power();
   							        		break;
   							        		
   							        		case 10:
   							        			factorial();
   							        			break;
   						
   						default:
   							printf("something is wrong!!");
   							return 0;
   							
   };

} while(m>10);
printf(" ********thankyou for visiting my calculator******"); 
return 0;

}