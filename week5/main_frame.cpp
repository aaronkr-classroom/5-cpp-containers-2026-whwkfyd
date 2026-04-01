#include <vector>
#include <string>
#include <iostream>
#include "frame.h"
#include "split_str.h"

using namespace std;

int main()
{
	string s;
	cout << "Enter strings, EOF to quit:  ";

	while (getline(cin,s)) {
		vector<string> v = split(s);
		vector<string> fr = frame(v);

		for (vector<string>::size_type i = 0;
			i != v.size(); i++) {
			cout << fr[i] << endl;
		}
	}
	return 0;
}
