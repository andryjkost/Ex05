#include <iostream>
#include "task1.h"
using namespace std;
int main(){
    int a=5,b=6;
    char x='a',y='b';
    const char *str1="abba";
    const char *str2="baab";
    std::cout << less(a, b) << " " << less(str1, str1);
    return 0;
}
