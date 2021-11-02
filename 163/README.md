重载运算符 << ,使之能够使用cout将Date类对象的只以日期格式输出，Date类的定义如下，
在你的代码中需包含Date类的定义和实现。
class Date{
public:
	Date(int y=1996,int m=1,int d=1){
		day = d;
		month = m;
		year = y;
		if (m>12 || m<1)
		{
			month=1;
		}
		if (d>days(y,m))
		{
			cout<<"Invalid day!"<<endl;
			day=1;
		}
	};
	int days(int y,int m);
	void display(){
		cout<<year<<"-"<<month<<"-"<<day<<endl;
	}
private:
	int year;
	int month;
	int day;
};

你需要实现运算符 << 的重载， 输出日期的格式参见display方法。
实现Date对象的days方法，该方法返回指定年月有多少天，如days(2001,1),返回31.

最终Date类的使用方式如下，在你的代码中除了完成Date函数还需包含以下main函数：

int main(){
     int y,m,d;
	 cin>>y>>m>>d;
	 Date dt(y,m,d);
	 cout<<dt;
	 return 0;
}

例如,输入：
2013 2 1回车
输出：
2013-2-1回车