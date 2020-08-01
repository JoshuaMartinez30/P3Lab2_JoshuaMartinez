#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void aproximacion(double limite, double contador, double acumulador){
    double numerador, denominador, total, total_final;
    if (contador >= limite){
        total_final = 4*acumulador;
        cout << "La aproximacion de pi es: " << total_final;
        cout<<endl;
    }
    else{
        numerador = pow(-1.0, contador);
        denominador = ((2.0 * contador) + 1.0); 
        total =  numerador/denominador;
        acumulador += total;
        aproximacion(limite, contador + 1, acumulador);
    }
}

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
        {
          
        }
        break;
        
        case 3:
        {
            double limite, contador=0, acumulador=0;
            cout<<"Ingrese limite: ";
            cin>>limite;
            aproximacion(limite, contador, acumulador);
        }
        break;
        
        case 4:
            return (0);
        break;
        }
    }
}

