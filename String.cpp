// C++ code to demonstrate the working of 
// lexicographical_compare() 

#include<iostream> 
#include<algorithm> 
#include <bits/stdc++.h>

// for lexicographical_compare() 
using namespace std; 

int main() 
{ 
	// initializing string arrays 
	string one = "ga"; 
	string two = "gfg"; 
  
    

    strcpy(char_array_1, one.c_str()); 
	strcpy(char_array_2, two.c_str()); 
	if( lexicographical_compare(char_array_1,char_array_1+n1,char_array_2,char_array_2+n2)) 
	{ 
		cout << "geeksforgeeks is lexicographically less than gfg"; 
		
	} 
	else
	{ 
		cout << "geeksforgeeks is not lexicographically less than gfg"; 
		
	} 
	
} 
