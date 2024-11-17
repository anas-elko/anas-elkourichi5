#include<stdio.h>
#include<stdlib.h>

int main(){

char mois;
int jj,aaaa;

do{
printf("entrez jj/mois/aaaa:");
scanf("%d/%d/%d",&jj,&mois,&aaaa);
if(jj<1 || jj>31 ||mois<1||mois>12||aaaa<1000){
    printf("eroure again");
    continue;
}

switch (mois){

case 1:
printf("%d-Janvier-%d",jj,aaaa);
break;



case 2:
    printf("%d-fevrier-%d", jj,aaaa);
    break;
case 3:
    printf("%d-mars-%d", jj,aaaa);
    break;

case 4:
    printf("%d-Fevrier-%d", jj,aaaa);
break;

case 5:
    printf("%d-Mai-%d", jj,aaaa);
    break;

case 6:
    printf("%d-Juin-%d", jj,aaaa);
    break;

case 7:
    printf("%d-Juillet-%d", jj,aaaa);
    break;
case 8:
    printf("%d-Aout-%d", jj,aaaa);
    break;

case 9:
    printf("%d-September-%d", jj,aaaa);
    break;

case 10:
    printf("%d-Octobre-%d", jj,aaaa);
    break;
case 11:
    printf("%d-Novembre-%d", jj,aaaa);
    break;

case 12:
    printf("%d-Decembre-%d", jj,aaaa);
    break;


}

}while(mois<1||mois>12);
return 0;
}
