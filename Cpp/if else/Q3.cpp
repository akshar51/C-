#include <iostream>
using namespace std;

int main()
{
    float math, eng, sci, total;
    cout << "Enter maths marks : ";
    cin >> math;
    cout << "Enter english marks : ";
    cin >> eng;
    cout << "Enter science marks : ";
    cin >> sci;

    if (math > 0 && eng > 0 && sci > 0)
    {
        total = (math + eng + sci) / 3;
        cout << "Average mark : " << total;
    }
    else{
        cout<<"Enter valid marks";
    }
}