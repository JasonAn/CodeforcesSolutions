#include <iostream>
#include <string>

using namespace std;

int main() {
    string p;
    cin >> p;

    size_t NA= (int) 'A';
    size_t NZ= (int) 'Z';
    size_t num = (int)'a' - (int)'A';

    for (int i = 0; i < p.length(); i++){
        if((int)p.at(i) >= NA && (int)p.at(i)<= NZ)
            p.at(i) = p.at(i) + num;
    }

    for (int i = 0; i < p.length();){
        if (p.at(i) == 'a' or p.at(i) == 'e' or p.at(i) == 'i' or p.at(i) == 'o' or p.at(i) == 'u' or p.at(i) == 'y')
            i++;
        else {
            cout << '.' << p.at(i);
            i++;
        }
    }


    return 0;
}