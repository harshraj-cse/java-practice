#include <iostream>
using namespace std;
int main(){
    int arr[]={5,7,4,9};
    int max = arr[0];
    for (int i=1; i<4;i++){
        if (arr[i]>max)
        max=arr[i];
    }
    cout << "largest element = " <<max;
    return o;
}