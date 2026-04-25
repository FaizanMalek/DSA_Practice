#include <bits/stdc++.h>

using namespace std;

void print1(int n) {
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void print2(int n) {
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j <= i; j ++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void print3(int n) {
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= i; j ++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void print4(int n) {
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= i; j ++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void print5(int n) {
    for(int i = n; i > 0; i --) {
        for(int j = i; j > 0; j --) {
            cout << "* ";
        }
        cout << endl;
    }
}

void print6(int n) {
    for(int i = n; i > 0; i --) {
        for(int j = i; j > 0; j --) {
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }
}

void print7(int n) {
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n - i - 1; j ++) {
            cout << " ";
        }

        for(int j = 0; j < 2*i + 1; j ++) {
            cout << "*";
        }

        for(int j = 0; j < n - i - 1; j ++) {
            cout << " ";
        }
        cout << endl;
    }
}

void print8(int n) {
    for(int i = n - 1; i >= 0; i --) {
        for(int j = 0; j < n - i - 1; j ++) {
            cout << " ";
        }

        for(int j = 0; j < 2*i + 1; j ++) {
            cout << "*";
        }

        for(int j = 0; j < n - i - 1; j ++) {
            cout << " ";
        }
        cout << endl;
    }
}

void print9(int n) {
    print7(n);
    print8(n);
}

void print10(int n) {
    for (int i = 1; i <= 2*n - 1; i ++) {
        int stars = i;
        if( i > n) 
            stars = 2 * n - i;

        for( int j = 1; j <= stars; j ++){
            cout << "*";
        }
        cout << endl;

    }
}

void print11(int n) {
    int start = 1;
    for(int i = 1; i <= n; i ++) {
        for(int j = 0; j < i; j ++) {
            cout << start;
            start ^= 1;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    // print3(n);
    // print4(n);
    // print5(n);
    // print6(n);
    // print7(n);
    // print8(n);
    // print9(n);
    // print10(n);
    print11(n);
}