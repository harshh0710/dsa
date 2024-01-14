import java.util.*;

public class bubblesort {
    public int[] arrayinput()
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int n= sc.nextInt();

        int arr[]=new int [n]; 
        System.out.println("Enter the elements of that array");
        for(int i = 0 ; i < n ; i++)
        {
            arr[i]=sc.nextInt();
        }

        return arr;
    }
    public void printArray(int arr[])
    {
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+",");
        }
        System.out.println();
    }

    public void sortArray(int arr[])
    {
        int n= arr.length;
        boolean swaped;
        for(int i=0;i<n-1;i++)
        {
            swaped=false;
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    
                    swaped= true;
                }
            }

            if (!swaped) {
                break;
            }
        }
    }
    public static void main(String[] args) {
        Bubblesort obj = new Bubblesort();
        int arr[]=obj.arrayinput();
        obj.printArray(arr);
        obj.sortArray(arr);
        obj.printArray(arr);
    }
}

