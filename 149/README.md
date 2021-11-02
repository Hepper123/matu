引入CString.h头文件，它的内容如下：
#include <iostream>
using namespace std;
class String{
private:
	char *mystr;    //字符串
	int len;    //字符串长度
public:
	String(){
		len =0;
		mystr =NULL;
	}
	String(const char* p){
		len = strlen(p);
		mystr = new char[len+1];
		strcpy(mystr,p);
	}
	String(String &s){
		len = s.len;
		if (len !=0)
		{
			mystr = new char[len+1];
			strcpy(mystr,s.mystr);
		}
	}
	~String(){
         if (mystr != NULL)
         {
			 delete []mystr;
			 mystr =NULL;
			 len = 0;
         }
	}

	char *GetStr(){return mystr;}
	void ShowStr(){cout<<mystr;}

        bool IsSubstring(const char *str);
	bool IsSubstring(const String &str);
	int str2num();
	void toUppercase();
};

实现String类的成员方法：
bool IsSubstring(const char *str) 判定字符串str是否为当前String对象的子串，是则返回true,否则返回false。
bool IsSubstring(const String &str) 判断String对象str是否为当前String对象的子串，是则返回true,否则返回false。
int str2num() 将当前String对象转化为数字，转换时忽略出数字以外的字符，
不考虑溢出的情况，如当前字符串为1t2e3s4y5,执行str2num 返回12345。

void toUppercase()将String的字符串的字母全部转化为大写字母。