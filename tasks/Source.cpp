#include <fstream>
#include <iostream>

using namespace std;


int main(){

	char buff[50];

	ifstream file("text.txt");
	file.getline(buff, 10);
	cout << buff << endl;
	
	system("pause");
	return 0;
}
