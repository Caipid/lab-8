#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL,"ru");
	cout << "������� ������ s: ";
	string s,s0;
	int count = 0;
	cin >>s;
	cout << "������� ������ s0: ";
	cin >> s0;
	s = s.erase(s.find(s0), 1);
	cout << s;
}