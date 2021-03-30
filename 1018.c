#include<stdio.h>
int main()
{
    int value;
    int a,b,c,d,e,f,g,h,i,j,k,l,m;

    scanf("%d",&value);

        a = value/100;
        b = value%100;
        c = b/50;
        d = b%50;
        e = d/20;
        f = d%20;
        g = e/10;
        h = e%10;
        i = f/5;
        j = f%5;
        k = j/2;
        l = j%2;
        m = l/1;

        printf("%d\n",value);
        printf("%d nota(s) de R$ 100,00\n",a);
        printf("%d nota(s) de R$ 50,00\n",c);
        printf("%d nota(s) de R$ 20,00\n",e);
        printf("%d nota(s) de R$ 10,00\n",g);
        printf("%d nota(s) de R$ 5,00\n",i);
        printf("%d nota(s) de R$ 2,00\n",k);
        printf("%d nota(s) de R$ 1,00\n",m);


    return 0;
}
