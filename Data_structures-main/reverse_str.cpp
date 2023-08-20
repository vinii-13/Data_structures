#include<bits/stdc++.h>
using namespace std;

void reversee(char *x, int start, int endd)
{
    char c;
    if (start >= endd)
        return;
    c = *(x + start);
    *(x + start) = *(x + endd);
    *(x + endd) = c;
    reversee(x, ++start, --endd);
}

int main()
{
    char a[50] = "Answer";
    reversee(a, 0, strlen(a) - 1);
    cout << a;
return 0;
}
