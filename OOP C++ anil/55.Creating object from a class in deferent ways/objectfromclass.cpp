#include<iostream>
#include<string>

using namespace std;

class Human{
public:
    string name;

    void introduce()
    {
        cout << "Hi " << name<< endl;
    }

};

int main()
{
    Human imran;        //create a object imran it store in stack

    Human *imr = new Human(); // for dynamic allocation create a pointer object, it store in hip

    imran.name = "imran";

    imran.introduce();

    imr->name = "Orth";     //access member by -> operator

    imr->introduce();       // access member by -> operator

    return 0;
}
