#include<iostream>
using namespace std;
int main() {
	string name[3] = { "����","����","����" };
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	for (int i = 0; i < 3; i++) {     //��ʾ
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	//ͳ���ܺ�
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += arr[i][j];
		}
		cout << name[i] << " ���ܳɼ�Ϊ " << sum << endl;
	}
	return 0;
}