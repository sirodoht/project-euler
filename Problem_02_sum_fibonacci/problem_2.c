#include <stdio.h>
#include <stdlib.h>

int recursive_fib(int n)
{
    if(n < 2)
        return n;
    else
        return recursive_fib(n-1) + recursive_fib(n-2);
}

/*
int fasterthanslowfibf(int n)
{
    int i;
    long int F[100];

    //F=(int *)malloc(n * sizeof(int));

    F[0]=0;
    F[1]=1;

    for(i=2; i<=n ;i++)
        F[i]=F[i-2]+F[i-1];

    return F[n];
}*/

int main(void)
{
    int i, fib_counter;
    int sum = 0;

    /*
    for(i=0;i<100;i++)
      printf("%d fib = %d\n", i, recursive_fib(i));
    */
    for(i = 0; sum < 4000000; i++)
    {
        fib_counter = recursive_fib(i);
        if(fib_counter % 2 == 0)
            sum += fib_counter;
    }

    printf("Result = %d\n", sum);

    return 0;
}
