#include<stdio.h>
#include<stdlib.h>

int main(){

float socre,Anc;
int re;

printf("entre socre:");
scanf("%f",&socre);

printf("entrez anc:");
scanf("%f",&Anc);


printf("entrez re:");
scanf("%d",&re);



switch(re){


case 1:
    re= re*1.1;
    printf("est:%d\n",re);
break ;

case 2:
    re=re*1.2;
printf("est:%d\n",re);
break;

}

if (socre>=90&&Anc>=5){

    printf(" Excellente\n");

}
else if(socre>=75&&Anc>=3){
    printf("Bonne\n");
}
else if(socre>=50&&Anc<2){
    printf("Satisfaisante\n");
}


return 0;
}
