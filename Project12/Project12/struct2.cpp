#include<iostream>
#include<string>
using namespace std;
struct hero {
	string name;
	int old = 0;
	string gender;
};

void print(hero harray[], int );
void sort(hero harray[], int );

int main() {
	hero harray[5] = {
		{"Áõ±¸",23,"ÄĞ"},
		{"ÕÔÔÆ",22,"ÄĞ"},
		{"ÕÅ·É",32,"ÄĞ"},
		{"¹ØÓğ",18,"ÄĞ"},
		{"õõ²õ",25,"Å®"}
	};
	int len = sizeof(harray) / sizeof(harray[0]);
	sort(harray, len);
	print(harray, len);
	return 0;
}
void sort(hero harray[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (harray[j].old > harray[j + 1].old) {
				hero temp = harray[j];
				harray[j] = harray[j + 1];
				harray[j + 1] = temp;
			}
		}
	}
}
void print(hero harray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << harray[i].name << "\t" << harray[i].old << "\t" << harray[i].gender << endl;
	}
}