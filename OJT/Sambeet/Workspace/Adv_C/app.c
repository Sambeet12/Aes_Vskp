#include<stdio.h>
#include"header.h"
int main(){
int a,b;
printf("enter 2 numbers:");
scanf("%d%d",&a,&b);
printf("addition of two numbers:%d\n",add(a,b));
printf("substraction of two numbers:%d\n",sub(a,b));
printf("multiplication of two numbers:%d\n",mul(a,b));
printf("division of two numbers:%f\n",div(a,b));
}
