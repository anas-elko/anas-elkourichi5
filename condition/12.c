#include<stdio.h>


int main(){
int h1,m1,s1;
int h2,m2,s2;


printf("entrez timer h1 hh/mm/ss:");
scanf("%d/%d/%d",&h1,&m1,&s1);


printf("entrez timer h2 hh/mm/ss:");
scanf("%d/%d/%d",&h2,&m2,&s2);

if(h1<h2){
    printf("h1 is wen");
}
else{
    printf("h2 is wen");
}
if(h1==h2||m1<m2){
    printf("h1 is wen");
}
else{
    printf("h2 is wen");
}
if(h1==h2||m1==m2||s1<s2){
    printf("h1 is wen");
}
else{
    printf("h2 is wen");
}
if(h1==h2||m1==m2||s1==s2){
    printf("taadol");
}
return 0;
}
