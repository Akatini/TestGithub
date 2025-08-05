#include <iostream>
#include <algorithm>

int main(){
    int arr[] = {1,522,4,312,432,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::sort(arr,arr + size);
    for (auto e : arr){
        std::cout << e << std::endl;
    }
    getchar();
    return 0;
}