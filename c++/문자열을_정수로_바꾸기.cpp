#include <string>
#include <iostream>
#include <regex>

using namespace std;

int solution(string s)
{
	int answer = 0;
	string sub;

	switch(s[0]) {
		case '+' :
			answer = 1;
			sub = s.substr(1);
		break;
		case '-' :
			answer = -1;
			sub = s.substr(1);
		break;
		default :
			answer = 1;
			sub = s;
		break;
	}

	answer = answer * stoi(sub);

	return answer;
}

int main()
{
	string str = "�������� 1�� �Ǵ� �� ã��";
	cout << regex_replace(str, regex(" "), "_");

	return 0;
}