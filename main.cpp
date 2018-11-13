#include <iostream>
#include "funcao_leitura_arquivo.h"

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char **argv){
	
	//string nomeArquivo = "C:/Users/adole/Documents/PDS2/TP_Raul/testeFuncao.txt";
	string nomeArquivo;
	
	cin >> nomeArquivo;
	
	cout << nomeArquivo << endl;
	
	//teste();
	leArquivo(nomeArquivo);
	
	return 0;
}
