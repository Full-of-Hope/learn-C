#include<iostream>
#include<string>
using namespace std;

//创建数据类型
struct student
{
	string name;
	int old=0;
	int score=0;
}z;//3
struct teacher {//结构体嵌套
	int id=0;
	string name;
	int age=0;
	student stu;
};

void print1(student);
void print2(student*);
void print3(student*);
int main() {
	//创建具体学生,struct可以省略
	//1
	student x ;
	x.name = "mike";
	x.old = 12;
	x.score = 100;
	cout << "name is " << x.name << " ,your old is " << x.old << ",your score is " << x.score << endl;
	//2
	struct student y = { "junn",18,90 };
	cout << "name is " << y.name << " ,your old is " << y.old << ",your score is " << y.score << endl;
	//3在定义结构体时，随便创建一个结构体变量
	z.name = "hello";
	cout << "name is " << z.name << " ,your old is " << z.old << ",your score is " << z.score << endl;

	system("pause");
	//结构体数组
	struct student classroom[3] = {
		{ "junn",18,90 },
		{ "mike",12,100 },
		{"hello",21,95}
	};
	classroom[2].old = 36;//赋值
	for (int i = 0; i < 3; i++) {
		cout << "name is " << classroom[i].name 
			<< " ,your old is " << classroom[i].old 
			<< ",your score is " << classroom[i].score << endl;
	}
	system("pause");
	//结构体指针,利用ptr->进行访问
	student* ptr = &y;
	cout << "name is " << ptr->name 
		<< " ,your old is " << ptr->old
		<< ",your score is " << ptr->score << endl;
	system("pause");
	//嵌套
	teacher t;
	t.id = 123;
	t.age = 50;
	t.name = "junny";
	t.stu = x;
	cout << "teacher's id is " << t.id << ",teacher's name is " << t.name << " ,teacher's age is " << t.age<<"\n"
		<< "student's name is " << t.stu.name << ",student's old is " << t.stu.old << ",student's score is " << t.stu.score << endl;
	system("pause");
	//传递
	
	print1(x);
	cout << "name is " << x.name << " ,your old is " << x.old << ",your score is " << x.score << endl;
	print2(&x);
	cout << "name is " << x.name << " ,your old is " << x.old << ",your score is " << x.score << endl;
	system("pause");

	//const使用场景
	student a = { "hi",12,66 };
	print3(&a);
	return 0;
}
//1、值传递
void print1(student x) {
	 x.old = 66;
	 cout << "1name is " << x.name << " ,1your old is " << x.old << ",1your score is " << x.score << endl;
}
void print2(student *x) {//只占8个字节，节省内存
	x->old = 66;
	cout << "2name is " << x->name << " ,2your old is " << x->old << ",2your score is " << x->score << endl;
}
void print3( const student *x) {
	//x->old = 66;
	cout << "2name is " << x->name << " ,2your old is " << x->old << ",2your score is " << x->score << endl;
}