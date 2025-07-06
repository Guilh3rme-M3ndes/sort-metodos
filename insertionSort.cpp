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

void insertion_sort(int *arg, int t)
{
	for(int ii = 1; ii < t; ii++){
	int jj = ii-1;	
	int aux = arg[ii];
	while(jj >= 0 && arg[jj] > aux) {
		arg[jj+1] = arg[jj];
		jj--;
	}
	arg[jj+1] = aux;
	}
}
int main(int argc, char** argv)
{
	int a[8] = {49, 38, 58, 87, 34, 93, 26, 13};
	cout << "Array original: "  << endl;
	print(a, 8);
	insertion_sort(a, 8);
	cout << "Array organizado: "  << endl;
	print(a, 8);
	
	return 0;
}
