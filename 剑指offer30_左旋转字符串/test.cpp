#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	string LeftRotateString(string str, int n) {
		auto str_size = str.size();
		string temp1 = str.substr(0, str_size - n);
		string temp2 = str.substr(str_size - n, n);
		str = temp2 + temp1;
		return str;
	}
};

void TestFunc(){
	string test("hello world");
	cout << "未旋转之前的字符串为：";
	cout << test << " " << endl;
	Solution s;
	string test2 = s.LeftRotateString(test, 3);
	cout << "旋转之后的字符串为：";
	cout << test2 << " " << endl;
}

int main(){
	TestFunc();
	system("pause");
	return 0;
}