#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int score;

public:
    // 默认构造函数
    Student() {
        cout << "默认构造函数调用" << endl;
        name = "未命名";
        score = 0;
    }

    // 带参构造函数
    Student(string n, int s) {
        cout << "带参构造函数调用" << endl;
        name = n;
        score = s;
    }

    void show() {
        cout << "姓名: " << name << ", 成绩: " << score << endl;
    }
};

int main() {
    Student s1;               // 调用默认构造
    Student s2("Alice", 95);  // 调用带参构造
    s1.show();
    s2.show();
}
