#include <iostream>
using namespace std;

void print(int *arg, int t)
{
	for(int i = 0; i < t; ++i)
	{
		cout << "Elemento: " << i + 1 << " = "
			 << arg[i] << endl;
	}
	cout << "---------" << endl;
}

int main(int argc, char** argv)
{
	int a[7] = {10, 7, 2, 2, 1, 4, 2};
	print(a, 7);

	int c[10];
	for(int i = 0; i < 10; ++i)
	{
		c[i] = 0;
	}

	for(int i = 0; i < 7; ++i)
	{
		if (c[ a[i] - 1 ] == 0)
		{
			c[ a[i] - 1 ]++;
			for (int j = i; j < 6; j++)
			{
				if (a[i] == a[j + 1])
				{
					c[a[i] - 1] += 1;
				}
			}
		}
	}
	print(c, 10);

	int j = 0;
	int b[7];
	for(int i = 0; i < 10; ++i)
	{
		int vezes = c[i];
		while(vezes > 0)
		{
			b[j++] = i + 1;
			vezes--;
		}

	}
	print(b, 7);

	return 0;
}
