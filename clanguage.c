#include<stdio.h>
void main()
{
   int a=2;
   int * ptr ;
 ptr=&a;
   
   printf("the value of a is %d",a);
   printf("\nthe value of address of a is %d",&a);
   printf("\nthe value of a using pointer ptr is %d",*ptr);
   printf("\n the value of address of a using a pointer ptr is %d",ptr);
}