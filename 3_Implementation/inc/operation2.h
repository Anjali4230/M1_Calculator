int Modulous();
int Factorial();


     
	int Modulous(int a, int b)
   {
   	int res= a%b;
	   return res;
   	
   }
	  
	  
	  
	  int Factorial(int a)
	  { int i,f;
	  
	  f=1;
	  for(i=2;i<=a;i++)
	  {
	  	f*=i;
	  }
		  return f;
	  }