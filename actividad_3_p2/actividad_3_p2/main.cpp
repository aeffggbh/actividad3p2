#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//uwuwuwuwuwuwuwuwuwu411
	//dwadjildjwdd
	const int MAX_CHARACTERS = 50;

	char text[MAX_CHARACTERS];

	cout << "ENTER TEXT " << endl;
	cin >> text;

	cin.getline(text, MAX_CHARACTERS);

	cout << "Outputting texto into archivo" << endl;

	//save text on output
	ofstream outputStream = ofstream();

	//file!!!! Opening the file.
	outputStream.open("myFiles/file1");

	//OUT TO THE FILE!!!!!!!!!!!!!!!!!! uwu
	//like cout cause its OUT!
	outputStream << text;

	outputStream.close();

	cin.get();
}