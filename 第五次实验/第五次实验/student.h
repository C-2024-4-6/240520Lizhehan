#pragma once
#include <string>
using namespace std;
class Student           
{

private:
	int num;
	string name;
	string sex;
public:
	void display();
	Student() = default;
	Student(int num, const string& name,const string& sex)
	{
		this->num = num;
		this->name = name;
		this->sex = sex;
	}
	void set_value(int num, const string& name, const string& sex)
	{
		this->num = num;
		this->name = name;
		this->sex = sex;
	}
};


