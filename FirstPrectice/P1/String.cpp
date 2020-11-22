#include "String.h"

void ClearMemAddress(char* str) {
	// TODO
	//str = nullptr;
}

int Length(const char* string) {
	// Checking if the pointer have a valid address, if not the string is null
	if (string == nullptr) { return 0; };

	int len = 0;
	while (*string++) {
		len++;
	}
	return len;
}

String::String(const char* str) {
	string = (char*)malloc(Length(str));
	char* indexString = string;
	while (*string++ = *str++);
	string = indexString;
}

String::String(String *str) {
	string = str->string;
}

int String::length() {
	return Length(string);
}

void String::clear() {
	ClearMemAddress(string);
}

bool String::operator==(const String& strB) {
	// Storing the pointers so we can move freely
	char* strPtr = strB.string;
	char* stringPtr = string;

	// If len diff, we dont need to keep going
	if (Length(string) != Length(strPtr)) { 
		return false; 
	};
	// Until end of string, compare if pointers have diff values
	while (*stringPtr != 0) {
		if (*stringPtr++ != *strPtr++) {
			return false;
		};
	}

	return true;
}

String String::operator+(String& appendStr) {
	// Store the size of both char* so we can get the first position in the memory later
	int newStrLenght = Length(string) + appendStr.length();
	char* newString = (char*)malloc(newStrLenght);

	while (*string != 0) {
		*newString++ = *string++;
	}

	while (*appendStr.string != 0) {
		*newString++ = *appendStr.string;
		*appendStr.string++;
	}

	// Adding \0 for final char handler
	*newString = *appendStr.string;

	newString = newString - newStrLenght;

	return String(newString);
}