#include <iostream>
using namespace std;
int main(){
    int arr[]={5,6,3,8,7};
    int min=arr[0];
    for (int i = 1; i < 5; i++){
        if (arr[i]<min)
        min=arr[i];
    }
    cout <<"smallest element ="<<min;
    return o;
}
