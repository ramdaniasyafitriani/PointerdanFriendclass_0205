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

}
