

#include<stdio.h>

int maxsimum( int No1,int No2);
int minimum( int No1,int No2);
int maltiply( int No1,int No2);

int main()
{
   int no1,no2;
   
   printf("enter the value for no 1 :");
   scanf("%d",&no1);
   
   printf("enter the value for no 2 :");
   scanf("%d",&no2);
   
   printf(" minim is :%d\n" , minimum( no1,no2));
   
   printf(" max is :%d\n" , maxsimum( no1,no2));
   
  printf(" maltiply :%d\n" , maltiply( no1,no2));

   return 0;
}

int minimum( int No1,int No2)
{
	 int min;
	if( No1 < No2 )
	 {
	 	min = No1;
	 	return min;
	 }
	 else
	 {
	 	min = No2;
	 	return min;
     }
	
}

int maxsimum( int No1,int No2)
{
	 int max;
	if( No1 < No2 )
	 {
	 	max = No2;
	 	return max;
	 }
	 else
	 {
	 	max = No1;
	 	return max;
     }
	
}

int maltiply( int No1,int No2)
{
	  return No1 *No2;
	
}


