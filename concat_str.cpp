#include <iostream>
#include <cstring>

void concat_str(char* str1, char *str2){
        int i=strlen(str1);
    
        for (int j = 0; str2[j] != '\0'; ++j, ++i){
            str1[i] = str2 [j];
        }

    str1[i] = '\0';
    
    std::cout<< str1 << std::endl;

}
int main() {
	char s1[] = "hello";
	char s2[] = "world";
	concat_str(s1, s2); 
}