#include <iostream>
using namespace std;

class CarteClass{
public:
    int grad;
    string tip;
    
    CarteClass(){
        grad = 0;
        tip = "";
    }
    
    CarteClass(int grad, string tip) : grad(grad), tip(tip) {}
    
    void setCarte(int grad, string tip){
        this->grad = grad;
        this->tip = tip;
        
    }
    
    void afiseazacartea() const {
        cout << " --" << grad << " " << tip << "-- ";
    }
};

class ButucClass{
protected:
    static const int sizeofb = 10;
    CarteClass carti[sizeofb];
    int cursize;
public:
    
    ButucClass() : cursize(0) {}
    
    void adaugaCarte(const CarteClass& carte) {
        if (cursize < sizeofb) {
            carti[cursize++] = carte;
        }
    }
    
    virtual CarteClass scoateCarte() = 0;

    void afisareButuc() const {
        for (int i = 0; i < cursize; ++i) {
            carti[i].afiseazacartea();
        }
        cout << endl;
    }
};

class ButucScoatereInOrdine : public ButucClass {
private:
    int index;

public:
    
    ButucScoatereInOrdine() : index(0) {}

    CarteClass scoateCarte() override {
        if (index < cursize) {
            return carti[index++];
        } else {
            CarteClass d(-1, "Nu mai sunt carti in butuc!");
            return d;
        }
    }
};

class ButucScoatereAleatoare : public ButucClass {
public:
    ButucScoatereAleatoare() {}

    CarteClass scoateCarte() override {
        if (cursize > 0) {
            int indexAleator = rand() % cursize;
            swap(carti[indexAleator], carti[--cursize]);
            return carti[cursize];
        } else {
            return CarteClass(-1, "Nu mai sunt carti in butuc!");
        }
    }
};
