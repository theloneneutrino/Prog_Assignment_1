#include <iostream>
#include <vector>
using namespace std;

void MysteryAlgorithm(vector<int> &inputs, int p) 
{
	int i, j;
	i = 0;
	j = inputs.size() - 1;
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

int ReadInteger(const char * question)
{
	//reads from istream until input is not integer
	int result = 0;
	char c = 0;
	int v = 0;
	bool neg = false;

	printf("%s", question);
	c = getchar(); 
	if( c == '-') // if negative number
		neg = true; // sets neg flag
	else if (('0' <= c ) && (c <= '9'))  // else sets result to first number
		result = c - '0';

	c = getchar();
	while(('0' <= c ) && (c <= '9'))
	{
		v = c - '0';
		result = 10 * result + v;
		c = getchar();
	}

	if (!neg)
	{
		return result;
	}
	else
	{
		result *= -1;
		return result;
	}
}

int ReadUnsignedInteger(const char * question)
{
	//reads from istream until input is not integer
	int result = 0;
	char c = 0;
	int v = 0;

	printf("%s", question);
	c = getchar(); 
	
	while(('0' <= c ) && (c <= '9'))
	{
		v = c - '0';
		result = 10 * result + v;
		c = getchar();
	}

	return result;
}

void putData(vector<int> &vec)
{
	int tmpVal;
	long unsigned int size = 0;
	do {
		size = ReadUnsignedInteger("Size of vector: ");
	} while (size <= 0);

	for (int i = 0; i < size; i++)
	{
		tmpVal = ReadInteger("Value: ");

		if(i < vec.size())
		{
			vec.at(i) = tmpVal;
		}
		else
		{
			vec.push_back(tmpVal);
		}
	}

	if(vec.size() > size)
		vec.resize(size);
}

void displayData(vector<int> &inputs)
{
	printf("{");
	for (vector<int>::iterator it = inputs.begin(); it != inputs.end() - 1; it++)
		printf("%d, ", *it);

	printf("%d}\n", inputs.at(inputs.size() - 1) );
}
