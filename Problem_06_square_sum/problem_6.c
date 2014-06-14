#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, sum_sq=0, sq_sum=0, dif;
    
    for(i=1;i<=100;i++)
    {
        sum_sq+=i*i;
        sq_sum+=i;
    }
    
    sq_sum=sq_sum*sq_sum;
    dif=sq_sum-sum_sq;
    
    printf("Sum of squares: %d\nSquare of sum: %d\n", sum_sq, sq_sum);
    printf("Difference: %d\n", dif);
    
    system("PAUSE");
	return 0;
}

