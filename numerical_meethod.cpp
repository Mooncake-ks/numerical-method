#include <iostream>
#include <math.h>
#include <functional>

double I(double);
double Trapeze(double ,double,int,const std::function<double(double)>&f);
int main()
{
    double a=2, b=5;
    int n=3;
    std::cout << Trapeze(a,b,n,I) << std::endl;
    system("pause");
    return 0;
}

double I(double x)
{
    return 1/log(x);
}

double Trapeze(double a, double b, int n,const std::function<double(double)>&f)
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
