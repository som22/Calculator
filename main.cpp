#include <iostream>
using namespace std;
double add(double a, double b){
    return a+b;
}
double subtract(double a, double b)
{
    return a-b;
}
double multiply(double a, double b)
{
    return a*b;
}
double divide(double a, double b)
{
    return a/b;
}
int main()
{
    double num1;
    double num2;
    char op;
    cout << "Enter first number:  ";
    cin >> num1;
    cout << "Enter operator:  ";
    cin >> op;
    cout << "Enter second number:  ";
    cin >> num2;
    if (op == '+')
    {
        cout << add(num1, num2);
    }
    else if (op == '-')
    {
        cout << subtract(num1, num2);
    }
    else if (op == '*')
    {
        cout << multiply(num1, num2);
    }
    else if (op == '/')
    {
        cout << divide(num1, num2);
    }
    else
    {
        cout << "Invalid Operator";
        return 1;
    }

    return 0;

}
