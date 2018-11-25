/*
 * Protótipo da função de leitura de arquivos
*/

#include <iostream>

using std::string;

#include <map>

using std::map;
using std::pair;

#include <set>

using std::set;


void le_arquivo(string nomeArquivo, 
				map<string, set<string>> *mapArquivos, 
				map<string, set<string>>::iterator *iteratorMap, 
				set<string> *setArquivos, 
				set<string>::iterator *iteratorSet);