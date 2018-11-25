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
using std::pair;

#include <set>

using std::set;

#include <sstream>

using std::istringstream;

#include <algorithm> // Para usar a funcao transform

#include <cctype> // Para usar a funcao tolower


void le_arquivo(string nomeArquivo, 
				map<string, set<string>> *mapArquivos, 
				map<string, set<string>>::iterator *iteratorMap, 
				set<string> *setArquivos, 
				set<string>::iterator *iteratorSet){
	
	ifstream arquivoEntrada;
	
	try{
			
		arquivoEntrada.open(nomeArquivo);
		
		if(arquivoEntrada.fail()){
			
			system("cls || clear");
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
																		
																		setArquivos->insert(nomeArquivo);
																		mapArquivos->insert(pair<string, set<string>>(palavra, *setArquivos));
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