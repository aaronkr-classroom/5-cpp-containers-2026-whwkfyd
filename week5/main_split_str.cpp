#include <iostream>
#include <vector>
#include <string>
#include "split_str.h"

using namespace std;

int main()
{
	string s;
	cout << "Enter any string, EOF to auit: ";
	//문자열을 한 행씩 입력받아 분할
	while (getline(cin, s)) {
		vector<string> v = split(s);

		for (vector<string>::size_type i = 0;
			i != v.size(); i++) {
			cout << v[i] << endl;
		}
	}
	cout << "Program runs!" << endl;
	return 0;
}
