#include<iostream>
using namespace std;
void swap01(int, int);//值传递
void swap02(int&, int&);//引用传递
void swap03(int*, int*);//地址传递
void display(int, int);
int main() {
	int a = 1, b = 2;
	swap01(a, b);
	display(a, b);
	swap02(a, b);
	display(a, b);
	swap03(&a, &b);
	display(a, b);


}
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
void swap02(int&a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
void swap03(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void display(int a, int b) {
	cout << a << "\t" << b << endl;
}
