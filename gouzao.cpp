#include <iostream>
using namespace std;

class Person {
private:
    string name;
public:
    // 构造函数
    Person(string n) {
        name = n;
        cout << "构造函数被调用，创建对象：" << name << endl;
    }

    // 析构函数
    ~Person() {
        cout << "析构函数被调用，销毁对象：" << name << endl;
    }
};

int main() {
    Person p1("Alice");   // 自动调用构造函数
    Person p2("Bob");     // 自动调用构造函数

    cout << "main函数执行中..." << endl;

    return 0;   // main结束时，p1和p2会自动销毁，调用析构函数
}
