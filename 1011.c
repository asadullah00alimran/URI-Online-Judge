#include<stdio.h>
int main()
{
    float pi = 3.14159;
    float R,volume;

    scanf("%f",&R);

    volume = (4.0/3.0)*pi*R*R*R;

    printf("VOLUME = %0.3f\n",volume);

    return 0;
}
