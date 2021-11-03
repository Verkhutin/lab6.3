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


int MySum(int a[], int n) {
	int s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			s += a[i];
	return s;
}

int TemplateSum(int mas[], const int n)
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

	cout << "Array: " << endl;
	Create(a, n);
	PrintArr(a, n);
	cout << endl;
	cout << endl;
	cout << "My sum = " << MySum(a, n) << endl;
	cout << endl;
	cout << "Template sum = " << TemplateSum(a, n) << endl;

	return 0;
}
