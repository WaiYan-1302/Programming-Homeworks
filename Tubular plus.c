#include<stdio.h>

int main(){

int i ,j=3;
printf("A\tA+2\tA+4\tA+6\n\n");
for(i=1 ; i<6; i++){

    printf("%d\t%d\t%d\t%d\n" , j*i , j*i+2 , j*i+4 , j*i+6);
}
return 0;
}
