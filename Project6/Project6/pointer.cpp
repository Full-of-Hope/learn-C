#include<iostream>
using namespace std;
int main() {
	//1������ָ��
	int a = 10;
	int* ptr = &a;
	cout << ptr << endl;//a�ĵ�ַ
	cout << &a << endl;//a�ĵ�ַ
	cout << *ptr << endl;//a������
	*ptr = 12;
	cout << a << endl;
	
	//2��ָ����ռ�ռ�
	//��32λ����ϵͳ�У�ռ4���ֽڣ���64λ����ϵͳ�У�ռ8���ֽ�
	cout << sizeof(ptr) << endl;
	cout << sizeof(double *) << endl;
	cout << sizeof(float *) << endl;
	
	//3����ָ�롪������ָ��ĳ�ʼ��
	//��ָ�벻�ܷ���
	int* x = NULL;
	int* y = 0;
	
	//4��count����ָ��
	//����ָ��
	int a = 12, b = 13;
	const int* ptr = &a;//ָ���ָ��������޸ģ���ָ���ֵ�����޸�
	//*ptr = 20;����ֵ�����޸�
	ptr = &b;
	//ָ�볣��
	int* const ptr = &a;//ָ���ָ���ֵ�������޸ģ���ָ�����޸�
	//ptr = &b;����
	*ptr = 111;
	//
	const int* const ptr = &a;
	return 0;
}