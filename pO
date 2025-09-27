/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: O
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-09-27
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
*/


#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string X;
    cin >> X;

    int A = 0, B = 0;
    char C;

    int i = 0;
    while (i < X.size() && isdigit(X[i])) {
        A = A * 10 + (X[i] - '0');
        i++;
    }

    C = X[i++];
    
    while (i < X.size() && isdigit(X[i])) {
        B = B * 10 + (X[i] - '0');
        i++;
    }

    if (C == '+') cout << A + B << endl;
    else if (C == '-') cout << A - B << endl;
    else if (C == '*') cout << A * B << endl;
    else if (C == '/') cout << A / B << endl;

    return 0;
}

