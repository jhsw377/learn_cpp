#include <iostream>
using namespace std;
int main()
{
	int a[3]={1,2,3};
	int *pa=a;
	auto &b=a;
//	int* &pb=a;   
	int* &pb=pa; 
	for(int i=0;i<3;i++)
	
	{
		cout<<*(b+i)<<endl;
		cout<<*(pb++)<<endl;
	}
	system("pause");
	return 0;
}


