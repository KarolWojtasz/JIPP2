//
// Created by Admin on 04.01.2022.
//
#include <iostream>

using namespace std;
template <typename T>
T myMax(T x, T y)
{
    return (x > y)? x: y;
}

template <typename T>
T myMin(T x, T y)
{
    return (x < y)? x: y;
}

template <typename T>
T printArray(T *a, T x)
{
    for(int i=0 ;i<x;i++)
        cout<<a[i]<<endl;
    return 0;
}
template <typename T>
T printArray2(T **a, T x,T y)
{
    for(int i=0 ;i<x;i++)
        for(int j=0 ;j<y;j++)
            cout<<a[i][j]<<endl;
    return 0;
}


template<typename type1, typename type2, typename type3>
class Triple {
private:
    type1 variable1;
    type2 variable2;
    type3 variable3;

public:
    Triple(type1 variable1, type2 variable2, type3 variable3): variable1(variable1), variable2(variable2), variable3(variable3) {}

    type1 getVariable1() {
        return variable1;
    }

    type2 getVariable2() {
        return variable2;
    }

    type3 getVariable3() {
        return variable3;
    }
};








int main(){
    int foo [5] = { 16, 2, 77, 40, 12071 };
    int** a = new int*[4];
    for(int i = 0; i < 4; ++i){
        a[i] = new int[4];

    }
    for(int i=0 ;i<4;i++)
        for(int j=0 ;j<4;j++)
            a[i][j]=i*j;
    printArray(foo,5);
    printArray2(a,4,4);
    cout << myMax(1,4)<<endl;
    cout << myMin(1,4);

    Triple <string, double, bool>t{"Hello", 5.1, true};
    cout << t.getVariable1() << endl;
    cout << t.getVariable2() << endl;
    cout << t.getVariable3() << endl;

    return 0;
}