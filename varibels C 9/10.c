#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
const float p=3.14;
float a;
float volume;

printf("entrez number a:");
scanf("%f",&a);


volume= (4.0/3.0)* p * pow(a,3);

printf("volum est:%.2f\n",volume);




return 0;
}
