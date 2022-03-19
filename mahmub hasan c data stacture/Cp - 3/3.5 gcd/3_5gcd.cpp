#include<iostream>
using namespace std;

int gcd(int a, int b);

int main()
{

    int x, y;

    cin >> x >> y;

    cout << "Gcd is = " << gcd(x, y) << endl;

    return 0;
}

//for lcm a*b = g * l
//l = (a * b) / g;

int gcd(int a, int b)
{
    if(b == 0) return a;
    if(a % b == 0) return b;
    return gcd(b, a % b);
}
