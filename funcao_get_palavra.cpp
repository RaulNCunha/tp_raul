#include "funcao_get_palavra.h"

#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;


string get_palavra(){
	
	string buscarPalavra;
	
	cout << "Digite a palavra para busca nos arquivos: " << endl;
	
	cin >> buscarPalavra;
	
	system("cls || clear");
	
	return buscarPalavra;
}
	