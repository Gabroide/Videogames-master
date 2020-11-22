#ifndef __String__
#define __String__

#include <stdlib.h>

class String {
	private:
		char* string;
	public:
		// Constructors
		String(const char* str);
		String(String* str);

		// Functions
		int length();
		void clear();
		bool operator==(const String& strB);
		String operator+(String& appendStr);

};

#endif