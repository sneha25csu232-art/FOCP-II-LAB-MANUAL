#include <iostream>
using namespace std;
class Multiplication
{
    private:
    int r;
    float area;
    public:
    void getData();
    void Display();
};

void Multiplication:: getData()
{
    cout<<"Enter radius of fountain ";
    cin>>r;
}

void Multiplication:: Display()
{
    area = 3.14*r*r;
    cout<<"Area of Fountain " << area;
}

int main()
{
    Multiplication a1;
    a1.getData();
    a1.Display();
    return 0; 
}