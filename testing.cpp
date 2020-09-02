#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int m;		// number of rows
	int n;		// number of columns
	int r;		// number of rotations total
	int q;		// number of rotations for layer
	int startm, startn;		// starting position

	cin >> m >> n >> r;

	vector< vector<int> > input(m, vector<int>(n));

	// Fill the input matrix
	for(int i=0; i<m; ++i) {
		for(int j=0; j<n; ++j) {
			cin >> input[i][j];
		}
	}

	// Calculate the answer
	int t = ((m < n)?m:n)/2;
	for(int x=0; x<t; ++x) {
		queue<int> numbers;

		// add top layer
		for(int i=x; i<n-x; ++i) {
			numbers.push(input[x][i]);
		}
		// add right layer
		if(m-x-x > 2) {
			for(int i=x+1; i<m-x-1; ++i) {
				numbers.push(input[i][n-x-1]);
			}
		}
		// add bot layer
		for(int i=n-x-1; i>=x; --i) {
			numbers.push(input[m-x-1][i]);
		}
		// add left layer
		if(m-x-x > 2) {
			for(int i=m-x-1-1; i>x; --i) {
				numbers.push(input[i][x]);
			}
		}

		// find the start position
		int mm = m - x - x;
		int nn = n - x - x;
		q = (mm*nn)-((mm-2)*(nn-2));
		q = r % q;
		if(q == 0) {
			startm = x;
			startn = x;
		} else if(q < mm) {
			startm = q + x;
			startn = x;
		} else if(q < mm+nn-1) {
			startm = mm - 1 + x;
			startn = q - nn + x;
		} else if(q < mm+nn+nn-2) {
			startm = abs(q - nn - mm - 1 + x);
			startn = nn - 1 + x;
		} else {
			startm = x;
			startn = abs(q - nn - mm - nn + x);
		}

		// re-order the queue
		while(q--) {
			numbers.push(numbers.front());
			numbers.pop();
		}

		// add top layer
		for(int i=x; i<n-x; ++i) {
			input[x][i] = numbers.front();
			numbers.pop();
		}
		// add right layer
		if(m-x-x > 2) {
			for(int i=x+1; i<m-x-1; ++i) {
				input[i][n-x-1] = numbers.front();
				numbers.pop();
			}
		}
		// add bot layer
		for(int i=n-x-1; i>=x; --i) {
			input[m-x-1][i] = numbers.front();
			numbers.pop();
		}
		// add left layer
		if(m-x-x > 2) {
			for(int i=m-x-1-1; i>x; --i) {
				input[i][x] = numbers.front();
				numbers.pop();
			}
		}
	}

	// Output the answer
	for(int i=0; i<m; ++i) {
		for(int j=0; j<n; ++j) {
			cout << input[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}