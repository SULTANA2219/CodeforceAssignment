/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: H
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-09-27
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
*/


#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    double A, B, X;
    cin >> A >> B;

    X = A / B;

    cout << "floor " << A << " / " << B << " = " << (int)floor(X)<< endl;
    cout << "ceil " << A << " / " << B << " = " << (int)ceil(X)<< endl;
    cout << "round " << A << " / " << B << " = " << (int)round(X)<< endl;

    return 0;
}

