//Credit to NodeMixaholic
#include <string>
#include <cstring>
#include <stdio.h>

int main() {
	std::string fullStr = "Bye!";
	const char* charArray = fullStr.c_str();
	for (int i = 0; i < sizeof charArray; i++) {
		std::string charStr(1,charArray[i]);
		charStr = charStr + "\n";
		const char* finalCharArray = charStr.c_str();
		printf(finalCharArray);
	}
}
