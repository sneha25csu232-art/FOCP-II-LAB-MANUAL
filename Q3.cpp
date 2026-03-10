#include <iostream>
using namespace std;
class Conversion
{
    private:
    int f;
    float c;
    public:
    void getData();
    void Display();
};

void Conversion:: getData()
{
    cout<<"Enter temperature in fahrenheit ";
    cin>>f;
}

void Conversion:: Display()
{
    c = (f - 32) / 1.8;
    cout<<"Temperature in celsius is " << c;
}

int main()
{
    Conversion a1;
    a1.getData();
    a1.Display();
    return 0; 
}