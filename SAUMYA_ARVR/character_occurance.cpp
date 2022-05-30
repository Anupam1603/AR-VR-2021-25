#include<iostream>
#include<string>
using namespace std;

int main(){
    string str ="assignment";
    char checkCharacter = 's';
    int count=0;

    for(int i =0; i< str.size();i++){
        if(str[i]== checkCharacter)
    {
        count = count + 1;
    }

    }
    cout<< count;
    return 0;
}
