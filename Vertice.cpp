#include <iostream>
using namespace std;

class Vertice{
    private:
    int id;
    int dato;
    public:
    Vertice();
    Vertice(int i, int d){id=i; dato=d;};
    int getId(){return id;};
    int getDato(){return dato;};
    void setId(int i){id= i;};
    void setDato(int d){dato= d;};
};


int main() {
}