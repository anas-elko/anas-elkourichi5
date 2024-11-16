#include<stdio.h>
#include<stdlib.h>


int main(){
char a;
char voyelle={'a','e','i','y','o','u'};

printf("entrez voyelle:");
scanf("%c",&a);

if(a=='a'&&'e'&&'i'&&'y'&&'o'&&'u'){
    printf("voyelle");
}
else{
    printf("Non");
}



return 0;
}
