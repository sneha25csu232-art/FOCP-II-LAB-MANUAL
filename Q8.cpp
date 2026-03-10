#include <iostream>
using namespace std;

class Event_id{
    int id;

    public :

    void data(){
        cout << "Enter id : ";
        cin >> id;
    }

    void tags(){

        if (id % 3 == 0 && id % 5 == 0)
        cout << "Buzz\nFuzz";

         else if(id % 5 == 0)
        cout << "Fuzz";

        else if (id % 3 == 0)
        cout << "Buzz";
    }
};

int main() {
    Event_id obj;
    obj.data();
    obj.tags();

    return 0;
}