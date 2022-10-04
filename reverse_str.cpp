#include <iostream>
#include <cstring>

void reverse_str(char* str){
    
    for(int i = 0; i < strlen(str) / 2; i++){
        
    char temp = str[i];
    str[i] = str[strlen(str) - i - 1];
    str[strlen(str) - i - 1] = temp;
	
    }
    
    std::cout<< str << std::endl;
}

int main() {
	char k[] = "hello";	
	reverse_str(k); 
}
