#include<stdio.h>

float converTemp(float celcius);
float celcius;

int main(){
    float celcius;
    printf("enter celcius : ");
    scanf("%f" , &celcius);
    float far = converTemp(celcius);
    printf("far = %f" , far);


    return 0;
}

float converTemp(float celcius){
    float far = celcius*(9/5) + 32;
    return far;
}