#include "funcao_le_arquivo.h"
#include "openFileException.h"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#include <fstream>

using std::ifstream;


// PARA O CORRETO FUNCIONAMENTO, OS ARQUIVOS A SEREM LIDOS DEVEM FICAR NA PASTA "release"
void le_arquivo(string nomeArquivo){
	
	ifstream arquivoEntrada;
	
	try{
			
		arquivoEntrada.open(nomeArquivo);
		
		if(arquivoEntrada.fail()){
			
			throw(openFileException(nomeArquivo));
			
		}else if(arquivoEntrada.is_open()){
			
			string linha;
			
			while(getline(arquivoEntrada, linha)){
				
				cout << linha << endl;
			}
		}
		
		arquivoEntrada.close();		
	}
	catch(openFileException &erro){
		
		erro.what();
		//throw(erro);
	}
}