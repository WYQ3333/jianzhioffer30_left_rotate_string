#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	string LeftRotateString(string str, int n) {
		if (str.empty()){
			return "";
		}
		auto str_size = str.size();
		string temp1 = str.substr(0, n);
		string temp2 = str.substr(n, str_size-n);
		str = temp2 + temp1;
		return str;
	}
};

class Solution2 {
public:
	string LeftRotateString(string str, int n) {
		if (n<0) return NULL;
		if (n == 0) return str;
		string strTemp = "";

		strTemp = str.substr(0, n);
		str.erase(0, n);
		str += strTemp;
		return str;

	}
};


void TestFunc(){
	cout << "第一种方法" << endl;
	string test("abcdefg");
	cout << "未旋转之前的字符串为：";
	cout << test << " " << endl;
	Solution s;
	string test2 = s.LeftRotateString(test, 2);
	cout << "旋转之后的字符串为：";
	cout << test2 << " " << endl;
}

void TestFunc2(){
	cout << "第二种方法" << endl;
	string test("abcdefg");
	cout << "未旋转之前的字符串为：";
	cout << test << " " << endl;
	Solution2 s;
	string test2 = s.LeftRotateString(test, 2);
	cout << "旋转之后的字符串为：";
	cout << test2 << " " << endl;
}

int main(){
	TestFunc2();
	system("pause");
	return 0;
}