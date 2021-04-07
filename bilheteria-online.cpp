#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

using namespace std;

int main(){

    int loopGeral = 0;
    
    while(loopGeral == 0){

    system("clear||cls");

    cout << "Filmes em cartaz" << endl;
    cout << "******" << endl;
    cout << "1- Vingadores 4 - Marvel" << endl;
    cout << "2- Como Treinar Seu Dragao 3" << endl;
    cout << "3- Dumbo" << endl;
    cout << "4- Shazam" << endl;
    cout << "-------------------" << endl;
    cout << "Escolha o filme que deseja assitir, ou, aperte '5' para sair!!!" << endl;

    char menu;
    cin >> menu;

    int quantidadeIngressos;
    float ingressos = 12.50;
    float valorPedido;
    int confirmacaoCompra;
    int loopMenuCompra = 0;

    system("clear||cls");
    
    switch(menu){
        case '1':
            cout << "Voce escolheu 'Vingadores 4 - Marvel'" << endl;
            cout << "-------------------------------------" << endl;
            cout << "Quantos ingressos deseja comprar?" << endl;
            cin >> quantidadeIngressos;
            valorPedido = (float)quantidadeIngressos * ingressos;
            cout << "Ingressos: " << quantidadeIngressos << "     Valor: R$" << valorPedido << endl;
            cout << "-------" << endl;

            while(loopMenuCompra == 0){

            cout << "1- Confirmar Compra.        2- Recusar Compra." << endl;
            cin >> confirmacaoCompra;
            system("clear||cls");
        
            if(confirmacaoCompra == 1){
                cout << "Compra Confirmada!" << endl;
                loopMenuCompra = 1;
            } else if(confirmacaoCompra == 2){
                cout << "Compra Recusada!" << endl;
                loopMenuCompra = 1;
            } else if(confirmacaoCompra != 1 != 2){
                cout << "Porfavor, confirme ou recuse sua compra!" << endl;
            }
            }// while loopMenuCompra
            system("pause");
        break;
               
         case '2':
            cout << "Voce escolheu 'Como Treinar Seu Dragao 3'" << endl;
            cout << "-------------------------------------" << endl;
            cout << "Quantos ingressos deseja comprar?" << endl;
            cin >> quantidadeIngressos;
            valorPedido = (float)quantidadeIngressos * ingressos;
            cout << "Ingressos: " << quantidadeIngressos << "     Valor: R$" << valorPedido << endl;
            cout << "-------" << endl;

            while(loopMenuCompra == 0){

            cout << "1- Confirmar Compra.        2- Recusar Compra." << endl;
            cin >> confirmacaoCompra;
            system("clear||cls");
        
            if(confirmacaoCompra == 1){
                cout << "Compra Confirmada!" << endl;
                loopMenuCompra = 1;
            } else if(confirmacaoCompra == 2){
                cout << "Compra Recusada!" << endl;
                loopMenuCompra = 1;
            } else if(confirmacaoCompra != 1 != 2){
                cout << "Porfavor, confirme ou recuse sua compra!" << endl;
            }
            }// while loopMenuCompra
            system("pause");
        break;

        case '3':
            cout << "Voce escolheu 'Dumbo'" << endl;
            cout << "-------------------------------------" << endl;
            cout << "Quantos ingressos deseja comprar?" << endl;
            cin >> quantidadeIngressos;
            valorPedido = (float)quantidadeIngressos * ingressos;
            cout << "Ingressos: " << quantidadeIngressos << "     Valor: R$" << valorPedido << endl;
            cout << "-------" << endl;

            while(loopMenuCompra == 0){

            cout << "1- Confirmar Compra.        2- Recusar Compra." << endl;
            cin >> confirmacaoCompra;
            system("clear||cls");
        
            if(confirmacaoCompra == 1){
                cout << "Compra Confirmada!" << endl;
                loopMenuCompra = 1;
            } else if(confirmacaoCompra == 2){
                cout << "Compra Recusada!" << endl;
                loopMenuCompra = 1;
            } else if(confirmacaoCompra != 1 != 2){
                cout << "Porfavor, confirme ou recuse sua compra!" << endl;
            }
            }// while loopMenuCompra
            system("pause");
        break;

        case '4':
            cout << "Voce escolheu 'Shazam'" << endl;
            cout << "-------------------------------------" << endl;
            cout << "Quantos ingressos deseja comprar?" << endl;
            cin >> quantidadeIngressos;
            valorPedido = (float)quantidadeIngressos * ingressos;
            cout << "Ingressos: " << quantidadeIngressos << "     Valor: R$" << valorPedido << endl;
            cout << "-------" << endl;

            while(loopMenuCompra == 0){

            cout << "1- Confirmar Compra.        2- Recusar Compra." << endl;
            cin >> confirmacaoCompra;
            system("clear||cls");
        
            if(confirmacaoCompra == 1){
                cout << "Compra Confirmada!" << endl;
                loopMenuCompra = 1;
            } else if(confirmacaoCompra == 2){
                cout << "Compra Recusada!" << endl;
                loopMenuCompra = 1;
            } else if(confirmacaoCompra != 1 != 2){
                cout << "Porfavor, confirme ou recuse sua compra!" << endl;
            }
            }// while loopMenuCompra
            system("pause");
        break;

        case '5':
            loopGeral = 1;
        break;
        
        default:
            cout << "Escolha um dos filmes em cartaz, ou, digite '5' para sair!!!" << endl;
            system("pause");
        break;
       
    }
    
 } // while 'loopGeral'

    system("pause");
    
}