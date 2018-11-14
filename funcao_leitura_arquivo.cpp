#include "funcao_leitura_arquivo.h"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#include <fstream>

using std::ifstream;
using std::ofstream;


// PARA O CORRETO FUNCIONAMENTO, OS ARQUIVOS A SEREM LIDOS DEVEM FICAR NA PASTA "release"
void leArquivo(string nomeArquivo){
	
	ifstream arquivoEntrada;
	
	arquivoEntrada.open(nomeArquivo);
	
	if(arquivoEntrada.fail()){
		
		cout << "Erro na abertura do arquivo" << endl;
		exit(1);
		
	}else{
		
		string linha;
		
		while(getline(arquivoEntrada, linha)){
			
			//cout << linha << endl;
		}
		
		arquivoEntrada.close();		
	}
	//return 0;
}