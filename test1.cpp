#include <iostream>
using namespace std;


bool isPrime(int n)
{
	if (n == 2 || n == 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	return true;
}


int primeInRange(int X)
{
	int ans = 0;

	if (X != 1) {
		ans += 2;
	}


	for (int i = 3; i <= X; i += 2) {

		if (isPrime(i))
			ans += i;
	}
	return ans;
}

int main()
{
	int X;
	cin >> X;

	cout << primeInRange(X);
	return 0;
}
