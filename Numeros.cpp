#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include "Arista.h"

using namespace std;

int main() 
{

  //almacenamos el input como un vector
  string input_str;
  vector<int> vect;

  getline( cin, input_str);

  stringstream ss(input_str);

  int i;

  while (ss >> i)
  {
    vect.push_back(i);

    if (ss.peek() == ',')
    ss.ignore();
  }
  
  //guardamos en una variable la longitud del vector
  int size = vect.size();


  //creamos un grafo como conjunto de vertices
  //el id del vertice se le asignara por orden de elemento
  vector<Vertice> grafo;

  //Creamos otro vector que va a guardar las relaciones de los vertices
  //dichas relaciones son las aristas

  vector<Arista> aristas;

  //variable auxiliares
  int num = 0;
  Vertice v;
  Arista a;

  while(num < size){
    //le asignamos a cada grafo su respectivo vertice junto con el id
    v.setDato(vect[num]);
    v.setId(num);
    grafo.push_back(v);
    num++;

 
  }
  
  for(int i=0; i < size-1;i++){
    int j;
    j = i+1;
  //establecemos la relacion de la arista con el id y lo almacenamos en vector
  a.setVi(grafo[i].getId());
  a.setVj(grafo[j].getId());
  aristas.push_back(a);
  }


  //imprimimos grafo
  for (int i = 0; i < grafo.size(); i++){
    //datos dentro del vertice
        cout<<grafo[i].getDato()<< endl;
    //id del vertice
        //cout<<grafo[i].getId()<< endl;
  }

   //imprimimos aristas
  for (int i = 0; i < aristas.size(); i++){
        cout<<aristas[i].getVi()<< endl;
        cout<<aristas[i].getVj()<< endl;
  }

}