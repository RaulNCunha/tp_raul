#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <map>

using std::map;

#include <set>

using std::set;

#include "funcao_get_nome_arquivo.h"

#include "funcao_le_arquivo.h"

typedef map<string, set<string>> MAP;
typedef map<string, set<string>>::iterator IT_MAP;
typedef set<string> SET;
typedef set<string>::iterator IT_SET;

// PARA O CORRETO FUNCIONAMENTO, OS ARQUIVOS A SEREM LIDOS DEVEM FICAR NA PASTA "release"
int main(int argc, char **argv){
	
	string nomeArquivo;
	
	MAP mapArquivos;
	IT_MAP iteratorMap;
	SET setArquivos;
	IT_SET iteratorSet;
	
	while(1){
		
		cout << "========================================================================================" << endl;
		cout << "Para CONTINUAR a insercao de nomes digite o nome do arquivo com a extensao .txt " << endl;
		cout << "Para FINALIZAR a insercao de nomes digite '0' " << endl;
		cout << "========================================================================================" << endl;
		
		nomeArquivo = get_nome_arquivo();
		
		if(nomeArquivo == "0"){
			
			system("cls || clear");
			break;
		}
		
		le_arquivo(nomeArquivo, &mapArquivos, &iteratorMap, &setArquivos, &iteratorSet);
	}
	
	cout << "Digite a palavra para buscar:" << endl;
	
	string buscarPalavra;
	//cin >> buscarPalavra;
	
	cout << "A palavra " << buscarPalavra << " esta presente nos seguintes arquivos:" << endl;
	
	for(iteratorMap = mapArquivos.begin(); iteratorMap != mapArquivos.end(); iteratorMap++){
		
		cout << iteratorMap->first << ": " << endl;
		
		for(iteratorSet = iteratorMap->second.begin(); iteratorSet != iteratorMap->second.end(); iteratorSet++){
			
			cout << "\t" << *iteratorSet << endl;
		}
	}
	
	return 0;
}