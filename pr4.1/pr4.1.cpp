#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N, i, k;
	double S;
	cout << "N = "; cin >> N;
	S = 1;
	k = 10;
	i = N;
	while (i <= k)
	{
		S *= (i + 1. / (i * i))/sqrt(1+exp(1./i));
		i++;
	}
	cout << S << endl;
		S = 1;
		i = N;
	do {
		S *= (i + 1. / (i * i)) / sqrt(1 + exp(1. / i));
		i++;
	} while (i <= k);
	cout << S << endl;
		S = 1;
	for (i = N; i <= k; i++)
	{
		S *= (i + 1. / (i * i)) / sqrt(1 + exp(1. / i));
	}
	cout << S << endl;
		S = 1;
	for (i = k; i >= N; i--)
	{
		S *= (i + 1. / (i * i)) / sqrt(1 + exp(1. / i));
	}
	cout << S << endl;
	return 0;
}