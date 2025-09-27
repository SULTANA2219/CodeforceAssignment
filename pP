/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: P
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-09-27
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X, Y;
    cin >> X;

    Y = X / 1000;

    if (Y % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;

    return 0;
}
