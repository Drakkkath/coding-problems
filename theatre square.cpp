#include <iostream>

using namespace std;
int main()
{
    int n,m,a;
    cin >> n >> m >> a;
    int flagstones_needed_width = 1, flagstones_needed_height = 1;
    while(a*flagstones_needed_height < n){
        flagstones_needed_height += 1;
    }
    while (a*flagstones_needed_width < m){
    flagstones_needed_width += 1;
    }
    cout << flagstones_needed_height*flagstones_needed_width << endl;

}
