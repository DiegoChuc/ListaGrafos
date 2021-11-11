class Vertice{
    private:
    int id;
    int dato;
    public:
    Vertice(){id=0; dato =0;};
    Vertice(int i, int d){id=i; dato=d;};
    int getId(){return id;};
    int getDato(){return dato;};
    void setId(int i){id= i;};
    void setDato(int d){dato= d;};
};

