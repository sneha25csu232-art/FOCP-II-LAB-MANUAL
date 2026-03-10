#include <iostream>
using namespace std;
class Bill{
    int itemNo, quantity;
    float price, bill;
    public:
    void getData(){
        cout<<"Enter item no.: ";
        cin>> itemNo;
        cout<<"Enter Quantity: ";
        cin>> quantity;
        cout<<"Enter Price: ";
        cin>> price;
    }
    void cal(){
        bill = quantity * price * 0.8;
        cout<<"Final price: "<< bill;
    }
};
int main(){
    Bill obj;
    obj.getData();
    obj.cal();
    return 0;
}