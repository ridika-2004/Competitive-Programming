#include <bits/stdc++.h>
using namespace std;

int overlapArea(pair<int,int> r1_bl, pair<int,int> r1_tr, pair<int,int> r2_bl, pair<int,int> r2_tr) {
    
    int x_left   = max(r1_bl.first,  r2_bl.first);
    int x_right  = min(r1_tr.first,  r2_tr.first);
    int y_bottom = max(r1_bl.second, r2_bl.second);
    int y_top    = min(r1_tr.second, r2_tr.second);

    int width = x_right - x_left;
    int height = y_top - y_bottom;

    if (width <= 0 || height <= 0) return 0;
    return width * height;
}

int main() {
    
    cout << overlapArea({0,0}, {5,5}, {1,1}, {6,6}) << "\n";
    return 0;
}
