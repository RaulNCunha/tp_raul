#include "funcao_leitura_arquivo.h"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#include <fstream>

using std::ifstream;


/*
void teste(){
	
	cout << "Teste funcao" << endl;
}
*/

void leArquivo(string nomeArquivo){
	
	ifstream arquivoEntrada;
	
	arquivoEntrada.open(nomeArquivo);
	
	if(!arquivoEntrada.is_open()){
		
		cout << "Erro na abertura do arquivo" << endl;
		exit(1);
		
	}else{
		
		string linha;
		
		while(getline(arquivoEntrada, linha)){
			
			cout << linha << endl;
		}
		
		arquivoEntrada.close();		
	}
	//return 0;
}