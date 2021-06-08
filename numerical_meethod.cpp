#include <iostream>
#include <math.h>
double f(double x);
double Trapeze(double ,double,int);
int main()
{
    double a=2, b=5;
    int n=3;
    std::cout << Trapeze(a,b,n) << std::endl;
    system("pause");
    return 0;
}

double f(double x)
{
    return 1/log(x);
}

double Trapeze(double a, double b, int n)
{
    double h=(b-a)/n;
    double sum = f(a)+f(b);
    for (int i = 1; i <= n-1; i++)
    {
        sum += 2 * f(a+i*h);
    }
    sum *= h / 2;
    return sum;
}
