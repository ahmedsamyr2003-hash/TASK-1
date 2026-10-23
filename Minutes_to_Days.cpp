#include <iostream>

using namespace std;

int main()
{
    cout<<"enter minute"<<endl;
    int M;
    cin >>M;
    int d=M/1440;
    int r=M%1440;
    int h=r/60;
    int m=r%60;
    cout<< d<<" days "<< h<<" h "<< m<<" min "<<endl;
    return 0;
}
