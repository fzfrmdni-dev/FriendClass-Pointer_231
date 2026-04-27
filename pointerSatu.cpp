#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"No Induk = "<<nim<<endl;
    }
};

int main(){
    mahasiswa mhs{1}; //object mhs
    mhs.showNim(); //member Access Operator

    mahasiswa &refMhs = mhs; //reference refMhs
    refMhs.nim = 2; //member Access Operator
    mhs.showNim(); 

    mahasiswa *pMhs = &mhs; //pointer deference pMhs
    pMhs->nim = 3; //arrow Operator
    pMhs->showNim();
    return 0;
}