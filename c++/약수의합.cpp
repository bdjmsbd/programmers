#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;

		for ( int i = 1; i<=n; i++) {
			if(n % i == 0) {
				answer += i;
			}
		}
		// 1 2 3 4 6 12 
    return answer;
}

int main() {
	cout << solution(12) << endl;

	return 0;
}