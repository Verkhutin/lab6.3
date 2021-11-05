#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;


void Create(int a[], const int n) {
	for (int i = 0; i < n; i++) {
		a[i] = -50 + rand() * 101 / RAND_MAX;
	}
}

void PrintArr(int a[], const int n) {
	for (int i = 0; i < n; i++)
		cout << "| " << setw(4) << a[i] << " |";
}


int Sum(int a[], int n) {
	int s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			s += a[i];
	return s;
}


template <typename A>
void TemplateCreate(A a[], A n) {
	for (int i = 0; i < n; i++) {
		a[i] = -50 + rand() * 101 / RAND_MAX;
	}
}

template <typename B>
void TemplatePrintArr(B a[], B n) {
	for (int i = 0; i < n; i++)
		cout << "| " << setw(4) << a[i] << " |";
}

template <typename T>
T TemplateSum(T mas[], T n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (mas[i] % 2 == 0)
		s += mas[i];
	return s;
}


int main() {
	const int n = 25;
	int a[n];	

	srand((unsigned)time(NULL));
	
	cout << "Template Array: " << endl;
	Create(a, n);
	PrintArr(a, n);
	cout << endl;
	cout << endl;
	cout << "Sum = " << Sum(a, n) << endl;
	cout << endl;

	int* a1 = a; const int a2 = n;
	cout << "Template Array: " << endl;
	TemplateCreate(a1, a2);
	int* b1 = a; const int b2 = n;
	TemplatePrintArr(b1, b2);
	cout << endl;
	cout << endl;
	int* t1 = a; const int t2 = n;
	cout << "Template sum = " << TemplateSum(t1, t2) << endl;

	return 0;
}
