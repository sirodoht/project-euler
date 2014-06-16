#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int sum = 0;

    for(i = 0; i < 1000; i++)
    {
        printf("Current i = %d\n", i);
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
            printf("Current Sum = %d\n", sum);
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}
