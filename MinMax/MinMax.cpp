void minmax1(int n) {
    int a;
    cin >> a;
    int min = a;
    int max = a;
    for (int i = 0; i < n - 1; i++) {
        cin >> a;
        if (a > max) {
            max = a;
        }
        else if (a < min) {
            min = a;
        }
    }
    cout << min << ' ' << max << endl;
}

void minmax2(int n) {
    int a;
    int b;
    cin >> a >> b;
    int min = a*b;
    for (int i = 0; i < n - 1; i++) {
        cin >> a >> b;
        if (a*b < min) {
            min = a*b;
        }
    }
    cout << min << endl;
}

void minmax3(int n) {
    int a;
    int b;
    cin >> a >> b;
    int max = 2*(a + b);
    for (int i = 0; i < n - 1; i++) {
        cin >> a >> b;
        if (2 * (a + b) > max) {
            max = a;
        }
    }
    cout << max << endl;
}

void minmax4(int n) {
    int a, min;
    cin >> a;
    min = a;
    min_index = 0;
    for (int i = 1; i < n; i++) {
        cin >> a;
        if (a < min) {
            min = a;
            min_index = i;
        }
    }
    cout << i << endl;
}

void minmax5(double n) {
    double m, v;
    cin >> m >> v;
    int max_index = 0;
    double maxm = m;
    double maxv = v;
    for (int i = 1; i < n; i++) {
        cin >> m >> v;
        if (m/v > maxm/maxv){
            maxm = m;
            maxv = v;
            max_index = i;
        }
    }
    cout << maxm/maxv << endl;
}

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

