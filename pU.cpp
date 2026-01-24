/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: U
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-09-27
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
*/


#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    double N;
    cin >> N;

    int I = (int)N;
    double D = N - I;

    if (D == 0) {
        cout << "int " << I << endl;
    } else {
        cout << "float " << I << " " << D << endl;
    }

    return 0;
}
