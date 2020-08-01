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
        cout<<"2. Matriz"<<endl;
        cout<<"3. Pi"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>respuesta_usuario;
        switch (respuesta_usuario){
        case 2:
        {
            int limite, numeros_random=0, suma=0, contador=0;
            double desviacion, media_datos;
            cout<<"Ingrese el limite de la matriz: ";
            cin>>limite;
            double Matriz[5][5];
            for(int i = 0; i < limite; i++){
                for(int j = 0; j < limite; j++){
                    numeros_random = 10 + rand() % (90);
                    Matriz[i][j] = numeros_random;
                    numeros_random = 0;
                }
            }
            cout<<endl;
            contador=0;
            for(int k = 0; k < limite; k++){
                for(int l = 0; l < limite; l++){
                    /*if (k==contador){
                        contador++;
                        cout<<"[";
                    }*/
                    cout<<"["<<setw(2)<<Matriz[k][l]<<"] ";
                    /*if(l=limite-1){
                        cout<<"]";
                    }*/
                }
                cout<<endl;
            }
            for(int i = 0; i < limite; i++){
                for(int j = 0; j < limite; j++){
                    suma = suma + Matriz[i][j];
                }
            }
            media_datos = (suma/(limite*limite));
            suma = 0;
            for(int k = 0; k < limite; k++){
                for(int l = 0; l < limite; l++){
                    suma += pow((Matriz[k][l] - media_datos), 2);
                }
            }
            desviacion = (suma/(pow(limite, 2)));
            for(int i = 0; i < limite; i++){
                for(int j = 0; j < limite; j++){
                    Matriz[i][j] = ((Matriz[i][j] - media_datos)/desviacion);
                }
            }
            cout<<endl;
            contador=0;
            for(int k = 0; k < limite; k++){
                for(int l = 0; l < limite; l++){
                    /*if (k==contador){
                        contador++;
                        cout<<"[";
                    }*/
                    cout<<"["<<setw(5)<<Matriz[k][l]<<"] ";    
                    /*if(l=limite-1){
                        cout<<"]";
                    }*/
                }
                cout<<endl;
            }
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

