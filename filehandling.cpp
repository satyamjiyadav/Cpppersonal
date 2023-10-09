#include<bits/stdc++.h>
using namespace std;


int main(){
    fstream file;
    // IN FOR READ ONLY;
    // OUT FOR ANY CHANGE...WRITE DELETE ETC.
    file.open("hello.txt",ios::in);
    if(!file){
        cout<<"no file is there";
    }

    //TO READ  CHARACTER BY CHARACTER
    // else{
    //     char ch;
    //     while(true){
    //         file>>ch;
    //         if(file.eof()){
    //             break;
    //         }
    //         cout<<ch;
    //     }
    // }

    //reading word by word;

    string word;
    while(file>>word){
        cout<<word<<" ";                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    }
    file.close();

     //file open karo usme data write karo

    // file.open("hello.txt", ios::out);
    // if(!file){
    //     cout<<"file is not there";
    // }
    // else{
    //     cout<<"file is created";
    // }
    // file<<"hello everyone satyam";
    // file<<"new text";
}
