#include <iostream>
#include <math.h>
using namespace std;

class Punkt
{
    float x,y;
    string nazwa;

public:
    void wyswietl()
    {
        cout<< nazwa << " (" <<x << "," << y << ")" << endl;
    }
    Punkt(string n="S", float a=0, float b=0)
    {
        nazwa=n;
        x=a;
        y=b;
    }
};


class Kolo : public Punkt
{
protected:


    float r;
    string nazwa;

public:
    void wyswietl()
    {
        cout << "Kolo o nazwie " << nazwa << endl;
        cout << "Srodek kola: " << endl;
        Punkt::wyswietl();
        cout << "Promien: "<<r << endl;
        cout << "Pole kola: " << M_PI*r*r<<endl;
    }
    Kolo(string nk="Kolko",string np="S", float a=0, float b=0, float pr=1)
    :Punkt(np,a,b)
    {
        nazwa=nk;
        r=pr;
    };
};

class Kula : public Kolo
{
    public:
    Kula(string n="Kulka", string ns="S",float a=0, float b=0, float pr=1)
    :Kolo(n,ns,a,b,pr)
    {

    }

    void wyswietl()
    {
        cout << "Kula o nazwie " << nazwa << endl;
        cout << "Srodek kuli: " << endl;
        Kolo::wyswietl();
        cout << endl << "Objetosc kuli: " << endl << 4*M_PI*r*r*r/3;

    }
};

int main()
{
    Kolo k1;
    k1.wyswietl();
    cout << endl << endl;
    Kula K1("Moja kula","Srodek",2,3,2.5);
    K1.wyswietl();

    return 0;
}
