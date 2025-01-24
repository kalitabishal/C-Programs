#include<stdio.h>

// calculating the factorial 
int factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    } else
    {
        return x * factorial(x - 1);
    }
    
}

int main()
{
    int num;
    printf("Please enter a number from 1 to 10: \n");
    scanf("%d", &num);

    if (num > 10 || num < 1 )
    {
        printf("Please enter a valid Number! ");
    } else
    {
        printf("The factorial of %d is : %d\n ", num, factorial(num));
    }
     
}