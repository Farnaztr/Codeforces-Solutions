#include <iostream>
using namespace std;

bool wonderful(int x)
{
	return x % 2 == 1;
}
bool Binary(int x)
{
	unsigned int reverse = 0, original = x;
	while (x > 0)
	{
		reverse = (reverse << 1) | (x & 1);
		x >>= 1;
	}
	return original == reverse;
}
int main()
{

	int N; cin >> N;
	cout << (wonderful(N) && Binary(N) ? "YES" : "NO");
}