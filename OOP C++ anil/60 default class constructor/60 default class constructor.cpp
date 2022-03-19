#include<iostream>
#include<string>

using namespace std;

class Human{
private:
    int age;
    string name;

public:
    Human() {
        cout << "default constructor" << endl;
        name = "noname";
        age = 0;
    }

    Human(string iname, int iage) {
        cout << "Overloaded constructor" << endl;
        name = iname;
        age = iage;
    }

    void speakUp() {
        cout << name << endl << age << endl;
    }

};


int main()
{
    Human imran("imran", 21);
    imran.speakUp();


    return 0;
}
