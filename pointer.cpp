#include <iostream>
using namespace std;

int main()
{
    int var =8;
    int* ptr =&var;
    *ptr=10; //错误，void指针不能解引用
    system("pause");
    return 0;
}
