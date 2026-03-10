#include <iostream>
using namespace std;

// Soma recursiva
int soma(int n){
    if(n == 0){
        return 0;
    }
    return n + soma(n-1);
}

// Soma com recursão de cauda
int somaTail(int n, int acumulador){
    if(n == 0){
        return acumulador;
    }
    return somaTail(n-1, acumulador+n);
}

// Soma iterativa
int somaIterativa(int n){
    int soma = 0;
    for(int i = 1; i <= n; i++){
        soma += i;
    }
    return soma;
}

// Multiplicação recursiva
int multiplicacao(int a, int b){
    if(b == 0){
        return 0;
    }
    return a + multiplicacao(a, b-1);
}

// Multiplicação com recursão de cauda
int multTail(int a, int b, int acumulador){
    if(b == 0){
        return acumulador;
    }
    return multTail(a, b-1, acumulador + a);
}

// Multiplicação iterativa
int multIterativa(int a, int b){
    int resultado = 0;
    for(int i = 0; i < b; i++){
        resultado += a;
    }
    return resultado;
}

// Fatorial recursivo
int fatorial(int n){
    if(n == 0){
        return 1;
    }
    return n * fatorial(n-1);
}

// Fatorial com recursão de cauda
int fatorialTail(int n, int acumulador){
    if(n == 0){
        return acumulador;
    }
    return fatorialTail(n-1, acumulador*n);
}

// Fatorial iterativo
int fatorialIterativo(int n){
    int resultado = 1;
    for(int i = 1; i <= n; i++){
        resultado *= i;
    }
    return resultado;
}

int main(){

    cout << "Soma recursiva: " << soma(5) << endl;
    cout << "Soma cauda: " << somaTail(5,0) << endl;
    cout << "Soma iterativa: " << somaIterativa(5) << endl;

    cout << endl;

    cout << "Multiplicacao recursiva: " << multiplicacao(3,4) << endl;
    cout << "Multiplicacao cauda: " << multTail(3,4,0) << endl;
    cout << "Multiplicacao iterativa: " << multIterativa(3,4) << endl;

    cout << endl;

    cout << "Fatorial recursivo: " << fatorial(5) << endl;
    cout << "Fatorial cauda: " << fatorialTail(5,1) << endl;
    cout << "Fatorial iterativo: " << fatorialIterativo(5) << endl;

    return 0;
}
