#include <iostream>
#include <conio.h>

using namespace std;

//5 Contoh Jenis Perulangan For

int main()
{
	cout << "Loop 1" << endl;
	for (int i = 0; i <= 10; i++)
	{
		cout << i << endl;
	}

	cout << "\nLoop 2" << endl;
	for (int i = 0; i <= 10; i += 2)
	{
		cout << i << endl;
	}

	cout << "\nLoop 3" << endl;
	for (int i = 0; i >= -10; i--)
	{
		cout << i << endl;
	}
	
	cout << "\nLoop 4" << endl;
	int total = 0;
	for (int i = 0; i <= 10; i++, total += i)
	{
		cout << i << " || " << total << endl;
	}

	cout << "\nLoop 5" << endl;
	total = 0;
	for (int i = 0; i <= 10; i++)
	{
		total += i;
		cout << i << " || " << total << endl;
	}
	_getch();
	return 0;
}