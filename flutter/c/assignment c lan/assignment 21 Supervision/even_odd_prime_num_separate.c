/*3. C program to write even, odd and prime numbers to separate file*/

#include <stdio.h>
int isPrime(int num);
void main()
{
    FILE *ef, *of, *pf;

    ef = fopen("even_num.txt", "w");
    of = fopen("odd_num.txt", "w");
    pf = fopen("prime_num.txt", "w");

    if (ef == NULL || of == NULL || pf == NULL)
    {
        printf("\n file not found\n");
    }

    int num;

    printf("\n Enter a number (0 to exit) : ");
    scanf("%d", &num);

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            fprintf(ef, "%d\n", num);
        }
        else
        {
            fprintf(of, "%d\n", num);
        }

        if (isPrime(num))
        {
            fprintf(pf, "%d\n", num);
        }

        printf("\n Enter a number (0 to exit) : ");
        scanf("%d", &num);
    }

    fclose(ef);
    fclose(of);
    fclose(pf);

    printf("\n even_num.txt, odd_num.txt and prime_num.txt in this file print number.\n");
}

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}