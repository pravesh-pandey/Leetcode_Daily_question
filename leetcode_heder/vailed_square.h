#include<bits/stdc++.h>
class Solution {
    public boolean validSquare(vector<int> p1, vector<int> p2, vector<int> p3, vector<int> p4) {
        int d12 = dist(p1,p2);
        int d13 = dist(p1,p3);
        int d14 = dist(p1,p4);
        int d23 = dist(p2,p3);
        int d24 = dist(p2,p4);
        int d34 = dist(p3,p4);
        if(d12==d13)
            return validate(d12, d24, d34, d13, d14, d23);
        if(2*d12==d13)
            return validate(d12, d23, d34, d14, d13, d24);
        if(d12==2*d13)
            return validate(d13, d23, d24, d14, d12, d34);
        return false;
    }
    
    private boolean validate(int a1, int a2, int a3, int a4, int d1, int d2) {
        if(a1==0)
            return false;
        return a1==a2
            && a1==a3
            && a1==a4
            && d1==d2
            && d1==2*a1;
    }
    
    private int dist(vector<int> a, vector<int> b) {
        int dx = a[0]-b[0];
        int dy = a[1]-b[1];
        return dx*dx+dy*dy;
    }
}