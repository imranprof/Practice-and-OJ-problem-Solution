#include<iostream>

using namespace std;

class Human{

public:
    Human() {
        cout << "Constructor called"<< endl;
    }

    ~Human(){
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Human *imran;

    imran = new Human();
    delete imran; ///when destroyed object then the destructor called.

    return 0;
}
