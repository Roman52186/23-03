#include <iostream>
#include "uicont.h"
#include "input.h"
using namespace std;

int main() {
    InputController g;
    string k;
    string d = g.SaveInput(k,"Name");
    vector<string> list{ "stas","oleg","vlad" };
    int f = g.ChooseInput(list);
    cout << d;

}
