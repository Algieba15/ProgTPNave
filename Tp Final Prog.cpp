#include <iostream>
using namespace std;

class Juego {
protected:
	// bordes del recuadro
	int x1 = 5; 
	int y1 = 5; 
	int x2 = 50; 
	int y2 = 25;
	
public:
	// Constructor de la clase Juego
	Juego() {}
	
	// M�todo aparecer
	void aparecer(); 
};

// Implementaci�n del m�todo aparecer
void Juego::aparecer() {
	// textoColor es un error ya que no est� definida en el c�digo, lo comento
	// textoColor(BLUE); // Asumimos que esto deber�a cambiar el color del texto
	
	cout << "Moverse: WASD" << endl;
	cout << "Disparar: Espacio" << endl;
	cout << "Dispar� a la X." << endl;
	cout << "Cuidado con el asteroide" << endl;
}

int main(int argc, char *argv[]) {
	// Crear una instancia de Juego y llamar al m�todo aparecer
	Juego miJuego;
	miJuego.aparecer();
	
	int j; // Declaraci�n de 'j'
	int ancho = 40; // Ancho del recuadro
	int alto = 20;  // Alto del recuadro
	
	// Bucle para recorrer filas
	for (int i = 0; i < alto; i++) {
		for (j = 0; j < ancho; j++) { // Mover la declaraci�n de 'j' aqu�
			// Bordes izquierdo y derecho
			if (j == 0 || j == ancho - 1) {
				cout << "#";
			} else if (i == 0 || i == alto - 1) { // Bordes superior e inferior
				cout << "#";
			} else {
				cout << " "; // Espacio en el interior
			}
		}
		cout << endl; // Nueva l�nea despu�s de cada fila
	}
	
	return 0;
}
