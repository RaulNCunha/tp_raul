#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "funcao_get_nome_arquivo.h"

#include "funcao_le_arquivo.h"


// PARA O CORRETO FUNCIONAMENTO, OS ARQUIVOS A SEREM LIDOS DEVEM FICAR NA PASTA "release"
int main(int argc, char **argv){
	
	int numArquivos = 0;
	
	do{
		cout << "Para CONTINUAR a insercao de nomes digite o nome do proximo arquivo com a extensao .txt " << endl;
		
		cout << "Para FINALIZAR a insercao de nomes digite 0 " << endl;
		
		le_arquivo(get_nome_arquivo());
		
		numArquivos++;
		
		if(get_nome_arquivo() == "0"){
			
			break;
		}
		
	}while(1);
	
	cout << "numero de arquivos " << numArquivos << endl;
	return 0;
}
