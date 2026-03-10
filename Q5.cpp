#include<iostream>
using namespace std;
class Swap{
    int num1, num2, temp;
    public:
    void getData(){
        cout<<"Enter first no.: ";
        cin>> num1;
        cout<<"Enter second no.: ";
        cin>> num2;
    }
    void swapping(){
        temp = num1;
        num1 = num2;
        num2 = temp;
        cout<<"1st no. "<<num1;
        cout<<"\n2nd no. "<<num2;
    }
};
int main(){
    Swap obj;
    obj.getData();
    obj.swapping();
    return 0;
}