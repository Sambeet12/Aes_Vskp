#include<stdio.h>
int main(){
int i=12;
int j=25;
printf("value of i=%d,j=%d before swaping\n",i,j);
i=i^j;
j=i^j;
i=i^j;
printf("value of i=%d j=%d after swaping\n",i,j);
return 0;
}
