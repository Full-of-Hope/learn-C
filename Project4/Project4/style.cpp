//函数常见样式
#include<iostream>
using namespace std;
//1、无参无返
void test01(){
	cout << "nothing" << endl;
}
//2、有参无返
void test02(int a) {
	cout << a << endl;
}
//3、无参有返
int test03() {
	return 100;
}
//4、有参有返
int test04(int a) {
	a += 12;
	return a;
}