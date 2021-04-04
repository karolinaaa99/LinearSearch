#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generation(int T[], int n, int p)
{
	for (int i = p; i < n; i++)
	{
		T[i] = rand() % 100 + 1;
	}
}

void print(int A[], int n, int p)
{
	cout << "Elementy w tablicy:" << endl;
	for (int i = p; i < n; i++)
	{
		cout << A[i] << " ";
	}
}

int linearSearch(int B[], int n, int k, int p)
{
	for (int i = p; i < n; i++)
		if (B[i] == k) return i;
	return -1;
}

int numberOfComparisons(int C[], int n, int k, int p)
{
	for (int i = p; i < n; i++)
		if (C[i] == k) return ++i;
	return n;
}

int main()
{
	//n-liczba danych do przeszukania
	//k-klucz
	int n, k;
	cout << "Podaj liczbe elementow do przeszukania n = ";
	cin >> n;
	int* Z = new int[n]; //tablica przechowujaca elementy do przeszukania
	srand(time(NULL)); 
	//wpisuje liczby pseudolosowe do tablicy
	generation(Z, n, 0);
	//wyswietlamy zawartosc tablicy
	print(Z, n, 0);
	cout << endl;
	//pytamy o klucz
	cout << "Podaj klucz k = ";
	cin >> k;
	//linear search
	cout << "Wynik: " << linearSearch(Z, n, k, 0) << endl;
	//liczba porownan
	cout << "Liczba porownan: " << numberOfComparisons(Z, n, k, 0) << endl;
	//zwalniamy pamiec
	delete[] Z;

	return 0;
}