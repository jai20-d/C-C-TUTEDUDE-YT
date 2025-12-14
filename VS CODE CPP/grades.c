# include<stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100 ) {
        printf("Your grade is A+.\n");
    }
    else if (marks < 90 && marks >= 70) {
        printf("Your grade is A.\n");
    }
    else if (marks < 70  && marks >= 30){
        printf("Your grade is B.\n");
    }
   
    else {
        printf("Your grade is C.\n");
    }

    return 0;
}