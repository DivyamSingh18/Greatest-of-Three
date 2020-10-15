#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("Write the three no.s");
    scanf("%d %d %d",&a,&b, &c);
    printf("The numbers are %d, %d and %d\n",a,b,c);
    if(a>b && a>c)
    {
        printf("%d is greatest",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is grestest",b);
    }
    else
    {
        printf("%d is greatest",c);
    }
}
