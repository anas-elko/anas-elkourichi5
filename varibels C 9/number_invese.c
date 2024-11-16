#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){


int number,a,b,c,d,invers;

printf("entrez votre number :");
scanf("%d",&number);

if(number<1000||number>9999){
    printf("eroure");
    return 1;
}

a = number / 1000;
b = (number / 100)%10;
c = (number / 10)%10;
d = number %10;

invers = d*1000 + c *100+ b * 10 + a;

printf("invers est :%d",invers);





return 0;
}
