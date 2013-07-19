#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int number)
{
    int i;
    double lim=sqrt(number)+1;
    //printf("lim of %d: %g\n", number, lim);
    
    if(number==2)
        return 1;
    if(number%2==0)
        return 0;
    for(i=3; i<lim; i+=2)
        if (number % i == 0)
            return 0;
    
    return 1;
}

int main(void)
{
    int i, limit=2000000;
    unsigned long long int sum=0;
    
    for(i=2;i<limit;i++)
        if(isprime(i))
        {
            sum+=i;
            printf("i = %d || sum = %llu\n", i, sum);
        }
    
    printf("Sum of primes up to %d: %llu\n", limit, sum, sum);
    system("PAUSE");
	return 0;
}
