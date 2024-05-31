#include<iostream>
#include <string.h>
using namespace std;

bool search(const char* engine[], int size, const char* key) {
    for (int i = 0; i < size; ++i) {
        if (strcmp(engine[i], key) == 0) {
            return true; // Found
        }
    }
    return false; // Not found
}



int main() {
  const char* engine[6] = {"tony","name","batch","anjali","iuc","corpse"};

  cout << "Enter the name you want to find :- "<< endl;
  char key[10];
  cin>>key;

  bool found = search(engine,6,key);
   
  if (found) {
    cout << "Name found" << endl;
  }
  else{
    cout << "Name not found" << endl;
  }




}