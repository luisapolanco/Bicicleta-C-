#include <string.h>
#include <iostream>

using namespace std;

int main (int argc, char** argv){
    string palabra1= "A";
    string palabra2="Z";

    int rest = palabra1 < palabra2;
    int rest2 = palabra1 > palabra2;
    int rest3 = palabra1 == palabra2;

    cout << "palabra1 < palabra2  -> " << rest << endl;
    cout << "palabra1 > palabra2  -> " << rest2 << endl;
    cout << "palabra1 == palabra2  -> " << rest3 << endl;

}