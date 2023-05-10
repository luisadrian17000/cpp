#include <iostream>
using namespace std;

int main(){

	const int small_room {25};
	int n_s_room {0};
	const int large_room {35};
	int n_l_room {0};
	const float tax {0.06};
	
	cout << "Cleaning service charges: \n";
	cout << "$25 for small room.\n";
	cout << "$35 for large room.\n";
	cout << "6 percent tax rate.\n";
	
	cout << "number of small rooms: \n";
	cin >> n_s_room;
	cout << "number of large rooms: \n";
	cin >> n_l_room;
	
	cout << "your charge will be: " << (n_s_room + n_l_room + tax) << endl;
	

	return 0;
}

