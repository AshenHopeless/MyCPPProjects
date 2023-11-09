#include <stdio.h>

int main()
{
    int a = 50;
    int b = 5;
    int erge = 0;

    if(a == 0)
    {
    	erge = b;
    }
    else
    {
        while(b != 0)
        {
            if(a>b)
            {
                a = a-b;
            }
            else
            {
                b = b-a;
            }
        }
        erge = a;
    }
    printf("Wert: %i", erge);
}
4