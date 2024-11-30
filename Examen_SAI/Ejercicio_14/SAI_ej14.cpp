#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream f("miarchivo.txt");
	if (f.is_open())
	{
		f<<"591";
		f<<227;
	}
	f.close();
}

