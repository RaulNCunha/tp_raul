#include "funcao_le_arquivo.h"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#include <fstream>

using std::ifstream;


// PARA O CORRETO FUNCIONAMENTO, OS ARQUIVOS A SEREM LIDOS DEVEM FICAR NA PASTA "release"
void le_arquivo(string nomeArquivo){
	
	do{
		
		try{
			
			ifstream arquivoEntrada;
		
			arquivoEntrada.open(nomeArquivo);
			
			if(arquivoEntrada.fail()){
				
				throw(openFileException(nomeArquivo));
				
			}else{
				
				while(getline(arquivoEntrada, linha)){
					
					cout << linha << endl;
			}
			
			arquivoEntrada.close();		
		}
		
		catch(openFileException &erro){
			
			throw(erro);
		}
	
	}while(arquivoEntrada);
}