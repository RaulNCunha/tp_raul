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

#include <algorithm> // Para usar a funcao transform

#include <cctype> // Para usar a funcao tolower


void le_arquivo(string nomeArquivo){
	
	ifstream arquivoEntrada;
	
	map<string, set<string>> mapArquivos;
	map<string, set<string>>::iterator iteratorMap;
	set<string> setArquivos;
	set<string>::iterator iteratorSet;
	
	try{
			
		arquivoEntrada.open(nomeArquivo);
		
		if(arquivoEntrada.fail()){
			
			throw(openFileException());
			
		}else if(arquivoEntrada.is_open()){
			
			string palavra;
			
			while(getline(arquivoEntrada, palavra, ' ')){ //Remove espaço
				
				istringstream palavra_stream(palavra);
				
				while (getline(palavra_stream, palavra, ',')) { //Remove virgula
					
					istringstream palavra_stream(palavra);
					
					while (getline(palavra_stream, palavra, '.')) { //Remove ponto
						
						istringstream palavra_stream(palavra);
						
						while (getline(palavra_stream, palavra, '-')) { //Remove hifen
							
							istringstream palavra_stream(palavra);
							
							while (getline(palavra_stream, palavra, '!')) { //Remove exclamacao
								
								istringstream palavra_stream(palavra);
								
								while (getline(palavra_stream, palavra, '?')) { //Remove interrogacao
									
									istringstream palavra_stream(palavra);
									
									while (getline(palavra_stream, palavra, ':')) { //Remove dois pontos
										
										istringstream palavra_stream(palavra);
										
										while (getline(palavra_stream, palavra, ';')) { //Remove ponto e virgula
											
											istringstream palavra_stream(palavra);
											
											while (getline(palavra_stream, palavra, '\'')) { //Remove aspas simples
												
												istringstream palavra_stream(palavra);
												
												while (getline(palavra_stream, palavra, '\"')) { //Remove aspas duplas
													
													istringstream palavra_stream(palavra);
													
													while (getline(palavra_stream, palavra, '[')) { //Remove colchete aberto
														
														istringstream palavra_stream(palavra);
														
														while (getline(palavra_stream, palavra, ']')) { //Remove colchete fechado
															
															istringstream palavra_stream(palavra);
															
															while (getline(palavra_stream, palavra, '{')) { //Remove chave aberta
																
																istringstream palavra_stream(palavra);
																	
																while (getline(palavra_stream, palavra, '}')) { //Remove chave fechada
																	
																	istringstream palavra_stream(palavra);
																	
																	while (getline(palavra_stream, palavra, '\n')) { //Remove enter (\n)
																		
																		istringstream palavra_stream(palavra);
																		
																		transform(palavra.begin(), palavra.end(), palavra.begin(), tolower);
																		
																		cout << palavra << endl;
																		/*
																		setArquivos.insert(nomeArquivo);
																		mapArquivos.insert(make_pair(palavra, setArquivos));
																		
																		for(iteratorMap = mapArquivos.begin(); iteratorMap != mapArquivos.end(); iteratorMap++){
																			
																			for(iteratorSet = setArquivos.begin(); iteratorSet != setArquivos.end(); iteratorSet++){
																				
																				cout << iteratorMap->first << ": " << iteratorMap->second << endl;
																			}
																		}
																		*/
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	catch(openFileException &erro){
		
		cout << erro.what() << ":" << " " << nomeArquivo << endl;
		//throw(erro);
	}
	catch(...){
		
		cout << "Erro nao identificado ocorreu" << endl;
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