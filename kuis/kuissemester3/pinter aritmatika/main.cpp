#include <iostream>

using namespace std;

int main()
{
    int nilai[3], *penunjuk;
    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750;
    penunjuk = &nilai[0];
    cout<<"Nilai "<<*penunjuk<<" ada di alamat memori "<<penunjuk<<"\n";
    cout<<"Nilai "<<*(penunjuk+1)<<" ada di alamat memori "<<penunjuk+1<<"\n";
    cout<<"Nilai "<<*(penunjuk+2)<<" ada di alamat memori "<<penunjuk+2<<"\n";
    return 0;
}
