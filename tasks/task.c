#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1, num2;


    if(argc!=3)
    {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 0;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    int sum = num1 + num2;

    printf("Sum of %d and %d: %d\n", num1, num2, sum);




    // // Prompt the user for input
    // printf("Enter the first number: ");
    // scanf("%d", &num1);

    // printf("Enter the second number: ");
    // scanf("%d", &num2);

    // // Calculate and print the sum
    // int sum = num1 + num2;
    // printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
