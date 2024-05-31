#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(int arr[], int size) {
    int left = 0;
    
    int right = size - 1;
    int ans = 0;

    while (left < right) {
        if (arr[left] == arr[right]) {
            ans = arr[left];
        } 
        else{
            left++;
            right--;
            cout << arr[left]<< endl;
        }
    }

    cout << ans << " ";

    return ans;
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};
    int arr[] = {1,3,4,2,2};

    findDuplicate(arr , 5);

    return 0;
}
