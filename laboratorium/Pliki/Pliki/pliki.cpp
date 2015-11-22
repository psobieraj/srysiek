// Patryk Sobieraj Teleinformatyka gr1 sekcja 1
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


unsigned long long GetFileSize(const string& file_name) {

	ofstream f(file_name, ios::app | ios:: binary);

	if (!f)

	{
		cout << "Nie mozna odpalic pliku \n";
		exit(1);
	}

	f.seekp(0, ios::end);
	int pos = f.tellp();
	f.close();
	return pos;
}


void calculate_statistics(const string& input_file_name, const string& output_file_name) {

	double licznik = 0;
	double suma = 0;
	double srednia = 0;
	double liczba;

	ifstream odczytywanie(input_file_name);

	if (!odczytywanie)
	{

		cout << "Nie mozna otworzyc" << endl << input_file_name;
		exit(1);
	}

	while (odczytywanie >> liczba)

	{
		cout << liczba << " ";
		licznik += 1;
		suma += liczba;
		srednia = suma / licznik;
	}
	
	odczytywanie.close();

	ofstream zapisywanie(output_file_name, ios::app);

	if (!zapisywanie)
	{

		cout << "Nie mozna otworzyc" << output_file_name;
		exit(1);
	}
	
	zapisywanie << srednia;
	zapisywanie.close();

	return;


	
}


void copy_text(const string& input_file_name, const string& output_file_name) {
	ifstream pierwszy;
	pierwszy.open(input_file_name);
	ofstream drugi;
	drugi.open(output_file_name, ios::app);
	string tempstring;
	while (getline(pierwszy, tempstring)) {

		drugi << tempstring << endl;

	}

	pierwszy.close();
	drugi.close();

}

void copy_binary(const string& input_file_name, const string& output_file_name) {

	ifstream pierwszy;
	pierwszy.open(input_file_name);
	ofstream drugi;
	drugi.open(output_file_name, ios::app | ios::binary);

	pierwszy.seekg(0, ios::end);
	unsigned long long filesize = pierwszy.tellg();
	pierwszy.seekg(0);

	char* temp = new char[filesize];
	pierwszy.read(temp, filesize);
	drugi.write(&temp[0], filesize);
}




int main(int argc, char ** argv) {

	/*	ofstream a("test.txt", ios::app);   // ios powoduje ze dodaja sie napisy,
	//	ofstream a("d:\\test.txt", ios::app);  d:\\ powoduje zapis pliku na dysku D, musza byc 2 \
		if (!a.is_open())

		{
			cout << " nie mozna otworzyc pliku !!!!\n";
			exit(1);

		}
		a << "siema andrzej \n";
		a.close();  */
		/*	const string file_name("liczby.txt");


			ofstream a("liczby.txt");
			int tab[] = { 1,2,3,4,5 };
			for (auto e : tab)
			{
				a << e;
			}

			a.close();


			ifstream b("liczby.txt");
			int tab2[5];
			for (int i = 0; i < 5; ++i)
				b >> tab2[i];
			//a.open("test.txt", ios::app);  */

/*	ifstream f("a.txt");
	if (!f);
	{
		cout << "error \n";
		exit(1);
	}

	string linia;
	while (getline(f, linia))
	{
		cout << linia << "\n";
	}     */


/*	ofstream f("test.txt", ios::binary);
	if (!f)
	{
		cout << "error \n";
		exit(1);
	}

	char tab[100];
	f.write(tab, 100);

	int pos = f.tellp();
	f.seekp(pos, ios::cur);  */


// ZADANIE 1


/*     const string file_name = "D:\\rozmiar.txt";
     cout << "Wielkosc pliku wynosi  " << " " << GetFileSize(file_name) << endl;   */



// ZADANIE 2

/*	const string input_file_name = "D:\\liczbyrzeczywiste.txt" ;
	const string output_file_name = "D:\\srednia.txt";
	calculate_statistics(input_file_name, output_file_name);   */


// ZADANIE 3

/*	const string input_file_name = "D:\\org.txt";
	const string output_file_name = "D:\\kop.txt";
	copy_text( input_file_name, output_file_name);
	copy_binary(input_file_name,output_file_name); */







	






}