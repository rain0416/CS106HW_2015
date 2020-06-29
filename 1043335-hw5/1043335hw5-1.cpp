// Print digits of an integer in the reverse order
#include <iostream>
using namespace std;

void reverse(int number);

int main()
{
	int number;
	cout << "Enter a positive integer: ";
	cin >> number;

	cout << "\nThe reverse of " << number << ": ";

	reverse(number);

	cout << endl << endl;

	system("pause");
} // end main


void reverse(int number)
{
	if (number < 10)
	{
		cout << number;
	}
	else
	{
		cout << number % 10;
		number = number / 10;
		reverse(number);
	}
}