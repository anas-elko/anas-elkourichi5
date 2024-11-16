#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

float a;

printf("entrez nomber:");
scanf("%f",&a);


if(a<0){
    printf("negatif");
}
else if(a>0){
    printf("positif");
}
else if(a==0){
    printf("nul");
}





return 0;
}
