#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int grade1;
	int grade2;
	int grade3;
	int grade4;
	int grade5;
	float avg;
	float sumGrade;
	cout << "Enter five grades\n";
	cout << "Enter grade one\n";
	cin >> grade1;
	cout << "Enter grade two \n";
	cin >> grade2;
	cout << "Enter grade 3\n";
	cin >> grade3;
	cout << "Enter grade 4\n";
	cin >> grade4;
	cout << "Enter grade 5\n";
	cin >> grade5;
	sumGrade = grade1 + grade2 + grade3 + grade4 + grade5;
	avg = sumGrade / 5;
	cout << fixed << setprecision(1);
	cout << "The grade average is " << avg << endl;
	



	system("PAUSE");
	return 0;
}