#include <iostream>	

using namespace std;

int main()
{
	int m; // kol-vo tonneley
	int a; // perekrestki
	int size = 0; // razmer massiva (kol-vo perekrestkov)
	cin >> size >> m;
	int* arr = new int [size] {}; //dinam massiv s razmernostyu, ukazannoy viwe i zapolnenniy 0
	m = m * 2;
	for (int i = 0; i < m; i++) {
		cin >> a;
		if (a < 1 || a>size || a==a) {
			exit(0);
		}
		else if (a == 1) {
			arr[0]++;
		}
		else if (a == 2) {
			arr[1]++;
		}
		else if (a == 3) {
			arr[2]++;
		}
		else if (a == 4) {
			arr[3]++;
		}
		else if (a == 5) {
			arr[4]++;
		}
		else if (a == 6) {
			arr[5]++;
		}
		else
			arr[6]++;
	}
	for (int j = 0; j < size; j++)
		cout << " " << arr[j];
	delete []arr;
	return 0;
}