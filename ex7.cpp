#include <iostream>
using namespace std;
int main()
{
	int g = 0;
	int const count = 3;
	int Sum = 0;
	double avg = 0;

	for (int i = 0; i < count; i++)
	{
		cout << "Please enter your grade " << i + 1 << endl;

		cout << "Grade" << i + 1 << ":" << endl;
		cin >> g;
		if (g >= 0 && g <= 100)
		{
			Sum += g;
			cout << Sum << endl;
		}
		else
		{
			cout << "Grade must be in range [0,100] \n";
			cout << i << endl;
			// takes you bak to previous iteration. re enter the grade
			i -= 1;

		}
	}

	avg = Sum / count;
	cout << "avg " << avg << endl;

	if (avg >= 90)
	{
		cout << "Grade:	A \n";
	}
	else if (avg >= 70)
	{
		cout << "Grade:	B \n";
	}
	else if (avg >= 50)
	{
		cout << "Grade:	C \n";
	}
	else
	{
		cout << "Grade:	F \n";
	}


	system("pause");
	return 0;
}