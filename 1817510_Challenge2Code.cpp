//NOR NABILAH SHUHADA BINTI MOHD KAMAL  1817510
// C++ program for implementation  of Finite Automata

#include <bits/stdc++.h>
#include<iostream> 
using namespace std;

// Function to check whether the string
// S satisfy the given DFA or not
void isAcceptedDFA(string s, int N)
{
	// Stores the count of characters
	int count = 0;

	// Iterate over the range [0, N]
	for (int i = 0; i < N; i++) {

		// Count and check every
		// element for 't' or 'T'
		if (s[i] == 't' || s[i] == 'T')
			count++;
	}

	// If string matches with DFA
	if (count == N && count != 0) {
		cout << "Accepted";
	}

	// If not matches
	else {
		cout << "Rejected";
	}
}

// Driver Code
int main()
{
	string S;
	cout << "Input string of condition (t/f): ";
	cin >> S;

	// Function Call
	isAcceptedDFA(S, S.size());

	return 0;
}
