#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "funcao_get_nome_arquivo.h"

#include "funcao_le_arquivo.h"


// PARA O CORRETO FUNCIONAMENTO, OS ARQUIVOS A SEREM LIDOS DEVEM FICAR NA PASTA "release"
int main(int argc, char **argv){
	
	string nomeArquivo;
	
	while(1){
		
		cout << "========================================================================================" << endl;
		cout << "Para CONTINUAR a insercao de nomes digite o nome do proximo arquivo com a extensao .txt " << endl;
		cout << "Para FINALIZAR a insercao de nomes digite 0 " << endl;
		cout << "========================================================================================" << endl;
		
		nomeArquivo = get_nome_arquivo();
		
		if(nomeArquivo == "0"){
			
			break;
		}
		
		le_arquivo(nomeArquivo);
		
	}
	
	return 0;
}