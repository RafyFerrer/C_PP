#include <iostream>
using namespace std;
int main (void) {
	int n;
	cout<<"Introduce número: ";
	cin>>n;
	n>0?n++:n--;
	cout<<"n "<<n<<endl;
	return 0;
}

