#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    int a, op;
    cout << "Butucul e de maxim 10 carti!\n\n";
    ButucScoatereInOrdine bO;
    ButucScoatereAleatoare bA;
    
    while(1){
        a = 1;
        cout << "---------------------\n";
        cout << "|0. Iesire          |\n";
        cout << "|1. Butoc simplu    |\n";
        cout << "|2. Butoc aleatoriu |\n";
        cout << "---------------------\n->";
        cin >> op;
        
        switch(op){
            case 0:{
                cout << "Sfarsit de program\n\n";
                exit (0);
            }
                break;
            case 1:{
                while(a){
                    cout << "-----------------------------\n";
                    cout << "|0. Iesire                  |\n";
                    cout << "|1. Adauga carte            |\n";
                    cout << "|2. Scoate carte            |\n";
                    cout << "|3. Arata cartile din butuc |\n";
                    cout << "-----------------------------\n->";
                    cin >> op;
                    
                    switch(op){
                        case 0:{
                            a = 0;
                        }
                            break;
                        case 1:{
                            int grad;
                            string tip;
                            cout << "Introdu gradul - ";
                            cin >> grad;
                            cout << "Introdu tipul - ";
                            cin >> tip;
                            CarteClass temp(grad,tip);
                            bO.adaugaCarte(temp);
                        }
                            break;
                        case 2:{
                            CarteClass temp = bO.scoateCarte();
                            temp.afiseazacartea();
                            cout << endl << endl;
                        }
                            break;
                        case 3:{
                            cout << endl;
                            bO.afisareButuc();
                        }
                            break;
                        default:{
                            cout << "Nu exista asa optiune\n\n";
                        }
                            break;
                    }
                }
            }
                break;
            case 2:{
                while(a){
                    cout << "-----------------------------\n";
                    cout << "|0. Iesire                  |\n";
                    cout << "|1. Adauga carte            |\n";
                    cout << "|2. Scoate carte            |\n";
                    cout << "|3. Arata cartile din butuc |\n";
                    cout << "-----------------------------\n->";
                    cin >> op;
                    
                    switch(op){
                        case 0:{
                            a = 0;
                        }
                            break;
                        case 1:{
                            int grad;
                            string tip;
                            cout << "Introdu gradul - ";
                            cin >> grad;
                            cout << "Introdu tipul - ";
                            cin >> tip;
                            CarteClass temp(grad,tip);
                            bA.adaugaCarte(temp);
                        }
                            break;
                        case 2:{
                            CarteClass temp = bA.scoateCarte();
                            temp.afiseazacartea();
                            cout << endl << endl;
                        }
                            break;
                        case 3:{
                            cout << endl;
                            bA.afisareButuc();
                        }
                            break;
                        default:{
                            cout << "Nu exista asa optiune\n\n";
                        }
                            break;
                    }
                }
            }
                break;
            default:{
                cout << "Nu exista asa optiune\n\n";
            }
                break;
        }
    }
}

