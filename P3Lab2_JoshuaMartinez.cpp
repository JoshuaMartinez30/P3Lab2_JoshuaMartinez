#include <iostream>
using namespace std;
int main(){
    char resp='s';
    int respuesta_usuario;
    while(resp=='s' || resp=='S'){
        cout<<"1. Ejercicio"<<endl;
        cout<<"2. Ejercicio"<<endl;
        cout<<"3. Ejercicio"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>respuesta_usuario;
        switch (respuesta_usuario)
        {
        case 1:
            
            break;
        case 2:
            break;
        
        case 3:
            break;

        case 4:
            return (0);
            break;
        }
    }
}