#include <iostream>
#include <vector>
using namespace std;

void MysteryAlgorithm(vector<int> &inputs, int p) 
{
	int i, j;
	i = 0;
	j = inputs.size();
	while(i < j)
	{
		while(i < j && inputs.at(i) < p)
			i++;
		while(i < j && inputs.at(i) >= p)
			j--;
		if(i<j)
		{
			int tmp = inputs.at(i);
			inputs.at(i) = inputs.at(j);
			inputs.at(j) = tmp;
		}
	}
}

void displayData(vector<int> &inputs)
{
	for (vector<int>::iterator it = inputs.begin(); it != inputs.end(); it++)
		cout << *it << endl;
}
