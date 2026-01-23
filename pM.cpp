/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: M
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-09-27
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    char X;
    cin >> X;

    if (X >= '0' && X <= '9') {
        cout << "IS DIGIT" << endl;
    } else {
        cout << "ALPHA" << endl;
        if (X >= 'A' && X <= 'Z') {
            cout << "IS CAPITAL" << endl;
        } else if (X >= 'a' && X <= 'z') {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}
