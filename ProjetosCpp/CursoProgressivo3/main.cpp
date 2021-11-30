#include <iostream>

using namespace std;

int main()
{
    // Tipos de dados: int(short, long, unsigned) char float double bool

    cout << "O tipo de dado short int ocupa " << sizeof(short int) << " bytes;" << endl;
    cout << "O tipo de dado long int ocupa " << sizeof(long int) << " bytes;" << endl;
    cout << "O tipo de dado unsigned int ocupa " << sizeof(unsigned int) << " bytes;" << endl;
    cout << "O tipo de dado int ocupa " << sizeof(int) << " bytes;" << endl;
    cout << "O tipo de dado char ocupa " << sizeof(char) << " bytes;" << endl;
    cout << "O tipo de dado float ocupa " << sizeof(float) << " bytes;" << endl;
    cout << "O tipo de dado double ocupa " << sizeof(double) << " bytes;" << endl;
    cout << "O tipo de dado bool ocupa " << sizeof(bool) << " bytes;" << endl;

    return 0;
}
