#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k, n[20][20];
    long unsigned int max, product;
    FILE *infile;
    
    if((infile=fopen("Project_Euler_Data/Problem_11_product_in_number_grid_[data].txt", "r"))==NULL)
    {
        printf("Input file error.\n");
        system("PAUSE");
        exit(1);
    }
    
    i=j=0;
    while(feof(infile)==0)
    {
        fscanf(infile, "%d", &n[i][j]);
        printf("%02d ", n[i][j]);
        if(++j==20)
        {
            printf("\n");
            i++;
            j=0;
        }
    }
    fclose(infile);
    
    printf("\n");
    
    max=product=1;
    for(i=0;i<20;i++)
        for(j=0;j<17;j++)
        {
            for(k=0;k<4;k++)
                product*=n[i][j+k];
            
            if(product>max)
                max=product;
            
            product=1;
        }
    
    product=1;
    for(j=0;j<20;j++)
        for(i=0;i<17;i++)
        {
            for(k=0;k<4;k++)
                product*=n[i+k][j];
            
            if(product>max)
                max=product;
            
            product=1;
        }
    
    product=1;
    for(i=0;i<17;i++)
        for(j=0;j<17;j++)
        {
            for(k=0;k<4;k++)
                product*=n[i+k][j+k];
            
            if(product>max)
                max=product;
            
            product=1;
        }
    
    product=1;
    for(i=0;i<17;i++)
        for(j=3;j<20;j++)
        {
            for(k=0;k<4;k++)
                product*=n[i+k][j-k];
            
            if(product>max)
                max=product;
            
            product=1;
        }
    
    printf("Max grid product: %lu\n", max);
    
    system("PAUSE");
	return 0;
}
