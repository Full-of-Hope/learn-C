//��ֵ����,�����ô���
#include<iostream>
using namespace std;
void swap(int, int);//ֵ�����βθı䣬ʵ�β���
//void swap(int&, int&);//���á���ʵ�θı�
int main() {
	int a = 12, b = 13;
	cout << "a=" << a << "\tb=" << b << endl;
	cout << endl;
	swap(a, b);
	cout << endl;
	cout << "a=" << a << "\tb=" << b << endl;
}
void swap(int num1, int num2){   //ֵ
//void swap(int &num1, int &num2) {//����
	cout << "����ǰ��" << endl;
	cout << "num1=" << num1 << "\tnum2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1=" << num1 << "\tnum2=" << num2 << endl;
}
