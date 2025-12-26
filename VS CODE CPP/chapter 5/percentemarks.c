#include<stdio.h>

int calcPercentage (int science , int maths , int sanskrit);

int main (){
    int sc;
    int ma;
    int sa;
    printf("enter your science marks :  \n");
    printf("enter your maths marks : \n");
    printf("enter your sanskrit marks : \n");

    scanf("%d" , &sc);
    scanf("%d" , &ma);
    scanf("%d" , &sa);
    
    printf ("percentage is : %d" , calcPercentage(sc,ma,sa));

    return 0;

}

int calcPercentage(int science , int maths , int sanskrit){
    return ((science+maths+sanskrit)/3);
}
