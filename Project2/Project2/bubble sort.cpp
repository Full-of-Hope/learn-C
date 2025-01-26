#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&);
int main() {
	vector<int>arr = { 5,2,3,4,61,43,66,45,23,89 };
	sort(arr);
	for (int i: arr) {
		cout << i << "\t";
	}
	return 0;
}
//
void sort(vector<int>&x) {
	int length = x.size();
	for (int i = 0; i < length - 1; i++) {       //进行length-1次，每次得到在当前比较中最大的
		for (int j = 0; j < length-1-i ; j++) {  //按顺序进行比较，较大的值往后排，所以每次循环结束都会确定一个最大值
			if (x[j] > x[j+1]) {
				int temp = x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
			}
		}
	}
}