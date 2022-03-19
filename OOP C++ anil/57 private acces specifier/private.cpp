#include<iostream>
#include<string>

using namespace std;

class Human{
private:
    int age;

    int getAge() {
        return age - 5;

    }

public:
    void display() {
        cout << getAge() << endl;
    }

    void setAge(int value) {
        age = value;

    }

};

int main()
{
    Human imran;
    imran.setAge(21);
    imran.display();

    return 0;
}
