#include<stdio.h>
#include<stdlib.h>


int main(){
int a,b,c,p;

printf("entrez votre a:");
scanf("%d",&a);
printf("entrez votre b:");
scanf("%d",&b);

if(b>a){
    printf("Les vacances sont finies");
    return 1;
}

printf("entrez votre c:");
scanf("%d",&c);


switch(c){

case 1:
    p=a-b;
    printf("est:%d\n",p);
break;
case 2:

p=(a/2)-b;
    printf("est:%d\n",p);
break;


default:printf("erour");
}



return 0;
}
