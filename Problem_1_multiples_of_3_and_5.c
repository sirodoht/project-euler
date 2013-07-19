#include <stdio.h>
#include <stdlib.h>

main()
{
    int i,S=0;
    
    for(i=0;i<1000;i++)
    {
        printf("Current i = %d\n", i);
        if(i%3==0 || i%5==0)
        {
            S+=i;
            printf("Current S = %d\n", S);
        }
    }
    
    printf("Sum = %d\n",S);
    system("PAUSE");
}
    
