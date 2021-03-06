#include<stdio.h>
int main()
{
    int code1,code2,unit1,unit2;
    float price1,price2,value1,value2,value;

    scanf("%d %d %f",&code1,&unit1,&price1);
    scanf("%d %d %f",&code2,&unit2,&price2);

    value1 = unit1*price1;
    value2 = unit2*price2;
    value = value1 + value2;

    printf("VALOR A PAGAR: R$ %0.2f\n",value);

    return 0;

}
