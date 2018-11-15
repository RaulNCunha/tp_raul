#include "openFileException.h"

#include <iostream>

using std::cout;
using std::endl;


openFileException::openFileException(string nomeArquivo){
	
	mensagem = 
}

const string openFileException::what() const{
	
	return mensagem;
}

openFileException::~openFileException(){
}

