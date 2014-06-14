#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    long long n, res, m;
    int f, sf, primeness;
    
    //printf("Enter a number: ");
    //scanf("%ld", &m);
    m=600851475143;
    n=ceil(sqrt(m));
    
    primeness=0;
    while(!primeness)
    {
        f=1;
        while(f)
        {
            if(m%n==0)
            {
                res=n;
                f=0;
            }
            n--;
        }
        
        sf=2;
        while(res%sf!=0)
            sf++;
        if(sf>=2 && sf<res)
            primeness=0;
        else
            primeness=1;
    }
    
    printf("Largest Prime Factor = %ld\n",res);

    system("PAUSE");
    return 0;
}

