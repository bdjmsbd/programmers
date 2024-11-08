#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;

    string nStr = to_string(n);
		for(int i=0; i<nStr.size(); i++) {
			answer += int(nStr[i]) - '0';
		}

    return answer;
}

int main() {

	return 0;
}