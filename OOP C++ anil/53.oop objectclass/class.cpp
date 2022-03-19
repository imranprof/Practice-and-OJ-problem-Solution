#include<iostream>

using namespace std;

class HumanBeing{       //here i create a class HumanBeing

    public :
        void display()
        {
            cout << "Hello im human being "<<endl;
        }
};

int main()
{
    HumanBeing imran;   //declare a object imran by class HumanBeing

    imran.display();        //access class member by object imran, using imran.membername

    return 0;
}
