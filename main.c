//KIMBERLY CATANIA VILLEDA ROSALES 13640
#include "iostream"
using namespace std;

int main(){
    int edad, nota=0, semana = 0, num, num1, num2, i=1, numf, factorial=1;
    cout<<"Ejercicos de progra 25/03/2023.\n";
    cout<<"Ingresa un numero del ejercicio.\n";
    cout<<"1==> Edad\n";
    cout<<"2==> Numero Mayor o igual\n";
    cout<<"3==> Numero Par o Impar\n";
    cout<<"4==> Factorial\n";
    cout<<"5==> Numeros impares For\n";
    cout<<"6==> Numeros impares While\n";
    cout<<"7==> Dia de la semana\n";
    cout<<"Ingrese la  Opcion\n";
    cin>>nota;

    switch (nota) {
        case 1:
            cout<<" ingrese su edad.\n";
            cin>>edad;

            if(edad>=18){
                cout<<" es mayor de edad\n";
            }else{
                cout<<" es menor de edad\n";
            }
            break;
        case 2:

            cout<<" numero es mayor.\n";
            cout<<"Ingrese el primer numero.\n";
            cin>>num1;
            cout<<"ingrese el segundo numero.\n";
            cin>>num2;
            if(num1<num2){
                cout<<"El Numero "<<num2<<" es Mayor "<<num1<<" : "<<num2<<" > "<<num1<<endl;
            }else if(num2<num1){
                cout<<"El Numero "<<num1<<" es Mayor que "<<num2<<" : "<<num1<<" > "<<num2<<endl;
            }else{
                cout<<"Los Numeros son Iguales "<<num1<<" = "<<num2<<endl;
            }

            break;
        case 3:
            cout<<" numero es par o impar.\n";
            cout<<"Ingrese un Numero.\n";
            cin>>num;
            if(num%2==0){
                cout<<"El Numero "<<num<<"  es un numero par.\n";
            }else{
                cout<<"El Numero "<<num<<"  es un Numero par.\n";
            }
            break;
        case 4:
            cout<<" factorial de un numero.\n";
            cout<<"Ingrese un numero para factorial.\n";
            cin>>numf;
            while(i<=numf){
                factorial=factorial*i;
                cout<<i<<"! = "<<factorial<<endl;
                i++;
            }
            cout<<"El Factorial de "<<numf<<" es : "<<factorial<<endl;
            break;
        case 5:
            cout<<"los numeros impares del 1 hasta su numero.\n";
            cout<<"Ingrese un numero mayor o igual que 10 y menor o igual que 30.\n";
            cin>>num;

            if(num>9 && num<31) {
                cout<<"Los numeros impares del 1 hasta "<<num<<" son :\n";
                for (int i = 1; i <=num ; ++i) {
                    if(i%2!=0){
                        cout<<i<<"\n";
                    }

                }
                cout<<endl;
            }else{
                cout<<"El numero esta fuera del rango.\n";
            }
            break;
        case 6:
            cout<<"Para conocer los numeros impares del 1 hasta su numero.\n";
            cout<<"Por favor, Ingrese un numero mayor o igual que 10 y menor o igual que 30.\n";
            cin>>num;

            if(num>9 && num<31) {
                cout<<"Los numeros impares del 1 hasta "<<num<<" son :\n";
                while(i<=num) {
                    if(i%2!=0){
                        cout<<i<<"\n";
                    }
                    i++;
                }
                cout<<endl;
            }else{
                cout<<"El numero esta fuera del rango requerido.\n";
            }

            break;
        case 7:
            cout<<"Eliga un numero del 1 al 7 para conocer un dia de la semana.\n";
            cin>>semana;

            switch (semana) {
                case 1:
                    cout<<"DOMINGO\n";
                    break;
                case 2:
                    cout<<"LUNES\n";
                    break;
                case 3:
                    cout<<"MARTES\n";
                    break;
                case 4:
                    cout<<"MIERCOLES\n";
                    break;
                case 5:
                    cout<<"JUEVES\n";
                    break;
                case 6:
                    cout<<"VIERNES\n";
                    break;
                case 7:
                    cout<<"SABADO\n";
                    break;
            }

            break;
    }
    return 0;
}
