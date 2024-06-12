#include<iostream>
using namespace std; 
constexpr int n=7;//notas por alumno
//funcion de instrucciones
void instruccion(void){
    cout << "Este programa explica el uso de funcion void";
    cout << "\nque void implica que no hay variable de retorno o argumentos de entrada";
    cout << "\ntambien esta el uso de arreglos de multiples dimensiones";
    cout << "\nEl ejemplo es calculo de nota final para varios estudiantes\n";
}
void calculo_notafin(float notas[][n], float ponderaciones[], int m){
    for (int j = 0; j < m; j++)
    {
        notas[j][6]=0;
        for (int i = 0; i < n; i++)
        {
            notas[j][6]=notas[j][6]+ notas[j][i]*ponderaciones[i];
        }
        
    }
    
}
int main(){
    //variables que requiere el programa
    int m; // cantidad de alumn
    float ponderaciones[n]={0.15,0.2,0.1,0.1,0.2,0.25};//ponderacion
    cout<<"Ingrese a cantidad de alumnos: ";
    cin>>m;
    string nombres[m];// nombres de estudiantes
    float notas[m][n];//areglo de 2 dimensines para guardar
    //pedir nombres y notas
    for (int i = 0; i < m; i++)
    {
        cout<<"Nombre de estudiante "<<i+1<<": ";
        cin>>nombres[i];
        cout<<nombres[i]<<"P1: ";
        cin>>notas[i][0];
        cout<<nombres[i]<<"P2: ";
        cin>>notas[i][1];
        cout<<nombres[i]<<"C1: ";
        cin>>notas[i][2];
        cout<<nombres[i]<<"C2: ";
        cin>>notas[i][3];
        cout<<nombres[i]<<"LA: ";
        cin>>notas[i][4];
        cout<<nombres[i]<<"Proyecto: ";
        cin>>notas[i][5];
    }

    calculo_notafin(notas,ponderaciones,m);
    for (int i = 0; i < m; i++)
    {
        cout<<nombres[i]<<" su nota final es: "<<notas[i][6]<<"\n";
    }
    

    return 0;
}