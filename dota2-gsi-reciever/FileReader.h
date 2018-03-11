#pragma once

#include <Windows.h>

class FileReader {
public:
	FileReader() {}
	~FileReader() {}

	char* Read();
private:
	HANDLE fHandle;
};