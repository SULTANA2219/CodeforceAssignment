/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: D
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-09-27
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D, X;
    cin >> A >> B >> C >> D;

    X = (A * B) - (C * D);

    cout << "Difference = " << X << endl;

    return 0;
}
