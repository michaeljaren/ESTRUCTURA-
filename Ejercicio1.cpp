//ordenacion por distribucicion
#include <iostream>
#include <queue>
using namespace std;

//imprimri arreglo 
// Función para imprimir el arreglo
void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;
}
// para encontrar el valor mas grande del arreglo 
int obtenerMaximo(int arr[], int n){
    int maximo = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]> maximo){
            maximo = arr[i];
        }
    }
    return maximo;
}

//metodo de ordenbacion RADIX / Orden. distribucicion 
void radixSort(int arr [], int n){
    int maximo = obtenerMaximo (arr,n);
    queue<int> urnas[10];
    int pasada =1;
    // el poaso 3 es el cuclo pricimapar que va haciendo itenraccion dentro de las urnas
    // exp = 1 (unidades)
    // exp = 10 (desenbas)
    // exp = 100 (centrenas)
    for (int exp = 1; maximo / exp >0; exp *=10 ){
    //encolamos los ellentos del arerglo}
     //recorremos los ellentos
     for (int i =0; i<n;i++){
         //obtenemos el numero actual utilizando matematica simple <8 modulo 10
         int digito = (arr[i]/exp) %10;
         //insertamos uhn psuch numero complñeto en la cola correspondite
         urnas[digito].push(arr[i]);
     }
     //volvamos a llener el arreglo original extrayendo el numero de lasc cosas (DEsencola) REcolecion
     int indiceArreglo =0;
     //recorremos las urnas enh ordenj estatico ( 0 al 9 )
     for ( int i=0; i<10;i++){
        //mientras la urna no este vacia 
        while(!urnas[i].empty()){
            //exrñamos el ´rimner elemento que ingreso ( regla fido)
            arr[indiceArreglo] = urnas[i].front();
            urnas[i].pop(); /// borramos la cola
            indiceArreglo++; //avanzamops la posicion de arreglo 
        }
     }
     //imprimimos las pasadas
     cout<<"FIN DE LA PASADA:" <<pasada <<" (exp=" <<exp <<"): ";
     imprimirArreglo(arr,n);
     pasada ++;
    }
}

// funcion principal
int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Arreglo original: ";
    imprimirArreglo(arr, n);

    radixSort(arr, n);

    cout << "Arreglo ordenado: ";
    imprimirArreglo(arr, n);

    return 0;
}