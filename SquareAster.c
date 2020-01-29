#include<stdio.h>

int main(){

int x , j , size;
printf("Enter Size of Square: ");
scanf("%d" , &size);

for(x = 0 ; x< size ; x++){
   for(j=0 ; j<size; j++){
    printf("*");
   }
   printf("\n");
}
return 0;
}
