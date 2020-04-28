#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    int i, n, sum = 0;
    scanf("%d", &n);
    
    while(n>0)
    {
    sum += (n % 10);
    n = n / 10;
    }
    
printf("sum : %d ", sum); 

return 0;
}
    

