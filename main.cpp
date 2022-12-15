#include<iostream>
using namespace std;

class Vote{
    public:
        float c;
        float cpp;
        float java;
        float python;
};

// make function to calculate result

void result(int TotalVoters , int arr[]){
    Vote v; // make object of vote class
    float percent = 100/TotalVoters;
    v.c = v.cpp = v.java = v.python = 0;
    for (int i = 0; i < TotalVoters; i++)
    {
        switch (arr[i])
        {
        case 1:
            (v.c)++;
            break;
        case 2:
            (v.cpp)++;
            break;
        
        case 3:
            (v.java)++;
            break;
        
        case 4:
            (v.python)++;
            break;
        }
    }
    cout<<"\n\n";
    cout<<"\tResult\n\n";
    cout<<"C Language\t"<<(v.c)*percent<<"%\n";
    cout<<"Cpp Language\t"<<(v.cpp)*percent<<"%\n";
    cout<<"Java Language\t"<<(v.java)*percent<<"%\n";
    cout<<"Python Language\t"<<(v.python)*percent<<"%\n";
    cout<<"\n\n";

}

int main(){
    cout<<"Voting System\n";
    int TotalVoters;
    cout<<"Enter total numbers of voters\t";
    cin>>TotalVoters;
    int arr[TotalVoters];  //store the selected option of voting
    for (int i = 0; i < TotalVoters; i++)
    {
        cout<<"\n";
        cout<<"Select any one option\n";
        cout<<"1.C Language\n";
        cout<<"2.Cpp Language\n";
        cout<<"3.Java Language\n";
        cout<<"4.Python Language\n";
        cin>>arr[i];
    }

    //call function
    result(TotalVoters , arr);
    


}