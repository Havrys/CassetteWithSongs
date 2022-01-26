#include <iostream>
#include <vector>
#include <algorithm>
void inputArray(const int& n, int& S, int& A, int& B, int& M, std::vector<int>& X)
{
	std::cin >> S;
	std::cin >> A;
	std::cin >> B;
	std::cin >> M;
	X[0] = S;
	for (int i{ 1 }; i < X.size(); i++)
	{
		X[i] = (A * X[i - 1] + B) % M;
	}
}

int main()
{
	int n;
	std::cin >> n;
	int m;
	std::cin >> m;
	int S, A, B, M;
	std::vector<int> X(n);
	inputArray(n, S, A, B, M, X);
	sort(X.begin(), X.end());
	int summ{};
	for (int i{}; i < m; i++)
	{
		summ += X[i];
	}
	std::cout << summ;
}