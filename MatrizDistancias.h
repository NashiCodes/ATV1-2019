class MatrizDistancias
{
public:
    MatrizDistancias(int ordem);
    ~MatrizDistancias();
    int get(int i, int j);
    void set(int i, int j, int val);
    void imprime();

private:
    int n;
    int *vet; // vetor de elementos não nulos.
    int detInd(int i, int j);
};

