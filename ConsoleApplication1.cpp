#include <iostream>
#include <cmath>// ���������� �������� ������������ �������
using namespace std;
//��������� �������
void Part1_NumberRotation(void);

double Part3_Equation(double x);

int Part2ChessTable(bool chess);
bool ChessPosition(unsigned int x, unsigned int y);


void Part1_NumberRotation(void)
{
	// Integer 15. ���� ��������� �����.
	// �������������� �������� ������ �� ������� �� ������
	// ����������� ������ ���� �� ������� ����� �����


	//���������� ������
	int number, firstsymb, secondsymb, thirdsymb;
	//�������� ����� 
	cout << "number:" << endl;
	cin >> number;
	// ϳ��������, �������� ����� �� �����������
	if (number > 99 && number < 1000) {
		firstsymb = number / 100;
		secondsymb = number % 100 / 10;
		thirdsymb = number % 10;
		// ��������� ����������
		cout << "answer:" << secondsymb << firstsymb << thirdsymb;

	}
	else {
		cout << "incorrect number! restart programm";

	}
}



double Part3_Equation(double x)
{
	//math36, ���������� y �� �������� �� ����� ������������ �������� x
	// ���������� ������
	double cuberoot;
	double module;
	double module2;
	double sinus;
	double tangens;
	double numerator;
	double radical;
	double denominator1;
	double denominator2;
	double fullnumerator;
	double fulldenominator;
	double logarithm;
	double result;

	//���������� ���������
	module = abs(pow(x, 2) - 2);
	sinus = sin(pow(x, 3));
	tangens = tan(x);
	module2 = abs(tangens);
	numerator = pow(2.5, cos(x));
	radical = module * sinus * module2;
	cuberoot = pow(radical, 1 / 3);
	fullnumerator = cuberoot * numerator;
	//���������� ����������
	denominator1 = 0.625 * x;
	denominator2 = pow(x, 3) + 7.5;
	logarithm = log2(denominator2);
	fulldenominator = denominator1 + 2 * logarithm;
	//���������� Y
	result = fullnumerator / fulldenominator;


	return(result);
}




void Part2ChessTable(void)
{
	unsigned int X1, Y1, X2, Y2;
	bool color1, color2;

	cout << "Enter x1:" << endl;
	cin >> X1;

	cout << "Enter y1:" << endl;
	cin >> Y1;

	cout << "Enter x2:" << endl;
	cin >> X2;

	cout << "Enter Y2:" << endl;
	cin >> Y2;

	
	color1 = ChessPosition(X1, Y1);

	color2 = ChessPosition(X2, Y2);

	if (color1 == color2)
	{
		cout << "Colors are the same."; cout << endl;
	}
	else
	{
		cout << "Colors are different."; cout << endl;
	}
}

bool ChessPosition(unsigned int x, unsigned int y)
{
	bool result;
		if ((x % 2) == 1)//x ��������
		{
			if ((y % 2) == 1)      //y ��������
			{
				result = false;
			}
			else                   //y ������
			{
				result = true;
			}
		}
		else             //x ������
		{
			if ((y % 2) == 1)      //y ��������
			{
				result = true;
			}
			else                   //y ������
			{
				result = false;
			}
		}
	return (result);
}


int main()
{
	/*Part1*/
	cout << "Integer15." << endl;
	Part1_NumberRotation(); cout << endl;

	/*Part2*/
	cout << "Boolean35"; cout << endl;
	Part2ChessTable();

	/*Part3*/
	cout << "Equation36."; cout << endl;
	double X;
	double Y;
	cout << "Enter X:" << endl;
	cin >> X;
	Y = Part3_Equation(X);
	cout << "Y = " << Y << endl;
	 
}