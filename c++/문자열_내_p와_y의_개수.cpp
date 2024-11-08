#include <string>
#include <iostream>
#include <regex>
using namespace std;

bool solution(string s)
{
    int n1=0; 
    int n2=0;
    for (int i =0; i<s.size(); i++) {
        s[i] = tolower(s[i]);
        if(s[i] == 'p') n1++; 
        if(s[i] == 'y') n2++; 
    }
    if(n1 == n2) return true;
    else return false;
}

int main() {
	string str = "문자열 내 p와 y의 개수";
	cout << regex_replace(str, regex(" "), "_");

	return 0;
}