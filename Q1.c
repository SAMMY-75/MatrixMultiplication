#include<stdio.h>

int main()
{
    int l=12,b=6,area,p;
    printf("\nLength  : %d cm",l);
    printf("\nBreadth : %d cm",b);
    area=l*b;
    p=2*(l+b);
    printf("\n\nArea of the rectangle in Decimal is %d",area);
    printf("\nArea of the rectangle in Hexadecimal is %x",area);
    printf("\n\nPerimeter of the rectangle in Decimal is %d",p);
    printf("\nPerimeter of the rectangle in Hexadecimal is %x\n",p);

    return 0;
}
