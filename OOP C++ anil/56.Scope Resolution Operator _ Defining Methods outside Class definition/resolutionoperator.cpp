#include<iostream>
#include<string>

using namespace std;

//this is a class
class Human{
public:
    string name;

    void introduce();       //here i declare a method prototype


};

//this is class method function
void Human :: introduce(){          //method outside the class by using scope resolution operator :: after the class name

    cout << Human ::name << endl;       //to access class properties use (class name :: properties name)
}


//this is main function
int main()
{

    Human imran;    //declare a object by class

    imran.name = "Imran";  //access class member

    imran.introduce();      //access class member

    return 0;
}
