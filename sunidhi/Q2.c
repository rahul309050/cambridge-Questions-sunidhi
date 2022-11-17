// Develop a program to solve simple computational problems using arithmetic expressions and use of each operator leading to the simulation of a commercial calculator. (No built-in math function)

#include <stdio.h>

int main()

{

    int num1, num2, result, choice;

    printf("Enter num1 & num2: \n");

    scanf("%d %d", &num1, &num2);

    printf("Enter your choice:\n 1.Addition \n 2.Substraction \n 3.Multiplication \n 4.Divide \n 5.Reminder\n");

    scanf("%d", &choice);

    switch (choice)

    {

    case 1:
        result = num1 + num2;
        break;

    case 2:
        result = num1 - num2;
        break;

    case 3:
        result = num1 * num2;
        break;

    case 4:
        result = num1 / num2;
        break;

    case 5:
        result = num1 % num2;
        break;

    default:
        printf("\n Invalid no\n");
    }

    printf("result is = %d", result);

    return 0;
}