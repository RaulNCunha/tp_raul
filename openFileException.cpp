#include "openFileException.h"

#include <iostream>

using std::cout;
using std::endl;


openFileException::openFileException(){
	
	mensagem = "Erro na abertura do arquivo";
}

const char* openFileException::what() const{
	
	return mensagem;
}

openFileException::~openFileException(){
}

