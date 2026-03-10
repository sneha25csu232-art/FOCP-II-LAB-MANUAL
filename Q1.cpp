#include <iostream>
using namespace std;
class Addition
{
    private:
    int a,b,c;
    int sum;
    public:
    void GetData();
    void Display();
};

void Addition:: GetData()
{
    cout<<"Enter first number ";
    cin>>a;
    cout<<"Enter second number ";
    cin>>b;
    cout<<"Enter third number ";
    cin>>c;
}

void Addition:: Display()
{
    sum = a+b+c;
    cout<<"Sum of two no is " << sum;
}

int main()
{
    Addition a1;
    a1.GetData();
    a1.Display();
    return 0; 
}