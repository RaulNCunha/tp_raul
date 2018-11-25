#include "funcao_get_nome_arquivo.h"
#include "funcao_get_palavra.h"
#include "funcao_le_arquivo.h"
#include "openFileException.h"

#include <iostream>

using std::string;

#include <map>

using std::map;
using std::pair;

#include <set>

using std::set;


typedef map<string, set<string>> MAP;
typedef map<string, set<string>>::iterator IT_MAP;
typedef set<string> SET;
typedef set<string>::iterator IT_SET;

void teste(){
	
	string nomeArquivo;
	string buscarPalavra;

	MAP mapArquivos;
	IT_MAP iteratorMap;
	SET setArquivos;
	IT_SET iteratorSet;


	string get_palavra();

	void le_arquivo(string nomeArquivo, 
					map<string, set<string>> *mapArquivos, 
					map<string, set<string>>::iterator *iteratorMap, 
					set<string> *setArquivos, 
					set<string>::iterator *iteratorSet);
					
	string get_nome_arquivo();
}
