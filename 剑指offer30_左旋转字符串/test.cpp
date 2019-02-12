#include<iostream>
#include<string>

using namespace std;

class Solution1 {
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

class Solution3 {
public:
	string LeftRotateString(string str, int n) {
		int length = str.length();
		if (n<0 || length <= 0)
			return "";
		int weishu = n%length;
		string res(str, weishu, length);
		for (int i = 0; i <= (weishu - 1); i++)
			res += str[i];
		return res;

	}
};


void TestFunc1(){
	cout << "��һ�ַ���" << endl;
	string test("abcdefg");
	cout << "δ��ת֮ǰ���ַ���Ϊ��";
	cout << test << " " << endl;
	Solution1 s;
	string test2 = s.LeftRotateString(test, 2);
	cout << "��ת֮����ַ���Ϊ��";
	cout << test2 << " " << endl;
}

void TestFunc2(){
	cout << "�ڶ��ַ���" << endl;
	string test("abcdefg");
	cout << "δ��ת֮ǰ���ַ���Ϊ��";
	cout << test << " " << endl;
	Solution2 s;
	string test2 = s.LeftRotateString(test, 2);
	cout << "��ת֮����ַ���Ϊ��";
	cout << test2 << " " << endl;
}

void TestFunc3(){
	cout << "�����ַ���" << endl;
	string test("abcdefg");
	cout << "δ��ת֮ǰ���ַ���Ϊ��";
	cout << test << " " << endl;
	Solution3 s;
	string test2 = s.LeftRotateString(test, 2);
	cout << "��ת֮����ַ���Ϊ��";
	cout << test2 << " " << endl;
}

int main(){
	TestFunc1();
	TestFunc2();
	TestFunc3();
	system("pause");
	return 0;
}