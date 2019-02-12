#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	string LeftRotateString(string str, int n) {
		auto str_size = str.size();
		string temp1 = str.substr(0, str_size - n);
		string temp2 = str.substr(str_size - n, n);
		str = temp1 + temp2;
		return str;
	}
};

void TestFunc(){
	string test("hello world");
	Solution s;
	string test2 = s.LeftRotateString(test, 3);
	cout << test2 << " " << endl;
}

int main(){
	TestFunc();
	system("pause");
	return 0;
}