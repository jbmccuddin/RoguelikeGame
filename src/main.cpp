#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    int rnd = rand();
    int** d = new int*[5];
    d[0] = new int(6);
    int* d2 = new int[5];
    d2[0] = 7;
    printf("hi %d", rnd);
    delete[] d;
    int b = 7;
}