#include<iostream>
#include<locale>
#include<string>
using namespace std;
//Даны строки S и S0.Удалить из строки S первую подстроку, совпа - дающую с S0.Если совпадающих подстрок нет, то вывести строку S без из - менений.
int main() {
setlocale(LC_ALL, "RU");
cout << "Введите строку s: ";
string s, s0;
int count = 0;
getline(cin,s);
cout << "Введите строку s0: ";
getline(cin,s0);
if (s.find(s0) < 10000) {
	s.erase(s.find(s0), s0.length());
}
cout << s;
}
