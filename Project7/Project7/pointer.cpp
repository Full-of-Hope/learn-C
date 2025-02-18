#include<iostream>
using namespace std;
int main() {
	int arr[] = { 1,2,3,4,5 };
	int* ptr = arr;
	cout << &arr[0] << "\t" << arr[0] << endl;
	cout << ptr << "\t" <<*ptr<< endl;
	for (int i = 0; i < 5; i++) {
		cout << *ptr << "\t";
		ptr++;
	}
	return 0;
}
