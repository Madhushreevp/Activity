#include<stdio.h>
#include<string.h>
#include"stdint.h"

int sum_func(name)
{

char myname[50];
int i=0;
int sum=0;
   while(myname[i]!='\0')
   {
      printf("\nASCII Value of %c = %x\n", myname[i],myname[i]);
      sum=sum+myname[i];
      i++;
   printf("Total sum : \n");
   printf("In hexadecimal\n");
   printf("-----------------------\n");
   printf("%x\n",sum);
   }
   return sum;
}
   
int main()
{
   char name[50];
   printf("Enter the name:\n");
   scanf("%s",name);
   sum_func(name);
   
   return 0;
}
