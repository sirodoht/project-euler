#include <stdio.h>
#include <stdlib.h>

int IsPrime(int number)
{
    int i;
    
    for (i=2; i<number; i++)
    {
        if (number % i == 0 && i != number)
            return 0;
    }
    
    return 1;
}

int main(void)
{
    int i, flag, prime_counter=0, nth_prime;
    
    printf("Enter an ordinal number: ");
    scanf("%d", &nth_prime);
    
    i=2;
    flag=1;
    while(flag && prime_counter<nth_prime)
    {
        if(IsPrime(i))
            prime_counter++;
        
        i++;
    }
    
    printf("The %dth prime is %d.\n", prime_counter, --i);
    
    system("PAUSE");
	return 0;
}

