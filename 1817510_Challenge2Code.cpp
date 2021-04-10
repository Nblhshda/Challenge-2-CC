//NOR NABILAH SHUHADA BINTI MOHD KAMAL  1817510
// C++ program for implementation  of Finite Automata

#include <bits/stdc++.h>
#include<iostream> 
using namespace std;

// Function to check whether the string
// S satisfy the given DFA or not
void isAcceptedDFA(string s, int N)
{
	// Stores the count of chracters
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
	char c;
	string S;
	
	for(int i=1; i<4; i++){
	
	cout << "Input condition "<<i<<" (t/f): ";
	cin >> c;
	S += c;
	}

	// Function Call
	isAcceptedDFA(S, S.size());

	return 0;
}
