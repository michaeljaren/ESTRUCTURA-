//metodo de intercambbio
#include <iostream>
using namespace std;
void ordenacionIntercambio(int arreglo[], int n){
    int auxiliar; //necesario para intercambiar los vlao9res
    //la i define la posicion de refernecia 
    //va desde 0  hasta el penultimo es decir el vector -1  
    for (int i=0; i<n;i++){
        //ciclo interno
        for(int j =i+1;j < n; j++){
            //compáramps
            if (arreglo[i] > arreglo [j]){
                auxiliar = arreglo[i];
                arreglo [i] = arreglo [j]; //sobreescirbo el valor de i para no perdleo
                //ponemos el valor correspondiente en la posicion j
                arreglo[j] = auxiliar;
            }
            
        }
        
    }
}
//funcion para imprimir el areglo
void imprimirArreglo(int arreglo[], int n){
    cout<<" [";
    for(int i =0; i<n;i++){
        cout<<arreglo[i];
        if (i<n-1) cout<<",";
    
    } cout<<" ]"<<endl;
    
}
int main(){
    //definimos lo que querio ordenar
    int arreglo [] = {8,4,6,2};
    //calulamos la cantidad de elemntos
    int n = sizeof(arreglo)/sizeof(arreglo[0]);
    cout<<"*** METODO DE INTERCAMBIO ****"<<endl;
    //immpirmos el arreglo original
    cout<< "Arreglo original: ";
    imprimirArreglo(arreglo, n);
    //mosptramos los reusltados 
    ordenacionIntercambio(arreglo,n);
    cout <<"Arreglo ordenado";
    imprimirArreglo(arreglo,n);
    return 0;
    
}
