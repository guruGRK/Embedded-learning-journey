#include <stdio.h>

float calculate(float num1, float num2, char op);

int main() {
    float a, b, result;
    char op;
    char choice;

    do {
        printf("Enter first number: ");
        scanf("%f", &a);

        printf("Enter second number: ");
        scanf("%f", &b);

        printf("Enter operator (+ - * /): ");
        scanf(" %c", &op); // notice the space before %c

        result = calculate(a, b, op);
        printf("Result = %.2f\n", result);

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the calculator!\n");
    return 0;
}

float calculate(float num1, float num2, char op) {
    switch (op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero!\n");
                return 0;
            }
            return num1 / num2;
        default:
            printf("Invalid operator!\n");
            return 0;
    }
}
