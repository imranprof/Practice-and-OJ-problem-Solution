#include<iostream>
#include<string>

using namespace std;

class Human{
string name;
int age;

public:
    void tellme() {
        cout << name << endl << age << endl;
    }

    Human(string iname, int iage) {
        name = iname;
        age = iage;
    }

    friend void display(Human man);   ///This is friend function , its takes object as a parameter..
};

void display(Human man) {
    cout << man.name << endl << man.age << endl;

}

int main()
{
    Human imran("imran", 22);

    display(imran);  //i pass a object in the friend function

    return 0;
}
