#ifndef OPENFILEEXCEPTION_H
#define OPENFILEEXCEPTION_H

#include <iostream>

using std::string;


class openFileException{
	
	const string mensagem;
public:
	openFileException(string nomeArquivo);
	const string what() const;
	~openFileException();

};

#endif // OPENFILEEXCEPTION_H
