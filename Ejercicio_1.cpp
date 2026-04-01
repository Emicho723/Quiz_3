#include <iostream>
using namespace std;

int main(){
    
    int inventario[7] = {3, 0, 7, 2, 5, 1, 4};                                  // Respuesta a la pregunta 1

    cout << "=== Inventario Original ===" << endl;
    for(int i = 0; i < 7; i++){                                                 // Respuesta a la pregunta 2
        cout << "inventario[" << i << "] = " << inventario[i] << endl;          // Respuesta a la pregunta 2
    }

    int objeto_Elegido = inventario[4];                                             // Respuesta a la pregunta 3
    cout << "Objeto elegido (posicion 4): " << objeto_Elegido << endl;              // Respuesta a la pregunta 3

    inventario[1] = 10;                                    // Respuesta a la pregunta 4
    cout << "Modificando inventario[1] = 10" << endl;

    inventario[5] = 0;                                     // Respuesta a la pregunta 4
    cout << "Modificando inventario[5] = 0" << endl;

    int suma = 0;                                            // Respuesta a la pregunta 5
    for(int i = 0; i < 7; i++){                              // Respuesta a la pregunta 5
        suma += inventario[i];                               // Respuesta a la pregunta 5
    }

        cout << "Suma total del inventario: " << suma << endl;

    int max = inventario[0];                      // Respuesta a la pregunta 6
    int indice = 0;                               // Respuesta a la pregunta 6
    for(int i = 1; i < 7; i++){                   // Respuesta a la pregunta 6
        if(inventario[i] > max){                  // Respuesta a la pregunta 6
            max = inventario[i];                  // Respuesta a la pregunta 6
            indice = i;
        }
    }
    cout << "Máximo valor en el inventario: " << max << " En indice: " << indice << ")" << endl; 



    return 0;
}
