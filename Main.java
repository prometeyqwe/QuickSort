import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){

        System.out.println("Enter to upper limit: ");
        Scanner input = new Scanner(System.in);

        int size = input.nextInt();
        int[] arr = new int[size];
        Random random = new Random();


        for(int i = 0; i < size; i++){
            arr[i] = random.nextInt(100);
        }

        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i]+" ");;
        }
        System.out.println();

        quickSort(arr, 0, arr.length-1);

        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i]+" ");;
        }
        System.out.println();


    }

    static void quickSort(int[] arr, int left, int right){
        int i = left;
        int j = right;
        int p = arr[(left+right)/2];

        while(i<=j){
            while(arr[i]<p)i++;
            while(arr[j]>p)j--;

            if(i<=j){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
                j--;
            }
        }

        if(j>left){
            quickSort(arr, left, j);
        }
        if(i<right){
            quickSort(arr, i, right);
        }
    }

}
