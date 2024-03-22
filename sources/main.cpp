#include "../headers/main.h"

int main()
{
	// prompt user for input
	vector<int> fringe;
	
	putData(fringe);
	
	// call mystery algorithm with arguments gathered: MysteryAlgorithm(inputs);
	
	MysteryAlgorithm(fringe,ReadInteger("What is my purpose? "));
	
	// display data
	displayData(fringe);
	
	return 0;
}
