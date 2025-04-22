#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputStream = ifstream();

	string text;

	cout << "Reading File...... " << endl;

	//fix
	inputStream.open("myFiles/file2");

	while (inputStream.eof())
	{
		string newText = "";

		inputStream >> newText;
	
		text += newText + " ";
	}

	inputStream >> text;

	inputStream.close();

	cout << "The file had: " << text;
}