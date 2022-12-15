class Vote:
    c = 0
    cpp = 0
    java = 0
    python = 0


# make function to calculate result 
def result(TotalVoters , lists):
    v = Vote()   
    percent = 100/TotalVoters
    for i in range(0 , TotalVoters):
        match lists[i]:
            case 1:
                (v.c) += 1
            case 2:
                (v.cpp) +=1
            case 3:
                (v.java) +=1
            case 4:
                (v.python) +=1

    print("\n")                        
    print("\tResult\n")
    print(f"C Language\t{(v.c)*percent}%")
    print(f"Cpp Language\t{(v.cpp)*percent}%")
    print(f"Java Language\t{(v.java)*percent}%")
    print(f"Python Language\t{(v.python)*percent}%")
    print("\n\n")


print("Voting System\n")    
TotalVoters = int(input("Enter total numbers of voters    "))
voteSelcted = [] #store the selected option
for i in range(0 , TotalVoters):
    print("Select any one option")
    print("1.C Language")
    print("2.Cpp Language")
    print("3.Java Language")
    print("4.Python Language")
    voteSelcted.append(int(input()))


# call function 
result(TotalVoters , voteSelcted)    