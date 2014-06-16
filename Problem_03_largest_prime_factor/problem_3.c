#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    long long n, result, m;
    int flag, sf, primeness;

    //printf("Enter a number: ");
    //scanf("%ld", &m);
    m = 600851475143;
    n = ceil(sqrt(m));

    primeness = 0;
    while(!primeness)
    {
        flag = 1;
        while(flag)
        {
            if(m % n == 0)
            {
                result = n;
                flag = 0;
            }
            n--;
        }

        sf = 2;
        while(result % sf != 0)
            sf++;
        if(sf >= 2 && sf < res)
            primeness = 0;
        else
            primeness = 1;
    }

    printf("Largest Prime Factor = %ld\n", result);

    return 0;
}
