#include <iostream>
#include <Windows.h>
using namespace std;

class Led
{
public:
   int ledPin;
   Led(int pinNumber);
   void pinMode(int);
   void blinkLed(int delay);
};

Led::Led(int pinNumber)
{
    ledPin = pinNumber;
    pinMode(pinNumber);
}

void Led::pinMode(int pin)
{
    cout << pin << " is set as output" << endl;
}

void Led::blinkLed(int delay)
{
    cout << "Led at " << ledPin << " is on" << endl;
    Sleep(delay);
    cout << "Led at " << ledPin << " is off" << endl;
    Sleep(delay);
}

int main()
{
    int usDelay, pinNumber, turn;
    cout << "Enter Delay, Pin number and Turns [sequentially, example: 1000 13 2]: ";
    cin >> usDelay, cin >> pinNumber, cin >> turn;
    Led led(pinNumber);
    while (turn > 0){
    led.blinkLed(usDelay);
    turn--;
    }
}
