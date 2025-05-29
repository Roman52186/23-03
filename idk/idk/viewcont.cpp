#include <iostream>
using namespace std;
#include "uicont.h"
void UICont::Print(string out) {
    cout << out << endl;
}
void UICont::Print(vector<string> f) {
    for (int i = 0; i < f.size(); i++) {
        cout << i << endl;
    }
}
