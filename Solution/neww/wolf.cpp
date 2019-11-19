#include <iostream>
#include <map>

using namespace std;
map<char, int> maxfo;
map<char, int> count;
int main() {
	int n;
	cin >> n;

	int theirs = 52 - n;
	maxfo['C'] = 0;
	maxfo['H'] = 0;
	maxfo['D'] = 0;
	maxfo['S'] = 0;
	count['S'] = 0;
	count['C'] = 0;
	count['D'] = 0;
	count['H'] = 0;
	if(n > theirs) {
		cout << "possible" << endl;
	}
	else if(n == theirs) {
		for(int i = 0; i  < n; i++) {
		 	char temp1;
			int temp2;
			cin >> temp2 >> temp1;

			count[temp1]++;

			maxfo[temp1] = max(maxfo[temp1], temp2);
		}
		bool possible = false;

		if(maxfo['H'] > count['H']) {
			possible = true;
		}
		if(maxfo['D'] > count['D']) {
			possible = true;
		}
		if(maxfo['C'] > count['C']) {
			possible = true;
		}
		if(maxfo['S'] > count['S']) {
			possible = true;
		}

		if(possible) {
			cout << "possible" << endl;
		}
		else {
			cout << "impossible" << endl;
		}
	}
	else {
		cout << "impossible" << endl;
	}
}
