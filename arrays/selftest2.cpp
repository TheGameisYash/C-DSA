#include<iostream>
using namespace std;


bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if (arr[i] == key)
        {
                return 1;
        }
        
    }
    return 0;

}

int main() {
    int arr[10] = {10,50,42,96,49,69,14,1,88,77};

    cout << "Enter which key you want to find :- " << endl;
    int key;
    cin>>key;

    bool found = search(arr,10,key);
    if(found){
        cout<< "Your key is matched" << endl;
    
    }
    else{
        cout << "Your key is not matched" << endl;
    }
    

}