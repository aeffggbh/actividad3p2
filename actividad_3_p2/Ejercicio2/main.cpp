/*
2. Crear en otro proyecto un programa que siga los siguientes pasos:
a. Haga la lectura de los dos archivos guardados en el ejercicio anterior.
b. Imprima por pantalla los contenidos de las frases, especificando cuál es cuál
(“la frase más larga es: …”, por ejemplo).
c. Guarde en un archivo nuevo todas las palabras que tengan una cantidad de
caracteres par (separadas por una coma)
*/
#include <iostream>
#include <fstream>
using namespace std;

char* Read(ifstream& stream);

int main()
{
	ifstream iStream = ifstream();

	iStream.open("../Ejercicio1/long_text.txt");

	cout << "Text had: " << Read(iStream) << endl;

	iStream.close();

	iStream.open("../Ejercicio1/short_text.txt");

	cout << "Text had: " << Read(iStream);

	iStream.close();

}

//doesnt take the spaces! halp
//ahora ta re roto xd funcaba con string maso
char* Read(ifstream& stream)
{
	const int max = 40;

	char res[max];
	int pos = 0;

	while (stream.eof())
	{
		char newText = ' ';

		stream >> newText;

		res[pos] = newText + ' ';
		
		pos++;
	}

	stream >> res;

	return res;
}
