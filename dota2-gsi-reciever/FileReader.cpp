#include "FileReader.h"

char * FileReader::Read()
{
	char buffer[10000] = "\0";

	fHandle = CreateFile(L"gsi-latest.bin", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
	if (fHandle != INVALID_HANDLE_VALUE) {
		DWORD tmpBytesRead = 0;

		LARGE_INTEGER fileSize;

		GetFileSizeEx(fHandle, &fileSize);

		ReadFile(fHandle, buffer, fileSize.QuadPart, &tmpBytesRead, NULL);	
	}

	CloseHandle(fHandle);

	DeleteFile(L"gsi-latest.bin");

	return buffer;
}
