/*
Write a program that initializes an array of integers with values 1 to 10, and then prints out the array in reverse order.
*/

#include <iostream>
using namespace std;

int main(){

	int my_array []{1,2,3,4,5,6,7,8,9,10};
	
	int i {10};
	
	cout << "My reversed array is: ";
	
	for(i; i > 0; i--){
		cout << i << " ";
	
	}
	
	cout << endl;
	
	return 0;
}

