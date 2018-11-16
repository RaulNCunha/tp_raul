#include "funcao_le_arquivo.h"
#include "openFileException.h"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#include <fstream>

using std::ifstream;


void le_arquivo(string nomeArquivo){
	
	ifstream arquivoEntrada;
	
	try{
			
		arquivoEntrada.open(nomeArquivo);
		
		if(arquivoEntrada.fail()){
			
			throw(openFileException());
			
		}else if(arquivoEntrada.is_open()){
			
			string linha;
			
			while(getline(arquivoEntrada, linha)){
				
				cout << linha << endl;
			}
		}
	}
	catch(openFileException &erro){
		
		cout << erro.what() << ":" << " " << nomeArquivo << endl;
		//throw(erro);
	}
	
	arquivoEntrada.close();
}