#include <iostream> 
#include <cmath>


using namespace std;

int main()
{
	int N, k;
	double S;

	cout << "N = "; cin >> N;

	S = 0;
	k = N;
	while (k <= 19)
	{
		S += sqrt(sin(k * 1.) * sin(k * 1.) + cos((N * 1.) / (k * 1.)) * cos((N * 1.) / (k * 1.)));
		k++;
	}
	cout << "1) S = " << S << endl;

	S = 0;
	k = N;
	do {
		S += sqrt(sin(k * 1.) * sin(k * 1.) + cos((N * 1.) / (k * 1.)) * cos((N * 1.) / (k * 1.)));
		k++;
	} while (k <= 19);
	cout << "2) S = " << S << endl;

	for (k = 19; k <= N; k++)
	{
		S += sqrt(sin(k * 1.) * sin(k * 1.) + cos((N * 1.) / (k * 1.)) * cos((N * 1.) / (k * 1.)));
	}
	cout << "3) S = " << S << endl;

	for (k = N; k >= 19; k--)
	{
		S += sqrt(sin(k * 1.) * sin(k * 1.) + cos((N * 1.) / (k * 1.)) * cos((N * 1.) / (k * 1.)));
	}
	cout << "4) S = " << S << endl;

	cin.get();
	return 0;
}

