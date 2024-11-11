#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

float x1,x2,y1,y2,z1,z2;
float Distance;

printf("entrez x1:");
scanf("%f",&x1);
printf("entrez x2:");
scanf("%f",&x2);
printf("entrez y1:");
scanf("%f",&y1);
printf("entrez y2:");
scanf("%",&y2);
printf("entrez z1:");
scanf("%f",&z1);
printf("entrez z2:");
scanf("%f",&z2);

Distance=sqrt(pow(x2-x1 ,2) +pow(y2-y1 ,2)+pow(z2-z1 ,2));
printf("resulta est:%.2f",Distance);



return 0;
}
