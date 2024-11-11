#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
float a,b,c;
float moyennjom;

printf("entrez nombre a:");
scanf("%f",&a);
printf("entrez nombre b:");
scanf("%f",&b);
printf("entrez nombre c:");
scanf("%f",&c);

moyennjom=pow(a * b * c,1.0/3);
printf("resulta:%.2f",moyennjom);



return 0;
}
