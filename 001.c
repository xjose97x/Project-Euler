#include <stdio.h>

int main(void)
{
    int i, sum = 0;
    for(i = 1; i < 1000; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum+=i;
        }
    }
    printf("%i", sum);
}