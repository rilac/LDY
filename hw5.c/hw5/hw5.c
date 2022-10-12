#include <stdio.h>

void binary(int n) {
    if (n < 2) 
    {
        printf("%d", n);
    }
    else 
    {
        binary(n / 2);
        printf("%d", n % 2);
    }
}
int main() 
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    binary(num);
    return 0;
}
