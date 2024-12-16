//#include <iostream>
//using namespace std;
//class Student
//{
//public:
//	int num;
//	double score;
//	void input(int num, double score)
//	{
//		this->num = num;
//		this->score = score;
//	}
//};
//Student S[5];
//int max(Student*)
//{
//	int max_num;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (S[i].score > S[j].score)
//				max_num = i;
//		}
//	}
//	return max_num;
//}
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		int a;
//		double b;
//		cin >> a >> b;
//		S[i].input(a, b);
//	}
//	cout << "成绩最高的人学号是" << max(&S[5]);
//}