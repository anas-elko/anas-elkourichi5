#include<stdio.h>
#include<stdlib.h>

int main (){

float temperature;


  printf("entres temperature:");
  scanf("%f",&temperature);

  if(temperature<0){
    printf("solid");
  }
  else if(temperature>=0 && temperature<100){
    printf("Liquide");
  }
  else if(temperature>=100){
    printf("gaz");
  }









return 0;
}
