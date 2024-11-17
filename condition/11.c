#include<stdio.h>
#include<time.h>


int main (){

time_t t = time(NULL);


int days = t % 7;

switch (days){

case 0:
    printf("monday");
    break;
case 1:
    printf("tusday");
    break;
case 2:
    printf("wensday");
    break;
case 3:
    printf("thursday");
break;

case 4:
    printf("friday");
    break;
case 5:
    printf("saturday");
    break;
case 6:
    printf("sunday");
    break;
}

return 0;
}
