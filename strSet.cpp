#include <iostream>
#include <cstring>

void strSet(char* str, char ch){
    
  for (int i = 0; i < strlen(str); ++i){
      str[i] = ch;
  }
    
    std::cout<< str << std::endl;

} 
int main() {
	char s[] = "hello";

	strSet(s, '1'); 
}