#include <iostream>

using namespace std;

int main()
{
    int width,high;
    cout << "{ please enter width and high}"<< endl;
    cin >>width>>high;
    int  Area=width*high;
    cout<< "Area: "<<Area<<endl;
    int Perimeter=(width +high)*2;
    cout <<"Perimeter: "<<Perimeter<<endl;

    return 0;
}
