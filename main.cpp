#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "funcao_leitura_arquivo.h"


int main(int argc, char **argv){
	
	string nomeArquivo;
	
	cin >> nomeArquivo;
	
	leArquivo(nomeArquivo);
	
	return 0;
}
