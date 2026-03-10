#include<iostream>
using namespace std;
class Salary{
    int netSalary;
    float finalSalary;
    public:
    void getData(){
        cout<<"Enter net salary: ";
        cin>> netSalary;
    }
    void salary(){
        finalSalary = netSalary * 1.2;
        cout<<"Final bonus salary = "<< finalSalary;
    }
};
int main(){
    Salary obj;
    obj.getData();
    obj.salary();
    return 0;
}