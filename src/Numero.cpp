#include "Numero.h"

Numero::Numero()
{
    numero = 0;
}

Numero::~Numero(){}

Numero::Numero(int unNumero)
{
    numero = unNumero;
}

void Numero::setNumero(int num)
{
    numero = num;
}

int Numero::getNumero()
{
    return numero;
}

bool Numero::esRepunit()
{
    int contador = 0, digito = 0;
    int num = numero;
    bool esRepunit = true;

    while(num != 0)
    {
        contador++;
        digito = num%10;
        num = num/10;
        if(digito != 1){
            esRepunit = false;
        }
    }

    return esRepunit;
}

bool Numero::esPrimo(){

    int contador = 0;

    if(numero != 1){
        for(int i = 1; i <= numero; i++){

        if(numero % i == 0){
                contador++;
            }
        }
    }

    if(contador == 2){
        return true;
    }
    else {
        return false;
    }
}

bool Numero::esArmstrog()
{
    int digito, num = numero;
    int suma = 0;
    int cont = 0;

    while(num > 0)
    {
        cont++;
        num /= 10;
    }
    num = numero;
    while(num > 0)
    {
        digito = num%10;
        suma += pow(digito,cont);
        num /= 10;
    }

    if(suma == numero){
        return true;
    }
    else{
        return false;
    }
}

int Numero::maximoDiv(int numb2)
{
    int mayor, menor, mcd, aux;


        if(numero == numb2){
            mcd = numero;
            return mcd;
        }
        else {
            mayor = max(numero,numb2);
            menor = min(numero,numb2);

        if(menor != 0){
            do{
                mcd = menor;
                menor = mayor % menor;
                mayor = mcd;
            }while(menor != 0);
            return mcd;
        }
        else {
            return 0;
        }
    }
}

int Numero::espejo()
{
    int num = numero;
    int digito, numInv = 0;

   while(num>0){
        digito = num%10;
		num = num/10;
		numInv = numInv * 10 + digito;
	}
    return numInv;
}

int Numero::equilibrado()
{
    return espejo() + numero;
}

int Numero::valorCubo()
{
    int i, num, impar, contador, resultado = 0;
    num = numero;
    impar = num * (num - 1);
    for (i = 1, contador = 1; contador  <= num; i += 2, contador++)
    {
    resultado += impar + i;
    }
    return resultado;
}

int Numero::fibocci()
{
 int meses = numero ,num1=0,num2=1,suma=1;

	for(int i = 0 ;i < meses; i++){
		suma = num1 + num2;
		num1 = num2;
		num2 = suma;
	}

	return suma;

}
