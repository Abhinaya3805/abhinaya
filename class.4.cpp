#include<stdio.h>

// This function is to compute the factorial of a number.
int factorial(int val)
{
int x, y = 1;
for (x = 1; x <= val; x++)
{
y = y * x;
}
return y;
}

int main ()
{
    
// Initializing the variables
int num, count, final_result, last_digit, sum = 0, ori_num;

// Taking input from the user
printf ("Enter the Number to be checked:\t");
scanf ("%d", &num);
    
ori_num = num;

// Computing the last digit and calling the factorial function every time.
for (ori_num = num; num > 0; num = num / 10)
{
count = 1, final_result = 1;
last_digit = n % 10;
final_result = factorial(last_digit);
sum = sum + final_result;
}

// Condition for checking if the number computer is a strong number or not 
    
if (sum == ori_num)
{
printf ("%d is a Strong number\n\n", ori_num);
}
else
{
printf ("%d is not a Strong number\n\n", ori_num);
}
return 0;
}