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


void calculate_statistics(const string& intput_file_name, const string& output_file_name) {

	int i, licznik,l  = 0;
	double suma = 0;
	string napis;

	ofstream k(intput_file_name, ios:: app);
	ofstream i(output_file_name, ios::app);

	if ((!k) || (!i))

	{
		cout << "Nie mozna odpalic pliku \n";
		exit(1);
	}

	while (i << napis) {
		l = stoi(napis, nullptr, 10)
			licznik++;
		suma += l;
	}

	o << suma;
}

int main(int argc, char ** argv) {

	string nazwa;


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



/*	cout << "Podaj nazwe pliku \n";
	cin >> nazwa;
	cout << "Wielkosc pliku wynosi  " << " "  << GetFileSize(nazwa) << endl;       */



// ZADANIE 2


	string srednia;
	cout << "Podaj nazwe pliku \n";
	cin >> nazwa;
	cout << "Podaj nazwe do zapisu sredniej \n";
	cin >> srednia;







	






}