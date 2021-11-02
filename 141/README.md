设计一个学生类Student，包含学生学号（最长10位）、姓名（不用支持中文最长12位）、三门课程成绩等基本信息，
计算每门课程学生的平均成绩。

需实现Student的display成员函数，依次输出学号 姓名 和三门课的成绩，每个输出以空格隔开
成员函数 average1 ,average2 ,average3 ,分别返回三门课的平均成绩。

Student类的使用方法如下所示，在你的代码中除了实现Student类，还需引入以下代码：

int main(){
	Student *stu1,*stu2,*stu3;
	char name1[10],name2[10],name3[10];
	char num1[12],num2[12],num3[12];
	int grade1[3],grade2[3],grade3[3];
	cin>>name1>>num1>>grade1[0]>>grade1[1]>>grade1[2];
	cin>>name2>>num2>>grade2[0]>>grade2[1]>>grade2[2];
	cin>>name3>>num3>>grade3[0]>>grade3[1]>>grade3[2];
	stu1 = new Student(name1,num1,grade1[0],grade1[1],grade1[2]);
	stu2 = new Student(name2,num2,grade2[0],grade2[1],grade2[2]);
	stu3 = new Student(name3,num3,grade3[0],grade3[1],grade3[2]);

	stu1->display();
	stu2->display();
	stu3->display();

    cout<<"The average grade of course1:"<<stu2->average1()<<endl;
	 cout<<"The average grade of course2:"<<stu2->average2()<<endl;
	  cout<<"The average grade of course3:"<<stu2->average3()<<endl;
	  return 0;
}
上述代码执行时
输入：
200906294 LiWeiwei 88 75 91 200902164 ChenHanfu 86 78 93 200908079 ZhanGaolin 94 69 97
输出：
200906294 LiWeiwei 88 75 91回车
200902164 ChenHanfu 86 78 93回车
200908079 ZhanGaolin 94 69 97回车
The average grade of course1:89.3333回车
The average grade of course2:74回车
The average grade of course3:93.6667回车
