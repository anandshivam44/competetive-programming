/* A recursive C++ program to find Grundy Number for 
a game which is like a one-pile version of Nim. 
Game Description : The game starts with a pile of n stones, 
and the player to move may take any positive number of stones. 
The last player to move wins. Which player wins the game? */
#include<bits/stdc++.h> 
using namespace std; 

// A Function to calculate Mex of all the values in 
// that set. 
int calculateMex(unordered_set<int> Set) 
{ 
	int Mex = 0; 

	while (Set.find(Mex) != Set.end()) 
		Mex++; 

	return (Mex); 
} 

// A function to Compute Grundy Number of 'n' 
// Only this function varies according to the game 
int calculateGrundy(int n) 
{ 
	if (n == 0) 
		return (0); 

	unordered_set<int> Set; // A Hash Table 

	for (int i=0; i<=n-1; i++) 
			Set.insert(calculateGrundy(i)); 

	return (calculateMex(Set)); 
} 

// Driver program to test above functions 
int main() 
{ 
	int n = 20; 
	printf("%d", calculateGrundy(n)); 
	return (0); 
} 
