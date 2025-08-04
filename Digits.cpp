#include <iostream>
#include <string>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int N;
		cin >>N ;
		if (N == 0)
			cout << 0;
		while (N > 0)
		{
			cout << N % 10 << " ";
			N/= 10;
		}
		cout << "\n";
	}
	return 0;
}