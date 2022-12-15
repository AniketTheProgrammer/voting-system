#include<stdio.h>

struct Vote{
    float c;
    float cpp;
    float java;
    float python;
};

//make function to calculate

void result(int totalVoters , int arr[]){
    struct Vote v;
    float percent = 100/totalVoters;
    v.c = v.cpp = v.java = v.python = 0;
    for (int i = 0; i < totalVoters; i++)
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

    printf("\n\n");
    printf("\tResult\n");
    printf("C Language\t%0.1f%%\n" , (v.c)*percent);
    printf("Cpp Language\t%0.1f%%\n" , (v.cpp)*percent);
    printf("Java Language\t%0.1f%%\n" , (v.java)*percent);
    printf("Python Language\t%0.1f%%\n" , (v.python)*percent);
    printf("\n\n");


}

int main(){
    printf("\n\tVoting System\n");
    int TotalVoters;
    printf("Enter total numbers of voters\t");
    scanf("%d" , &TotalVoters);
    int arr[TotalVoters];  //selected vote store
    for (int i = 0; i < TotalVoters; i++)
    {
        printf("\n");
        printf("Select any one option\n");
        printf("1.C Language\n");
        printf("2.Cpp Language\n");
        printf("3.Java Language\n");
        printf("4.Python Language\n");
        scanf("%d", &arr[i]);
    }
    //call function
    result(TotalVoters , arr);
    
}