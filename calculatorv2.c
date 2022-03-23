#include <stdio.h>
#include <stdlib.h>
//welcome to our mathematics operator
/*choose an operator
input two numbers
ask for the answer
check if the answer is correct and give the user an output
*/ 

int main(){
    int num1, num2, answer;
    char oper;
    float answerd;
    while (oper != 5)
    {
printf("to use the addition operator, please enter 1 \n");
printf("to use the subtraction operator, please enter 2 \n");
printf("to use the division operator, please enter 3 \n");
printf("to use the multiplication operator, please enter 4 \n");
printf("to end the program, please enter 5 \n");
scanf("%c", &oper);

switch (oper)
{
case 1:
printf("Enter the first number: \n");
scanf("%d", &num1);
printf("Enter the second number: \n");
scanf("%d", &num2);
printf("The sum of %d and %d is equal to: ", num1 ,num2);
scanf("%d", &answer);
    break;

case 2:
printf("Enter the first number: \n");
scanf("%d", &num1);
printf("Enter the second number: \n");
scanf("%d", &num2);
printf("The difference of %d and %d is equal to: ", num1 ,num2);
scanf("%d", &answer);
    break;

case 3:
printf("Enter the first number: \n");
scanf("%d", &num1);
printf("Enter the second number: \n");
scanf("%d", &num2);
printf("The division of %d and %d is equal to: ", num1 ,num2);
scanf("%f", &answerd);
    break;

case 4:
printf("Enter the first number: \n");
scanf("%d", &num1);
printf("Enter the second number: \n");
scanf("%d", &num2);
printf("The multiplication of %d and %d is equal to: ", num1 ,num2);
scanf("%d", &answer);
    break; 

case 5:
    break;

default:

    break;
}

float sumans = num1 + num2;
float diffans = num1 - num2;
float divans = (num1 / num2);
float multans = (num1 * num2);


if (oper == 'a')
{
   if (sumans == answer)
   {
       printf("the answer is correct");
   }else
   {
       printf("the answer is incorrect");
   }
}else if (oper == 'b')
{
    if (diffans == answer)
    {
        printf("the answer is correct");
    }else
    {
        printf("the answer is incorrect");
    }  
}else if (oper == 'c')
{
    if (divans == answer)
    {
 
        printf("the answer is correct");
    }
    else
    {
        printf("the answer is incorrect");
    }
}else if (oper == 'd')
{
    if (multans == answer)
    {
        printf("the answer is correct");
    }
    else
    {
        printf("the answer is incorrect");
    }   
}

    }
    return 0;
}