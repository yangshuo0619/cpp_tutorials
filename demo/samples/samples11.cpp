#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	for (int i = 0; i <= 3; i++) {
		cout << setw(4 -i) << '*';
		for (int j = 0; j <i * 2; j++) {
			cout << '*';
		}
		cout << endl <<endl;
	}
		return 0;
	
}
