#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int& ref = a; // ref is a reference to a
    ref = 10; // Modifying ref changes a
    cout << "a: " << a << endl; // Outputs: a: 10
    system("pause");
    return 0;
}