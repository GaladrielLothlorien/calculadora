#include <stdio.h>

int main(){
    //Create variables
    int num1;
    int num2;

    int sum;
    int minus;
    int multiply;
    int divide;
    int restTheDivide;

    //The presentation of program
    printf("Type your fist number: ");
    scanf("%d", &num1);

    printf("Typer your second number: ");
    scanf("%d", &num2);

    //Logic programs
    sum = num1 + num2;
    minus = num1 - num2;
    multiply = num1 * num2;
    divide = num1 / num2;
    restTheDivide = num1 % num2;

    //The result  
    printf("The sum is: %d \n", sum);
    printf("The minus is: %d \n", minus);
    printf("The multiply is: %d \n", multiply);                       
    printf("The divide is: %d \n", divide);
    printf("The rest of divide is: %d \n", restTheDivide);

    //Finished
    printf("The program has finished...");

    return 0;
}
