//结构体案例
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct student {
	string name;
	int score=0;
};
struct teacher {
	string name;
	student sarray[5];
};

void allocation(teacher tarray[], int );
void print(teacher tarray[], int);

int main() {
	srand(time(0));
	//创建
	teacher tarray[3];
	//赋值
	int len = sizeof(tarray) / sizeof(tarray[0]);
	allocation(tarray, len);
	//打印
	print(tarray, len);
}
void allocation(teacher tarray[], int len) {
	for (int i = 0; i < len; i++) {
		string temp = "ABCDE";
		tarray[i].name = "teacher_";
		tarray[i].name += temp[i];
		for (int j = 0; j < 5; j++) {
			tarray->sarray[j].name = "student_";
			tarray->sarray[j].name += temp[j];
			tarray->sarray[j].score = rand() % 101;
		}
	}
}
void print(teacher tarray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "老师姓名" << tarray[i].name << endl;
		for (int j = 0; j < 5; j++) {
			cout << "学生姓名" << tarray->sarray[j].name << "\t学生分数" << tarray->sarray[j].score << endl;
		}
		cout << endl;
	}
}