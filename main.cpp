// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>          // std::list
#include <set>
using namespace std;


//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
bool sonPares(queue<int> mi_cola)
{

    while(!mi_cola.empty()) // verifica que cola no este vacia
    {
     int num = mi_cola.front() %2; // encuenta el residuo de la division

        if (num == 0)
            return true;  // si es par
        else
            return false; // si es impar
        mi_cola.pop();
    }

}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
   while(!mi_lista.empty()) // verifica que la lista no este vacia
    {
     int num = mi_lista.front() %2; // encuenta el residuo de la division

        if (num == 0)
            return true;  // si es par
        else
            return false; // si es impar
        mi_lista.pop_front(); // saca elementos de una lista
    }
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{
    while(!mi_cola.empty()) // verifica que cola no esta vacioa
    {
     if (str==mi_cola.front()) //si caracter ingresado es string
        return true; // valor verdadero
     mi_cola.pop(); // saca el elemento de la pila

    }
 return false;

}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    while(!mi_lista.empty()) // entra al ciclo siempre y cuando la lista no este vacia
    {
     if (str==mi_lista.front()) // si el caracter es string
        return true; // valor verdadero
     mi_lista.pop_front(); // saca un elemento de la lista

    }
   return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
    int s=0;
    while(!mi_cola.empty()) // verifica que cola no este vacia
    {
      s = s + (mi_cola.front()); // suma los elementos de mi cola
      mi_cola.pop();
    }

    return s;
}

//devuelve la suma de la cantidad letras de cada cadena de la lista
int sumarLetras(list<string> mi_lista)
{
    int nletras=0; //inicializa el contador de letras
    while(!mi_lista.empty()) // mientras lista no este vacia
    {
        string txt=mi_lista.front(); // convierte la lista a un campo caracter
        nletras=nletras+txt.length(); // suma los caracteres
        mi_lista.pop_front(); // saca de la lista
    }
    return nletras; //devuelve la cantidad en letras

}

//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
    string lista1, lista2; // crear campos para convertir la lista en cadenas

    multiset<char> mi_set; // multi set para ordenar las listas
    while(!mi_lista.empty()) // si lista no esta vacia
    {
        lista1=lista1+mi_lista.front(); // acumula los elementos de mi lista en un campo string
        mi_set.insert(mi_lista.front()); // interta elementos
        mi_lista.pop_front();
    }
    multiset<char>::iterator it=mi_set.begin(); // recorro la lista desde el principio
    while(it!=mi_set.end()) // si lista no esta vacia
    {
        lista2=lista2+*it; // meto la lista para al campo string
        it++;
    }
    if(lista1==lista2) // si listas son iguales
       return true; // verdadero

   return false; // falso
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
