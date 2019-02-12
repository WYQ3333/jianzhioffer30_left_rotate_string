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
	}
};

void TestFunc(){

}

int main(){
	TestFunc();
	system("pause");
	return 0;
}