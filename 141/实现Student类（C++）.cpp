#include <iostream>
#include <cstring>
using namespace std;

class Student
{
public:
    char num[10];
    char name[12];
    int grade1, grade2, grade3;
    Student(char *number, char *n, int one, int two, int three)
    {
        strcpy(num, number);
        strcpy(name, n);
        grade1 = one;
        grade2 = two;
        grade3 = three;
    }
    void display()
    {
        cout << num << " " << name << " " << grade1 << " " << grade2 << " " << grade3 << endl;
    }
};

int main()
{
    Student *stu1, *stu2, *stu3;
    char name1[10], name2[10], name3[10];
    char num1[12], num2[12], num3[12];
    int grade1[3], grade2[3], grade3[3];
    cin >> name1 >> num1 >> grade1[0] >> grade1[1] >> grade1[2];
    cin >> name2 >> num2 >> grade2[0] >> grade2[1] >> grade2[2];
    cin >> name3 >> num3 >> grade3[0] >> grade3[1] >> grade3[2];
    stu1 = new Student(name1, num1, grade1[0], grade1[1], grade1[2]);
    stu2 = new Student(name2, num2, grade2[0], grade2[1], grade2[2]);
    stu3 = new Student(name3, num3, grade3[0], grade3[1], grade3[2]);

    stu1->display();
    stu2->display();
    stu3->display();

    cout << "The average grade of course1:" << (stu1->grade1+stu2->grade1+stu3->grade1+0.0)/3 << endl;
    cout << "The average grade of course2:" << (stu1->grade2+stu2->grade2+stu3->grade2+0.0)/3 << endl;
    cout << "The average grade of course3:" << (stu1->grade3+stu2->grade3+stu3->grade3+0.0)/3 << endl;
    system("pause");
    return 0;
}