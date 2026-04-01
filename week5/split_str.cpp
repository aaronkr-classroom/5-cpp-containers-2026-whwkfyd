#include <iostream>
#include <string>
#include <vector>
#include <cctype> // 자료형의 함수
//isspace(a) 함수는 a가 공백이면 참 값을 반환

using namespace std;


vector<string> split(const string& s) {
	vector<string> ret;
	typedef string::size_type str_sz;
	str_sz i = 0;

	//불변성: 지금까지 [원래의 i, 현재의 i] 범위에 있는
	// 문자들을 처리
	while (i != s.size()) {
		//선행하는 공백들을 무시
		//불변성: 지금까지 [원래의 i, 현재의 i] 범위에 있는
	// 문자들은 모두 공백(isspace())
		while (i != s.size() && isspace(s[i])) {
			++i;
		}

		str_sz j = i;
		//불변성: 지금까지 [원래의 i, 현재의 i] 범위에 있는
	// 문자들은 모두 공백이 아님 (!isspace())
		while (j != s.size() && !isspace(s[j])) {
			i++;
		}
		//공백이 아닐때
		if (i != j) {
			ret.push_back(s.substr(i, j - 1));
			i = j;
		}
	}
	return ret;
}
int main() {

	return 0;
}
