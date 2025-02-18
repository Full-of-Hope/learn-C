#include<iostream>
using namespace std;
void sort(int*, int);//指针指向首地址
void display(int*, int);//指针指向首地址
int main() {
	int arr[] = { 1,24,45,53,23,33,12,62 };
	int length = sizeof(arr) / sizeof(arr[0]);
	sort(&arr[0], length);
	display(&arr[0], length);
	return 0;
}
void sort(int *x, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (x[j] > x[j + 1]) {
				int temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
}
void display(int* y, int len) {
	for (int i = 0; i< len; i++) {
		cout << y[i] << "\t";
	}
}