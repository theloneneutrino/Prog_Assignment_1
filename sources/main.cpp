#include "../headers/main.h"

int main(int argc, char * argv[])
{
	// prompt user for input
	vector<int> fringe = {3, 5, 9, 7, 2};
	
	// call mystery algorithm with arguments gathered: MysteryAlgorithm(inputs);
	MysteryAlgorithm(fringe, stoi(argv[1]));
	
	// display data
	displayData(fringe);
	cout << "done" << endl;
	
	return(0);
}
