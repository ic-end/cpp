#include <iostream>

using namespace std;

void swap_v(int a, int b);
void swap_r(int &a, int &b);
void swap_p(int *a, int *b);

int square_v(int a);
int square_r(int &a);

int main()
{
	int A = 100;
	int B = 200;

	cout << "Before : A="  << A << " B="  << B << endl;
	cout << "Using value to swap contents:" << endl;
	swap_v(A, B);
	cout << "After  : A="  << A << " B="  << B << endl;
	cout << "==================================" << endl;

	cout << "Before : A="  << A << " B="  << B << endl;
	cout << "Using point to swap contents:" << endl;
	swap_p(&A, &B);
	cout << "After  : A="  << A << " B="  << B << endl;
	cout << "==================================" << endl;

	cout << "Before : A="  << A << " B="  << B << endl;
	cout << "Using reference to swap contents:" << endl;
	swap_r(A, B);
	cout << "After  : A="  << A << " B="  << B << endl;

	cout << "==================================" << endl;

	int &C = A;
	int &D = C;
	int &E = D;

	cout << A << " " << C << " " << D << " " << E << endl;
	cout << "==================================" << endl;

	C++;
	cout << A << " " << C << " " << D << " " << E << endl;
	cout << "==================================" << endl;

	D++;
	cout << A << " " << C << " " << D << " " << E << endl;
	cout << "==================================" << endl;

	E++;
	cout << A << " " << C << " " << D << " " << E << endl;
	cout << "==================================" << endl;

	cout << "A = " << A << endl;
	cout << "square_v of A = " << square_v(A) << endl;
	cout << "A = " << A << endl;
	cout << "square_r of A = "  << square_r(A) << endl;
	cout << "A = " << A << endl;

	system("pause");
}

void swap_v(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}


void swap_p(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap_r(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int square_v(int a)
{
	a = a * a;
	return a; 
}

int square_r(int &a)
{
	a = a * a;
	return a; 
}
