#include <iostream>
using namespace std;

class mahasiswa
{
    public: 
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa mhs; // Object mhs
    mhs.nim = 2024;
    mhs.showNim(); // Member access operator

    mahasiswa &refMhs = mhs; // pointer reference refMhs
    refMhs.nim = 2;          // member access operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; // pointer dereferance pMhs
    pMhs ->nim = 3;        // arrow operator
    pMhs ->showNim();
    return 0;
}

