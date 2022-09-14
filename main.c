#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//#define PI 3.14

int main()
{
    /*
    double a = 0;
    int b = 0;
    double result = 0;
    printf("Pelda:\n");
    scanf("%lf", &a);
    scanf("%d", &b);
    result = a/b;
    printf("Szamitas: %f / %d = %.2f", a, b, result);
    */

    /*
    int a = 5, b = 10;
    printf("K = %d\n", 2*a+2*b);
    printf("T = %d \n", a*b);
    */

    /*
    double a=6, b=5, res;
    //printf("%d\n\n", scanf("%lf%lf", &a, &b));
    printf("Kerem az \"a\" es \"b\" erteket: ");
    scanf(" %lf %lf", &a, &b);
    res=a+b;
    printf("%.2f + %.2f = %.2f\n",a,b,res);
    res=a-b;
    printf("%.2f - %.2f = %.2f\n",a,b,res);
    res=a*b;
    printf("%.2f * %.2f = %.2f\n",a,b,res);
    res=a/b;
    printf("%.2f / %.2f = %.2f\n",a,b,res);
    */

    /*
    int r;
    double k,t;
    //const double pi = 3.14;
    scanf(" %d",&r);
    t=pow(r,2)*M_PI;
    k=2*r*M_PI;
    printf("K=%f\n",k);
    printf("T=%f\n",t);
    */


    int a=1;
    int b=2;
    int c;
    printf("a:%d; b:%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("a:%d; b:%d\n",a,b);


    return 0;
}

