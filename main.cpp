#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;
int main() {
    srand(time(0));
    int numsecret = (rand() % 100) + 1;
    int x;
    bool acertou = false;
    int cont = 0;
    while(acertou == false) {
        cout << "Advinhe o numero secreto entre 1 e 100, caso queira desistir digite 0: " << "\n";
        cin >> x;
        if (x == 0){
            break;
        }
        cont++;
        if(x == numsecret){
            acertou = true;
            break;
        } else if (x > numsecret) {
            cout << "O numero e MENOR!" << "\n";
        } else {cout << "O numero e MAIOR!" << "\n";}

    }
    if(acertou == true){
        cout << "ACERTOU! O Numero e "<< numsecret << "\n";
        cout << "Voce demorou " << cont << " tentativas!" << "\n";
    }
    if(x == 0){
        cout << "VOCE DESISTIU! Voce tentou "<< cont << " vezes." << "\n"; 
    }
    return 0;
}