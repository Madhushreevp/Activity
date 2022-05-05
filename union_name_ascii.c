#include<stdio.h>
#include<string.h>
#include"stdint.h"
union INFO
{
    uint8_t value;
};
int main()
{
   union INFO data;
   char name[50];
   int sum=0;
   printf("Enter the name:\n");
   scanf("%s",name);
   int i=0;
   while(name[i]!='\0')
   {
      data.value=name[i];
      printf("\nASCII Value of %c=%x\n", name[i],data.value);
      sum=sum+name[i];
      i++;
   }
   
   printf("Total sum : \n");
   printf("In hexadecimal\n");
   printf("-----------------------\n");
   printf("%x\n",sum);
   return 0;
}


