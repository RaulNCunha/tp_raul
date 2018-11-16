#ifndef OPENFILEEXCEPTION_H
#define OPENFILEEXCEPTION_H

#include <iostream>

using std::string;


class openFileException{
	
	const char* mensagem;
public:
	openFileException();
	const char* what() const;
	~openFileException();

};

#endif // OPENFILEEXCEPTION_H
