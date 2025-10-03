#include <iostream>
#include <string>
using namespace std;

int main() {
    string namn;
    cout << "Vad heter du? ";
    getline(cin, namn);
    cout << "Hej från <mitt namn>!" << endl;

    return 0;
}
