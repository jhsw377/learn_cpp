#include <iostream>
#include <string>
using namespace std;
int main() {
	int age;
	string name;
	cout << "请输入您的年龄: ";
	cin >> age;
	// 清除可能因用户多输入内容而设置的错误标志，并清空缓冲区
	cin.clear();
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "请输入您的全名: ";
	getline(cin, name); // 现在可以正确读取整行，而不会读到上一个输入的换行符
	cout << "你好, " << name << "! 你 " << age << " 岁了。" << endl;
	return 0;
}