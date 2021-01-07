#include<iostream>
#include<stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	int now = time(NULL);
	cout<<"now is "<<now<<endl;

	//srand设置一个随机种子，后面使用rand可以根据这个种子来随机数值
	srand(time(NULL));
	int a = rand();
	cout<<"a is "<<a<<endl;
}
