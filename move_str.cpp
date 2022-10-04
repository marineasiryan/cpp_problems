#include <iostream>
#include <cstring>

void strMove(char* str, int n){
    
  for(int i = 0; i< n; ++i){
        int part = str[strlen(str) -1] ;
        for (int j = strlen(str) -1 ; j >0; --j){
            str[j] = str[j - 1];
        }
            str[0]=part;
    }
      std::cout<< str << std::endl;

} 

int main() {
	char s[] = "hello";
	strMove(s, 2); 
}