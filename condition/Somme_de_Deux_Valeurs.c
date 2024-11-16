#include<stdio.h>
#include<stdlib.h>


int main(){

float a,b;
float somme;
printf("entres a:");
    scanf("%f",&a);
printf("entrez b");
scanf("%f",&b);


if(a==b){
somme=(a+b)*3;

}
else if(a!=b){
    somme=(a+b);
}




printf("la somme est:%.2f",somme);





return 0;
}
