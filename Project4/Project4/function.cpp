//按值传递,按引用传递
#include<iostream>
using namespace std;
void swap(int, int);//值——形参改变，实参不变
//void swap(int&, int&);//引用——实参改变
int main() {
	int a = 12, b = 13;
	cout << "a=" << a << "\tb=" << b << endl;
	cout << endl;
	swap(a, b);
	cout << endl;
	cout << "a=" << a << "\tb=" << b << endl;
}
void swap(int num1, int num2){   //值
//void swap(int &num1, int &num2) {//引用
	cout << "交换前：" << endl;
	cout << "num1=" << num1 << "\tnum2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1=" << num1 << "\tnum2=" << num2 << endl;
}
