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
	
	// Método aparecer
	void aparecer(); 
};

// Implementación del método aparecer
void Juego::aparecer() {
	// textoColor es un error ya que no está definida en el código, lo comento
	// textoColor(BLUE); // Asumimos que esto debería cambiar el color del texto
	
	cout << "Moverse: WASD" << endl;
	cout << "Disparar: Espacio" << endl;
	cout << "Dispará a la X." << endl;
	cout << "Cuidado con el asteroide" << endl;
}

int main(int argc, char *argv[]) {
	// Crear una instancia de Juego y llamar al método aparecer
	Juego miJuego;
	miJuego.aparecer();
	
	int j; // Declaración de 'j'
	int ancho = 40; // Ancho del recuadro
	int alto = 20;  // Alto del recuadro
	
	// Bucle para recorrer filas
	for (int i = 0; i < alto; i++) {
		for (j = 0; j < ancho; j++) { // Mover la declaración de 'j' aquí
			// Bordes izquierdo y derecho
			if (j == 0 || j == ancho - 1) {
				cout << "#";
			} else if (i == 0 || i == alto - 1) { // Bordes superior e inferior
				cout << "#";
			} else {
				cout << " "; // Espacio en el interior
			}
		}
		cout << endl; // Nueva línea después de cada fila
	}
	
	return 0;
}
