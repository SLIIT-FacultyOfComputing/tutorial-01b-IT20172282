/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int s1,s2,total;
  float average;

  printf("enter the marks:");
  scanf("%d",&s1);
  printf("enter the marks:");
  scanf("%d",&s2);

  total=s1+s2;
  average=total/2.0;

  printf("total marks =%d\n",total);
  printf("average marks = %.2f\n", average);
  
  return 0;
}

