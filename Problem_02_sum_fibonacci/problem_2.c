#include <stdio.h>
#include <stdlib.h>

int fibf(int n)
{
    if(n<2)
        return n;
    else
        return fibf(n-1)+fibf(n-2);
}

/*int fasterthanslowfibf(int n)
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

main()
{
    int i,cfib,s=0;
    
    /*
    for(i=0;i<100;i++)
        printf("%d fib = %d\n", i, fibf(i));
    */
    for(i=0;s<4000000;i++)
        {
            cfib=fibf(i);
            if(cfib%2==0)
                s+=cfib;
        }
    
    printf("S Fib = %d\n", s);
    system("PAUSE");
}

