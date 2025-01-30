// Test program for a dice class.

#include "dice.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main () {
	// Initialize the RNG
	srand(time(0));

	Dice mydice;
	Dice myotherdice;

	mydice.roll();
	myotherdice.roll();

	cout << mydice.get_die0() << " " << mydice.get_die1()
		 << " " << mydice.get_total() << endl;
	cout << myotherdice.get_die0() << " " << myotherdice.get_die1()
		 << " " << myotherdice.get_total() << endl;
}