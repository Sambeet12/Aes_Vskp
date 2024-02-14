#include <stdio.h>

int main(void)
{
    int a, b, result;
    printf("Enter the numbers to be multiplied:");
    scanf("%d%d", &a, &b);       
    result = 0;
    while (b != 0)               
    {
        if (b & 1)               
        {
            result = result + a;  
        }
        a <<= 1;                    
                                  
        b >>= 1;                    
    }

    printf("Result: %d\n",result);
}
