#include <iostream>
using namespace std;

class Arista{
    private:
    int vi;
    int vj;
    public:
    Arista();
    Arista(int i, int d){vi=i; vj=d;};
    int getId(){return vi;};
    int getDato(){return vj;} ;
    void setId(int i){vi= i;};
    void setDato(int d){vj= d;};
};


int main() {
}