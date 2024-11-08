#include <string>
#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;

		for(int a: arr) {
			answer += a;
		}
		answer /= arr.size();

    return answer;
}

int main(){
	vector<int> arr;

	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	
	// for (int a : arr) {
	// 	cout << a << " ";
	// }

	double res= solution(arr);

	cout << "°á°ú´Â : " << res << endl;

	return 0;
}