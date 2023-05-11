/*
Write a program that declares an integer array of size 5, initializes it with values {2, 5, 3, 9, 7}, and then calculates and prints the sum of all the elements in the array.
*/

#include <iostream>
using namespace std;

int main(){

	int my_array [5] {2, 5, 3, 9, 7};
	
	int e {0};
	int sum {0};
	
	for (e; e < 5; e++){
		sum = sum + my_array[e];
		
	}
	
	cout << "the sum of all elements of the array is: " << sum << endl;

	return 0;
}

