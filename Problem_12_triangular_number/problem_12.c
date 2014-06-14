#include <stdio.h>
#include <stdlib.h>

int divisors_niwiw(int n) // from stackoverflow.com || quite slow
{
    int counter,i;
    for(counter=0,i=1;(!(i==n) && !(n%i) && (counter++)) || i<=(n/2);i++);
    return ++counter;
}

int divisors_continuous_division_v2(int x) // v2: now works with perfect sqaures
{
    int limit = x;
    int numberOfDivisors = 0;
    int i;
    
    for (i=1; i < limit; i++)
    {
        if (x % i == 0)
        {
            limit = x / i;
            if (limit != i)
            {
                numberOfDivisors++;
            }
            numberOfDivisors++;
        }
    }

    return numberOfDivisors;
}

int divisors_continuous_division(int x) // note: does not work with perfect squares
{
    int limit = x;
    int numberOfDivisors = 0;
    int i;
    
    for (i=1; i < limit; i++)
        if (x % i == 0)
        {
            limit = x / i;
            numberOfDivisors++;
        }

    return numberOfDivisors * 2;
}

int divisors_exp(int num) // mathematical type: Product of exponents of prime factors plus 1: "(p+1)(q+1)", "12 = 2^2 + 3^1", (2+1)*(1+1)"
{
    int current_number=2;
    int current_exp=0;
    int result=1;

    while(num>1)
    {
        while(num%current_number==0)
        {
            current_exp++;
            num/=current_number;
        }
        result*=current_exp+1;
        current_exp=0;
        current_number++;
    }

    return result;
}

int divisors_num_bf(int num) // brute-force divisors function
{
	int i, result, start;
	
	start=num/2;
	
	if(num%2==0)
	   result=3;
	else
	   result=2;
	
	for(i=start;i>2;i--)
		if(num%i==0)
			result++;
	
	return result;
}

int main(void)
{
	int i, k, sum, divn;
    
	i = 0;
	k = 0;
	sum = 0;
	
	while (divn<=500)
	{
        k++;
		i++;
		sum += i;
        //divn=divisors_num_bf(sum);
		//divn=divisors_continuous_division(sum);
		divn=divisors_exp(sum);
		//divn=divisors_niwiw(sum);
        printf("%dth triangular number is %d and has %d factors.\n", k, sum, divn);
	}
    system("PAUSE");
	return 0;
}
