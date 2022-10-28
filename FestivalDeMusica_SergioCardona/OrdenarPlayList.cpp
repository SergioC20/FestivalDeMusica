#include "OrdenarPlayList.h"


using namespace std;

string Artista[500];
string Nombre[500];
int cantidad;

void OrdenarPlayList::start(string nombres[], string artistas[], int n) {

	cantidad = n;
	for (int i = 0; i < cantidad; i++) {
		Artista[i] = artistas[i];
		Nombre[i] = nombres[i];
	}

}

string OrdenarPlayList::InicializarN(int x) {
	return Nombre[x];
}

string OrdenarPlayList::InicializarA(int x) {
	return Artista[x];
}

int OrdenarPlayList::InicializarC() {
	return cantidad;
}

void OrdenarPlayList::OrdenPorNombre() {
	int i, j, min_indx;

	for (i = 0; i < cantidad - 1; i++) {

		min_indx = i;
		for (j = i + 1; j < cantidad; j++) {

			if (Nombre[j] < Nombre[min_indx]) {
				min_indx = j;
			}
		}
		string temp = Artista[min_indx];
		Artista[min_indx] = Artista[i];
		Artista[i] = temp;

		string temp1 = Nombre[min_indx];
		Nombre[min_indx] = Nombre[i];
		Nombre[i] = temp1;
	}

}

void OrdenarPlayList::OrdenPorArtista()
{
	int k, o, min_ind;

	for (k = 0; k < cantidad - 1; k++) {

		min_ind = k;
		for (o = k + 1; o < cantidad; o++) {

			if (Artista[o] < Artista[min_ind]) {
				min_ind = o;
			}
		}
		string temp = Artista[min_ind];
		Artista[min_ind] = Artista[k];
		Artista[k] = temp;

		string temp1 = Nombre[min_ind];
		Nombre[min_ind] = Nombre[k];
		Nombre[k] = temp1;
	}

}
