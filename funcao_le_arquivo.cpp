#include "funcao_le_arquivo.h"
#include "openFileException.h"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#include <fstream>

using std::ifstream;

#include <map>

using std::map;

#include <set>

using std::set;

#include <sstream>

using std::istringstream;


void le_arquivo(string nomeArquivo){
	
	ifstream arquivoEntrada;
	
	try{
			
		arquivoEntrada.open(nomeArquivo);
		
		if(arquivoEntrada.fail()){
			
			throw(openFileException());
			
		}else if(arquivoEntrada.is_open()){
			
			string linha, palavra;
			
			while(getline(arquivoEntrada, linha)){
				
				//cout << linha << endl;
				istringstream linha_stream(linha);
				//map<std::string, int> Map;
				
				while (getline(linha_stream, palavra, ' ')) {
					
					cout << palavra << endl;
					//total ++;
					// Verifica se existe palavra no Map
					/*
					if(Map.count(palavra) != 0){
						
						// Caso exista    
						Map[palavra]++;
						
					}
					else {
						
						// Caso não exista
						Map[palavra] = 1;
						
					}*/
				}
			}
		}
	}
	catch(openFileException &erro){
		
		cout << erro.what() << ":" << " " << nomeArquivo << endl;
		//throw(erro);
	}
	
	arquivoEntrada.close();
}
/*
	typedef std::map<std::string, int> MapType;
	typedef std::map<std::string, int>::iterator IteratorType;
   
    MapType map;
    float total = 0.0;
    std::string linha, palavra;
    while (std::getline(std::cin, linha)) {
      std::istringstream linha_stream(linha);
      while (std::getline(linha_stream, palavra, ' ')) {
        total ++;
        // Verifica se existe palavra no Map
        if(map.count(palavra) != 0){
            // Caso exista    
            map[palavra]++;
            
        }
        else {
            // Caso não exista
            map[palavra] = 1;
            
        }
      }
    }
    
    IteratorType it;

    for ( it = map.begin(); it != map.end(); it++ )
    {
        std::cout << it->first
                  << " "
                  << it->second
                  << " "
                  << it->second/total
                  << std::endl ;
    }
    return 0;
}
*/