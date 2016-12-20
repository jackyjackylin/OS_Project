#include<stdio.h>
void main(){
    int inv=0;
    double sum=0;
    float Data;
    do {
        printf("輸入實數:");
        scanf("%f", &Data);
        sum = sum + Data;
        inv = inv+1;
    printf( "Average= %f ",sum/6.0);

}
