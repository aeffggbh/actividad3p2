/*
1. Crear en un proyecto un programa que siga los siguientes pasos:
a. Solicite el ingreso de dos textos al usuario.
b. Haga la escritura de la frase más larga en un archivo de texto llamado
“long_text.txt”.
c. Haga la escritura de la frase más corta en un archivo de texto llamado
“short_text.txt”
*/

#include <iostream>
#include <fstream>
using namespace std;

int GetInputSize(char* text, const int &max);

int main()
{
	const int max = 40;
	char text1[max];
	char text2[max];
	ofstream oStream;

	cout << "Insert text 1 (max: " << max << " letras)" << endl;
	cin.getline(text1, max);

	cout << "Insert text 2 (max: " << max << " letras)" << endl;
	cin.getline(text2, max);

	cout << "Writing..." << endl;

	int size1 = GetInputSize(text1, max);
	int size2 = GetInputSize(text2, max);

	char* longText;
	char* shortText;
	if (size1 > size2)
	{
		longText = text1;
		shortText = text2;
	}
	else 
	{
		longText = text2;
		shortText = text1;
	}

	oStream.open("long_text.txt");

	oStream << longText;

	oStream.close();

	oStream.open("short_text.txt");

	oStream << shortText;

	oStream.close();

}

int GetInputSize(char* text, const int& max)
{
	int size = 0;

	for (int i = 0; i < max; i++)
	{
		if (text[i] != '\n')
			size++;
		else
			return size;
	}

	return size;
}
