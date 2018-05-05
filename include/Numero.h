#ifndef NUMERO_H
#define NUMERO_H
#include <string>
#include <math.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

class Numero
{
    public:
        Numero();
        Numero(int unNumero);
        void setNumero(int unNumero);
        int getNumero();
        bool esRepunit();
        bool esPrimo();
        bool esArmstrog();
        int maximoDiv(int numb2);
        int espejo();
        int equilibrado();
        int valorCubo();
        int fibocci();
        virtual ~Numero();

    protected:

    private:
        int numero;
};


#endif // NUMERO_H
