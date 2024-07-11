#include <stdio.h>

int main(void)
{
        int a, b, c;
        int ilk, orta, son;
        scanf("%d%d%d", &a, &b, &c);

        if ((a > b) && (a > c))
        {
                if (b > c)
                {
                        ilk = a;
                        orta = b;
                        son = c;
                }
                else
                {
                        ilk = a;
                        orta = b;
                        son = c;
                }
        }
        if ((b > a) && (b > c))
        {
                if (a > c)
                {
                        ilk = b;
                        orta = a;
                        son = c;
                }
                else
                {
                        ilk = b;
                        orta = c;
                        son = a;
                }
        }
        if ((c > a) && (c > b))
        {
                if (a > b)
                {
                        ilk = c;
                        orta = a;
                        son = b;
                }
                else
                {
                        ilk = c;
                        orta = b;
                        son= a;
                }
                
        }
        printf("ilk değer: %d\nortanca değer: %d\nson değer: %d\n", ilk, orta, son);
}
