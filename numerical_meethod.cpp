#include <iostream>
#include <math.h>
double f(double );
double Trapeze(double ,double,int,double(*)(double));
int main()
{
    double a=2, b=5;
    int n=3;
    std::cout << Trapeze(a,b,n,f) << std::endl;
    system("pause");
    return 0;
}

double f(double x)
{
    return 1/log(x);
}

double Trapeze(double a, double b, int n,double (*ptr_f)(double))
{
    double h=(b-a)/n;
    double sum = ptr_f(a)+ptr_f(b);
    for (int i = 1; i <= n-1; i++)
    {
        sum += 2 * ptr_f(a+i*h);
    }
    sum *= h / 2;
    return sum;
}
