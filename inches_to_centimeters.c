#include<stdio.h>
void hight();
int main()
{
    hight();
    return 0;
}
void hight()
{
    float i;
    scanf("%f",&i);
    float c=i*2.54;
    printf("%.2f",c);
}