#include "Vertice.h"

using namespace std;

class Arista{
    private:
    int vi;
    int vj;
    public:
    Arista(){vi=0;vj=0;};
    Arista(Vertice i, Vertice d){vi=i.getId(); vj=i.getId();};
    int getVi(){return vi;};
    int getVj(){return vj;} ;
    void setVi(int i){vi= i;};
    void setVj(int d){vj= d;};
};
