#include <iostream>
using namespace std;

enum star
{
    kobe,
    curry,
    durant,
    klay
};

int a = 20;

void func(void);

static int count123 = 10;

int main()
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    enum star somebody = kobe;
    if (somebody == curry)
    {
        cout << "this is curry shot";
    } else {
        cout << "this is " << somebody << " shot" <<endl;
    }

    int a = 21;
    cout << a <<endl;

    cout << "Hello\tWorld\n\n";

    short int i;
    short unsigned int j;
    j = 50000;
    i = j;
    cout << i << " " << j << endl;

    while(count123--) {
        func();
    }
    return 0;
}

void func( void )
{
    static int i = 5;
    i++;
    std::cout << "变量 i 为" << i;
    std::cout << "， 变量count为 " << count123 << std::endl;
}