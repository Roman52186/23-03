#pragma once
#include <iostream>
#include <vector>
using namespace std;
class OutputController {

    template <class T>
    void Print(T out) {
        cout << out << endl;

    }


    void PrintImage(vector<vector<int>> );

};
