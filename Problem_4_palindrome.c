#include <stdio.h>
#include <stdlib.h>

int reverser(int n)
{
    int rev=0;

    while(n)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    return rev;
}

int main(void)
{
    int i, j, bi, bj, k=0, max, index;
    int num, reverse_num, pal[100];
    
    //printf("Enter a number: ");
    //scanf("%d", &i);
    
    bi=bj=100;
    i=999;
    while(i>99 && bi)
    {
        j=999;
        while(j>99 && bj)
        {
            num=i*j;
            reverse_num=reverser(num);
            //printf("i = %d || j = %d || num = %d || rev = %d\n", i, j, num, reverse_num);
            if(num==reverse_num)
            {
                printf("i = %d\nj = %d\ni*j = %ld || k = %d\n", i, j, num, k);
                pal[k]=num;
                k++;
                bi--;
                bj--;
            }
            j--;
        }
        i--;
    }
    
    max=pal[0];
    for(i=1;i<100;i++)
        if(max<pal[i])
        {
            max=pal[i];
            index=i;
        }
    
    
    printf("Max = %d || Index = %d\n", max, index);
    
    system("PAUSE");
    return 0;
}
