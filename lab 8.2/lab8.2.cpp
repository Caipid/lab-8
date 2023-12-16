#include<iostream>
#include<locale>
#include<string>
using namespace std;
// Дана строка, содержащая полное имя файла. Выделить из этой стро-ки название последнего каталога (без символов «\»). Если файл содержится в корневом каталоге, то вывести символ «\».
int main() {
	setlocale(LC_ALL, "RU");
	cout << "Введите строку полное имя файла: ";
	string roadfile;
	int count = 0;
	getline(cin, roadfile);
	string sw;
	sw = roadfile;
	while (sw.find("/") < 10000) {
		sw.erase(roadfile.find("/"), 1);
		count += 1;
	}
	if (count > 1) {
		string s;
		s = roadfile;
		s.erase(roadfile.rfind("/"), 1);
		int dlina = roadfile.rfind("/") - s.rfind("/") - 1;
		cout << roadfile.substr(s.rfind("/") + 1, dlina);
	}
	else if (count == 1) {
		cout << "/";
	}
}

