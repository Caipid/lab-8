#include<iostream>
#include<locale>
#include<string>
using namespace std;
//���� ������ S � S0.������� �� ������ S ������ ���������, ����� - ������ � S0.���� ����������� �������� ���, �� ������� ������ S ��� �� - �������.
int main() {
setlocale(LC_ALL, "RU");
cout << "������� ������ s: ";
string s, s0;
int count = 0;
getline(cin,s);
cout << "������� ������ s0: ";
getline(cin,s0);
if (s.find(s0) < 10000) {
	s.erase(s.find(s0), s0.length());
}
cout << s;
}
