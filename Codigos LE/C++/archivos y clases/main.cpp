#include <iostream>
#include <string>

#define DEFAULT 0
#define MAYOR_DE_EDAD 1
#define NUM_CORRECTO 2

using namespace std;

class datos {
    public:
        string numero;
        string nombre;
        string edad;
    datos();
};

void pedirDatos();
void verificar(datos DatosAPedir);

int main()
{
    pedirDatos();
    return 0;
    
}

datos::datos (){
    numero = "";
    nombre = "";
    edad = "";
}

void pedirDatos(){
    datos DatosAPedir = datos();
    cout << "Ingrese su nombre: ";
    cin >> DatosAPedir.nombre;

    cout << "Ingrese su edad: ";
    cin >> DatosAPedir.edad;
    
    cout << "Ingrese su numero: 0348";
    cin >> DatosAPedir.numero;
    
    verificar(DatosAPedir);
}

void verificar(datos DatosAPedir){
    
    int estado = 0;
    
    switch (estado) {
        case DEFAULT: 
        if(stoi(DatosAPedir.edad) >= 18){
            estado = 1;
        }
        else {
            cout << "Este servicio es para mayores de edad" << endl;
            break;
        }
        
        case MAYOR_DE_EDAD:
        if(DatosAPedir.numero.length() == 7){
            estado = 2;
        }
        else{
            cout << "Este numero no es valido" << endl;
            break;
        }
        
        
        case NUM_CORRECTO:
        cout << "esta bien" << endl;
        break;
    }
}