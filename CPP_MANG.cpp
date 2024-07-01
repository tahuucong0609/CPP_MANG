#include <iostream>
using namespace std;

void swapNum(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

int main()
{
	int number[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> number[i];
	}

	for (int i : number)
	{
		cout << i << " ";
	}

	int viTriMax = 0;
	int soMax = 0;
	for (int i = 0; i < 5; i++)
	{
		if (soMax < number[i]) {

			soMax = number[i];
			viTriMax = i;

		}
	}
	cout << "\nSo max: " << soMax;
	cout << "\nSau khi Swap\n";

	swapNum(number[0], number[viTriMax]);

	for (int i : number)
	{
		cout << i << " ";
	}

}