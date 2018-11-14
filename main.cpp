#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "funcao_get_nome_arquivo.h"

#include "funcao_le_arquivo.h"


// PARA O CORRETO FUNCIONAMENTO, OS ARQUIVOS A SEREM LIDOS DEVEM FICAR NA PASTA "release"
int main(int argc, char **argv){
	
	le_arquivo(get_nome_arquivo());
	
	return 0;
}
