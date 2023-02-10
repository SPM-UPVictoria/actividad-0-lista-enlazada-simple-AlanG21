#include <iostream>
using namespace::std;
struct nodo{
    int numero;
    nodo* sig;
} *primero, *ultimo;

void insertarNodo();
void mostrarLista();



int main() {

    int numIngresar;

    cout << "\n\n Cuantos elementos ingresara \n";
    cin >> numIngresar;

    for (int i = 0; i < numIngresar; i++) {
        insertarNodo();
    }

    cout << "\n\n Lista \n";
    mostrarLista();
    return 0;
}


void insertarNodo(){
    nodo* nuevo = new nodo();
    cout << " Escribe un numero: ";
    cin >> nuevo->numero;

    if(primero == NULL){
        primero = nuevo;
        primero->sig = NULL;
        ultimo = nuevo;
    }else{
        ultimo->sig = nuevo;
        nuevo->sig = NULL;
        ultimo = nuevo;
    }
    cout << "\n numero guardado\n\n";
}

void mostrarLista(){
    nodo* actual = new nodo();
    actual = primero;
    if(primero != NULL){

        while(actual != NULL){
            cout << " " << actual->numero  << endl;
            actual = actual->sig;
        }

    }else{
        cout  << "\n la lista esta vacia\n\n";
    }
}