//����������ʽ
#include<iostream>
using namespace std;
//1���޲��޷�
void test01(){
	cout << "nothing" << endl;
}
//2���в��޷�
void test02(int a) {
	cout << a << endl;
}
//3���޲��з�
int test03() {
	return 100;
}
//4���в��з�
int test04(int a) {
	a += 12;
	return a;
}