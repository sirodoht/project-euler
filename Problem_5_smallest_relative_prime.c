#include <stdio.h>
#include <stdlib.h>
#define limit 20

int main(void)
{
    int j, flag, counter, res;
    long long int i;
    
    //i=12252240;
    i=1;
    flag=1;
    while(flag)
    {
        if(i%10!=0 || i%2!=0)
        {
            i++;
            continue;
        }
        
        counter=0;
        for(j=1;j<=limit;j++)
            if(i%j==0)
                counter++;
        
        if(counter==limit)
        {
            res=i;
            flag=0;
        }
        
        i++;
    }            
    
    printf("Result = %d\n", res);
    
    system("PAUSE");
    return 0;
}
