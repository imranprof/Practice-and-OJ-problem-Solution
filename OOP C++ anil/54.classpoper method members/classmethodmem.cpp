#include <iostream>
#include <string>

using namespace std;

class HumanBeing{
    public:
        string name;        //here name is class properties

        void introduce()            //here introduce() function is class Method
        {
             cout << "Hi i am " << name <<endl;
        }
};

int main()
{
    HumanBeing imran;       // here imran is a object, here declare HumanBeing class object

    imran.name = "imran";

    imran.introduce();      //access class member by object

    HumanBeing orth;       //here orth is  a object, orth is a object of HumanBeing

    orth.name = "Orth";

    orth.introduce();       //access class member by object

    return 0;
}
