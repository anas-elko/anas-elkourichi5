#include<stdio.h>
#include<stdlib.h>



int main(){

char a;

printf("entrez cracter:");
scanf("%c",&a);

if(a>='A'&&a<='Z'){
    printf("majuscule");
}
else if(a>='a'&&a<='z'){
    printf("munscule");
}
else{
    printf("non");
}
return 0;
}
