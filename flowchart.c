#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, e;
    double fa;
    double fb;
    double fc;

    double u = fa;
    double v = fb;
    double w = fc;
    
    c = (a + b)/2;
    d = (b - a)/2;
    
    printf("Enter your f(a) value: \n", &fa);
    scanf("%d \n", fa);


 
    

    while (w == u)
    {

        if (b == c || v == w)
        {
            printf("Your C = %d and f(c) = %d \n", c, fc);
        }break;
        
        while (w == v)
        {
            if (d < e)
            {
                printf("Your C = %d \n", c);
            }
            else
                break;
        }break;
        
        printf("Enter your f(b) value: \n", &fb);
        scanf("%d \n", fa);

        if (a < 0)
        {
            printf("\n");
            break;   
        }
        else if (w < 0)
        {
            printf("\n");
            break;
        }
        
        
    }
    
}