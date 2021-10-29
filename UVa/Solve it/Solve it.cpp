#include<bits/stdc++.h>
using namespace std;
int p, q, r, s, t, u;
double f(double x) {
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}
double bisection() {
    double a = 0, b = 1;
    while (a+(1e-7)<b) {
        double c=(a + b)/2;
        if (f(a)*f(c)<=0)
            b=c;
        else
            a=c;
    }
    return (a+b)/2;
}
int main() {
    while (scanf("%d %d %d %d %d %d", &p, &q, &r, &s, &t, &u) != EOF) {
        if (f(0) * f(1) > 0)
            printf("No solution\n");
        else
            printf("%.4lf\n", bisection());
        }
    return 0;
}
