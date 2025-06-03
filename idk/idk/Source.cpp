#include <iostream>
#include "FileManage.h"
#include "input.h"
using namespace std;

int main() {
    FileManage file("proekt.txt");
    string g;
    g = file.Read();
    cout << g;
}
