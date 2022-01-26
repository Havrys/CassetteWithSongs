/*Description

Suppose we have a set of n songs and want to store them on a tape. To find a song, we need to fast-forward all the songs before it.
Let  A[1…n] be an array of songs’ durations. The time needed to access the k-th song is proportional to (A[1] + A[2] + ... + A[k-1]) .
We say that the order of the songs on the tape is good if it minimizes the sum of times to access each song. Find the total length of 
the first m songs on the tape with the good order of songs.

Input
 Quantity n of songs, a positive integer.
 Number m of a song to find the cost accessing.
 Four positive integers S, A, B, M. Using numbers S, A, B, M, the following pseudocode will generate the sequence of numbers.
X[0] = S
for i = 1 to n-1:
 X[i] = (A * X[i-1] + B) mod M*/

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
