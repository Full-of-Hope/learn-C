#include<iostream>
using namespace std;
int main() {
	//1、定义指针
	int a = 10;
	int* ptr = &a;
	cout << ptr << endl;//a的地址
	cout << &a << endl;//a的地址
	cout << *ptr << endl;//a的内容
	*ptr = 12;
	cout << a << endl;
	
	//2、指针所占空间
	//在32位操作系统中，占4个字节；在64位操作系统中，占8个字节
	cout << sizeof(ptr) << endl;
	cout << sizeof(double *) << endl;
	cout << sizeof(float *) << endl;
	
	//3、空指针——用于指针的初始化
	//空指针不能访问
	int* x = NULL;
	int* y = 0;
	
	//4、count修饰指针
	//常量指针
	int a = 12, b = 13;
	const int* ptr = &a;//指针的指向可以用修改，但指向的值不能修改
	//*ptr = 20;错误，值不能修改
	ptr = &b;
	//指针常量
	int* const ptr = &a;//指针的指向的值可以用修改，但指向不能修改
	//ptr = &b;错误
	*ptr = 111;
	//
	const int* const ptr = &a;
	return 0;
}