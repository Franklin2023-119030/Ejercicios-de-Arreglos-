#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void capitalizeWords(char arr[]){
    bool newWord=true;
    for (int i=0; arr[i]!='\0'; ++i){
        if (isspace(arr[i])) {
            newWord=true;
        } else if(newWord) {
            arr[i]=toupper(arr[i]);
            newWord=false;
        } else{
            arr[i]=tolower(arr[i]);
        }
    }
}

int main(){
    char arr[]="caceres patrimonio de la humanidad";
    capitalizeWords(arr);
    cout<<arr<<endl;
    return 0;
}

