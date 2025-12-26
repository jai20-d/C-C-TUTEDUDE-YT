# include<stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 30 && marks >= 0 && marks <= 100) {
        printf("You PASS.\n");
    }
    else if (marks < 30) {
        printf("FAIL.\n");
    }
   
    else {
        printf("INVALID.\n");
    }

    return 0;
}