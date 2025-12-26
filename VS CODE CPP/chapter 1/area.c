# include<stdio.h>

int main() {

    //area of square

    float length;
    printf("enter side length:");
    scanf("%f", &length);
    printf("area is :  %f",length*length);

    //area of circle

    float radius;
    printf("enter radius");
    scanf("%f", &radius);
    printf("area of circle is : %f", 3.14*radius*radius);

    return 0;
}

