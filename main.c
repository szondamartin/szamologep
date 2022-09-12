#include <stdio.h>

int main()
{
    int a,b;
    char op;

    printf("Adj meg egy számot: a=");
        scanf("%d", &a);
            printf("a = %d\n", a);
         printf("Adj meg egy számot: b=");
        scanf("%d", &b);
    printf("b = %d", b);
    printf("\nAdj meg egy műveletet ");
        scanf(" %c", &op);
    printf("c = %c", op);

    if(op=='*')
    printf("\nEredmény: %d", a*b);
    else
    if(op=='+')
    printf("\nEredmény: %d", a+b);
    else
    if(op=='-')
    printf("\nEredmény: %d", a-b);
    else
    if(op=='/')
    {
    if(b!=0)
    printf("\nEredmény: %lf", a/b);
    else
        printf("\n0-val nem lehet osztani"); 
    }
    else
    printf("\nNem definiált művelet");
}