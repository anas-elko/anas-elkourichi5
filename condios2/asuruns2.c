#include<stdio.h>
#include<stdlib.h>


int main(){

int age,n_accident;
int tybe_care;
float prime_pase,prime;

printf("entrez de age et n accident:");
scanf("%d%d",&age,&n_accident);

printf("1pour sportive\n");
printf("2pour utilitaire\n");
printf("3pour familiale\n");

printf("entrez de choix:");
scanf("%d",&tybe_care);

printf("entrer votre prime de pase:");
scanf("%f",&prime_pase);



printf("entrez de prime:");
scanf("%f",&prime);
switch(tybe_care){
 case 1: printf("1pour sportive\n");

break;

 case 2: printf("2pour utilitaire\n");
break;

 case 3:printf("3pour familiale\n");
break;
}



if (age<25){
         prime_pase=prime_pase*1.5;
    printf("prime de pase est %f\n",prime_pase);

}
else if (age>=25&&age<=65){
        printf(" votre prime de pase");

}
else if(age>65){
prime_pase=prime_pase*1.2;
printf("prime de pase est%f",prime_pase);
}
if(tybe_care=1){
    prime=prime*2;
    printf("prime est%f:",prime);
}
else if(tybe_care=2){
    prime=prime*1.2;
    printf("prime est%f",prime);
}
else if(tybe_care==3){
    prime=prime*1.1;
printf("prime est%f:",prime);
}
if (n_accident>1){
    prime=0.3+prime;
    printf("prime ets%f:",prime);
}
return 0;
}
