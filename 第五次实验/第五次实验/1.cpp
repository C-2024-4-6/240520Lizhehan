#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:          // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void Settime(int hour,int minute,int sec)
	{
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	}
	void Showtime()
	{
		cout << "hour is " << hour << "mintue is " << minute << "sec is " << sec;
	}
};



int main()
{
	Time t1;
	t1.Settime(18, 48, 23);
	t1.Showtime();
	return 0;
}
