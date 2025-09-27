/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: Y
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-09-27
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D, X;
    cin >> A >> B >> C >> D;

    X = ((A % 100) * (B % 100)) % 100;
    X = (X * (C % 100)) % 100;
    X = (X * (D % 100)) % 100;

    cout << setw(2) << setfill('0') << X << '\n';

    return 0;
}

