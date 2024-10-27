//Program for Logic Operator
#include <stdio.h>

int main() 
{
    int a = 5;
    int b = 10;

    if (a < 10 && b > 5) 
    {
        printf("Both conditions are true.\n");
    }

    if (a > 10 || b > 5) 
    {
        printf("At least one condition is true.\n");
    } else 
    {
        printf("Neither condition is true.\n");
    }

    if (!(a > 10))
    {
        printf("a is not greater than 10.\n");
    }

    return 0;
}
