#include <iostream>

using namespace std;

int main()
{
    cout << "enter number" << endl;
    int a;
    cin >>a;
    int d1=a%10;
    a=a/10;
    int d2=a%10;
    a=a/10;
    int d3=a%10;
    a=a/10;
    int d4=a%10;
    a=a/10;
    cout <<"reverse:"<<d1<<d2<<d3<<d4<<endl;
    cout <<"sum digits:"<<d1+d2+d3+d4<<endl;

    return 0;
}
