#include<iostream>
#include<vector>
using namespace std;
void inversion(vector<int>&);
int main() {
	vector<int>arr = { 1,2,3,4,8,9,0,5,6 };
	int len= arr.size() ;
	for (int i = 0; i < len; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
	inversion(arr);
	for (int i = 0; i < len; i++) {
		cout <<arr[ i] << "\t";
	}
	return 0;
}
//不可以使用静态数组，int[]，在函数参数中，数组名 x 会退化为指向其第一个元素的指针。
//因此，sizeof(x) 实际上返回的是指针的大小，而不是数组的大小。
// 在大多数现代系统上，指针的大小是固定的（例如 4 字节或 8 字节）
void inversion(vector<int> &x) {
	int length =x.size();
	int middle = length / 2;
	for (int i = 0; i < middle; i++) {
		int temp = x[i];
		x[i] = x[length - 1];
		x[length - 1] = temp;
		length--;
	}
}