#include <iostream>

using namespace std;

int main()
{
    int i = 11;
    float f = 7.1;
    char ch = 'c';
    string s = "hello";
    
    void* arr[4];
    
    arr[0] = &i;
    arr[1] = &f;
    arr[2] = &ch;
    arr[3] = &s;
    

    cout << "arr[0] = " << *(int*)arr[0] << endl;
    cout << "arr[1] = " << *(float*)arr[1] << endl;
    cout << "arr[2] = " << *(char*)arr[2] << endl;
    cout << "arr[3] = " << *(string*)arr[3] << endl;

    return 0;
}