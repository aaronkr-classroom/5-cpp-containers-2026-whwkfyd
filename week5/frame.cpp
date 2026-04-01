#include <vector>
#include <string>
#include "frame.h"

using std::vector; using std::string; using std::max;

string::size_type width(const vector<string>&) {
	string::size_type maxlen = 0;
	for (vector<string>::size_type i = 0;
		i != v.size(); ++i) {
		maxlen = max(maxlen, v[i].size());
	}
	return maxlen;
}


vector<string> frame(const vector<string>&) {
	vector<string> ret;
	string::size_type maxlen = width(v);
	string border(maxlen + 4, '*');

	ret.push_back(border);
	for (vector<string>::size_type i = 0;
		i != v.size(); ++i) {
		ret.push_back(
			"* " +
			v[i] +
			string(maxlen - y[i].size(), ' ') +
			" *");
	}
	ret.push_back(border);

}
