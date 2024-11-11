#include<stdio.h>
#include<stdlib.h>

int main(){
 char nom[10];
 char prenom[10];
 int age;
 char sex;
 char email[20];

 printf("entrez votre nom:");
 scanf("%s",&nom);

 printf("entrez votre prenom:");
 scanf("%s",&prenom);


  printf("entrez votre age:");
  scanf("%d",&age);

  printf("entrez votre sex:");
  scanf( " %c",&sex);



  printf("entrez votre email:");
  scanf("%s",&email);

 printf("===================\n");

printf("%s\n",nom);
printf("%s\n",prenom);
printf("%d\n",age);
printf("%c\n",sex);
printf("%s\n",email);
return ;
}
