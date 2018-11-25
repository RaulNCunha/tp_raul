#include "funcao_get_nome_arquivo.h"
#include "funcao_get_palavra.h"
#include "funcao_le_arquivo.h"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <map>

using std::map;

#include <set>

using std::set;

typedef map<string, set<string>> MAP;
typedef map<string, set<string>>::iterator IT_MAP;
typedef set<string> SET;
typedef set<string>::iterator IT_SET;

// PARA O CORRETO FUNCIONAMENTO, OS ARQUIVOS A SEREM LIDOS DEVEM FICAR NA PASTA "release" PORQUE NO CODELITE É ASSIM QUE FUNCIONA
int main(int argc, char **argv){
	
	string nomeArquivo;
	int contadorArquivos = 0;
	string buscarPalavra;
	
	MAP mapArquivos;
	IT_MAP iteratorMap;
	SET setArquivos;
	IT_SET iteratorSet;
	
	while(1){
		
		cout << "========================================================================================" << endl;
		cout << "Para CONTINUAR a insercao de arquivos digite o nome do arquivo com a extensao .txt " << endl;
		cout << "Para FINALIZAR a insercao de arquivos digite 'FIM' " << endl;
		cout << "========================================================================================" << endl;
		
		nomeArquivo = get_nome_arquivo();
		
		if(nomeArquivo != "FIM"){
			
			contadorArquivos++;
		}
		
		if(nomeArquivo == "FIM"){
			
			system("cls || clear");
			break;
		}
		
		le_arquivo(nomeArquivo, &mapArquivos, &iteratorMap, &setArquivos, &iteratorSet);
	}
	
	while(contadorArquivos != 0){
		
		cout << "========================================================================================" << endl;
		cout << "Para CONTINUAR a busca de palavras digite a palavra a ser buscada" << endl;
		cout << "Para FINALIZAR a busca de palavras digite 'FIM' " << endl;
		cout << "========================================================================================" << endl;
		
		buscarPalavra = get_palavra();
		
		if(buscarPalavra == "FIM"){
			
			system("cls || clear");
			break;
		}
		
		iteratorMap = mapArquivos.find(buscarPalavra);
		
		if(iteratorMap == mapArquivos.end()){
			
			system("cls || clear");
			cout << "A palavra: " << buscarPalavra << endl;
			cout << "Nao existe em nenhum dos arquivos adicionados!" << endl;
		}
		else{
			
			//cout << iteratorMap->first << "\t";
			
			for(iteratorSet = iteratorMap->second.begin(); iteratorSet != iteratorMap->second.end(); iteratorSet++){
				
				cout << *iteratorSet << endl;
			}
			
			cout << endl;
		}
	}
	
	return 0;
}