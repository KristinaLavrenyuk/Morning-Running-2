
#include <iostream>
using namespace std;

int main()
{
	float x, y; 
	int i = 1;

	cin >> x >> y;
	float sum = x;

	while (sum < y)
	{
		x += x * 0.7;
		sum += x;
		i++;
	}
	cout << i;
	system("pause");
}