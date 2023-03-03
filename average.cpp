#include<iostream>

using namespace std;

int main(int argc,char* argv[]){
    float ave=0;
    if(argc <= 1)cout << "Please input numbers to find average.\n";
    else{
    
    for(int i = 0; i < argc;i++){
        ave += atof(argv[i]);}
    cout << "---------------------------------\n";
    cout << "Average of " << argc-1 << " numbers = "<< ave/(argc-1) <<endl;
    cout << "---------------------------------\n";
    }


}