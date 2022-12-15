import java.util.Scanner;

class vote{
    float c;
    float cpp;
    float java;
    float python;


    // make function to calculate result
    static void result(int TotalVoters , int[] arr){
        //make object
        vote v = new vote();
        float percent = 100/TotalVoters;
        v.c = v.cpp = v.java = v.python = 0;
        for(int i = 0 ; i < TotalVoters ; i++){
            switch (arr[i]) {
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

        System.out.println("\n\n");
        System.out.println("\tResult\n");
        System.out.println("C Language\t"+(v.c)*percent +"%");
        System.out.println("Cpp Language\t"+(v.cpp)*percent +"%");
        System.out.println("Java Language\t"+(v.java)*percent +"%");
        System.out.println("Python Language\t"+(v.python)*percent +"%");
        System.out.println("\n\n");
    }



    public static void main(String arg[]){
        System.out.println("Voting System");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter total numbers of voters");
        int TotalVoters = sc.nextInt();
        int arr[] = new int[TotalVoters]; //store result of selected option
        for(int i = 0 ; i < TotalVoters ; i++){
            System.out.println("\n");
            System.out.println("Select any one options");
            System.out.println("1.C Language");
            System.out.println("2.Cpp Language");
            System.out.println("3.Java Language");
            System.out.println("4.Python Language");
            arr[i] = sc.nextInt();
        }



        //call function
        result(TotalVoters, arr);

    }
}