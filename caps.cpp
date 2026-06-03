#include <iostream>


int main() {
    char name[12];
    gets (name);
    printf("The Name you typed is %s:",strupr(name));
    return 0;
}