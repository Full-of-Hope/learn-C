#include<iostream>
using namespace std;
void swap01(int, int);//ֵ����
void swap02(int&, int&);//���ô���
void swap03(int*, int*);//��ַ����
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