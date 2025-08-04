#include <iostream>
using namespace std;

int main()
{
	int N; cin >>N;
	bool even=false;

		for (int i = 1; i <= N; i++)
		{
			if (i % 2 == 0)
			{
				cout << i << endl;
				even = true;
			}
	   
		}
		if (!even)
		{
		cout << "-1"<<endl;
		}
		return 0;
}