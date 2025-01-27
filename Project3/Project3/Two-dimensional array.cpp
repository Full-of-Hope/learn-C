#include<iostream>
using namespace std;
int main() {
	string name[3] = { "张三","李四","王五" };
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	for (int i = 0; i < 3; i++) {     //显示
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	//统计总和
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += arr[i][j];
		}
		cout << name[i] << " 的总成绩为 " << sum << endl;
	}
	//转置
	cout << "转置为" << endl;
	for (int i = 0; i < 3; i++) {        //转置只需要对上三角或下三角2操作，避免重复覆盖。
		for (int j = i+0; j < 3; j++) {
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	for (int i = 0; i < 3; i++) {     //显示
		for (int j =0; j < 3; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}