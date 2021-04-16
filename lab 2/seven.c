//if cp and sp is provided.wap to determine wheather seller has got profit or loss.also determine how musch profit or loss has made

#include <stdio.h>

int main()
{
    float sp;
    float cp;
    float profit;
    float loss;

    printf("enter selling price:");
    scanf("%f", &sp);

    printf("enter cost price:");
    scanf("%f", &cp);

    profit = sp - cp;
    loss = cp - sp;

    if (sp > cp)
    {
        printf("seller has profit of %f", profit);
    }
    if (cp > sp)
    {
        printf("seller has loss of %f", loss);
    }

    return 0;
}