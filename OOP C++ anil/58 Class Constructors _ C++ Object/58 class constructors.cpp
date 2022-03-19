#include<iostream>
#include<string>

using namespace std;

class Human {
private:
    string name;
    int age;
public:
    Human(){
        name = "noname";
        age = 0;
        cout << "Constructor is called when i create an object of human"<<endl;
    }

    void display() {
        cout << name << endl << age << endl;
    }
};

int main()
{
    Human imran;

    imran.display();

    return 0;
}
