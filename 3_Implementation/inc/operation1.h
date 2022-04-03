int Division();
int Square();
int Cube();

int Division(int a,int b)
      {
   	int res;
   	
   	if(b ==0)
   	{
   		
   		res=0;
	   }
	   else 
	   	res=a/b;
	   
	   
   }
   
   int Square(int n){
   	
   	int res;

   	res=n*n;
	   return res;
	     
   }
   int Cube(int n)
   {
   	int res;
   	res=n*n*n;
   	return res;
     
   }
   
