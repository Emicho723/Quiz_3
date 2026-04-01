#include <iostream>
using namespace std;

int main(){

    int mapa[3][4] = {
        {2, 0, 5, 1},                       // Respuesta a la pregunta 1
        {3, 8, 0, 4},                       // Respuesta a la pregunta 1
        {1, 6, 7, 0}
    };
    

    cout << "=== Mapa Original ===" << endl;

    for(int i = 0; i < 3; i++){                // Respuesta a la pregunta 2
        for(int j = 0; j < 4; j++){            // Respuesta a la pregunta 2
            cout << mapa[i][j] << "\t";        // Respuesta a la pregunta 2
        }
        cout << endl;
    }

    mapa[0][2] = 9;                                // Respuesta a la pregunta 3
    cout << "Modificando mapa[0][2] = 9" << endl;

    mapa[2][3] = 3;                                // Respuesta a la pregunta 3
    cout << "Modificando mapa[2][3] = 3" << endl;

    cout << "=== Promedio por fila ===" << endl;

    for(int i = 0; i < 3; i++){                                // Respuesta a la pregunta 4
        int suma = 0;                                          // Respuesta a la pregunta 4
        for(int j = 0; j < 4; j++){                            // Respuesta a la pregunta 4
            suma += mapa[i][j];                                // Respuesta a la pregunta 4
        }                                                      // Respuesta a la pregunta 4
        double promedio = (double)suma / 4;                    // Respuesta a la pregunta 4
        cout << "Fila " << i << ": " << promedio << endl;      // Respuesta a la pregunta 4
    }

    
     int max = mapa[0][0];
    int fila = 0, col = 0;

    for(int i = 0; i < 3; i++){                      // Respuesta a la pregunta 5
        for(int j = 0; j < 4; j++){                  // Respuesta a la pregunta 5
            if(mapa[i][j] > max){                    // Respuesta a la pregunta 5
                max = mapa[i][j];                    // Respuesta a la pregunta 5
                fila = i;                            // Respuesta a la pregunta 5 
                col = j;                             // Respuesta a la pregunta 5
            }
        }
    }



    cout << "\n=== Maximo de la matriz ===" << endl;
    cout << "Valor maximo: " << max << " en posicion [" << fila << "][" << col << "]" << endl;

    cout << "\n=== Mapa Actualizado ===" << endl;

    for(int i = 0; i < 3; i++){                  // Respuesta a la pregunta 6
        for(int j = 0; j < 4; j++){              // Respuesta a la pregunta 6
            cout << mapa[i][j] << "\t";          // Respuesta a la pregunta 6
        }                                        // Respuesta a la pregunta 6
        cout << endl;                            // Respuesta a la pregunta 6
    }

    return 0;
}







  