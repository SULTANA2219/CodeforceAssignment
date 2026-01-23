/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: N
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-09-27
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    char X;
    cin >> X;

    if (X >= 'a' && X <= 'z') {
        cout << char(X - 32) << endl;
    } else if (X >= 'A' && X <= 'Z') {
        cout << char(X + 32) << endl;
    }

    return 0;
}

