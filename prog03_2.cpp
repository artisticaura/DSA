#include <iostream>
using namespace std;

int main()
{
    int n, choice;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    do
    {
        cout<<"\n1. Selection Sort";
        cout<<"\n2. Insertion Sort";
        cout<<"\n3. Bubble Sort";
        cout<<"\nEnter your choice: ";
        cin>>choice;

        if (choice == 1)
        {
        	for(int i=0;i<n-1;i++)
            {
                int min=i;
                for (int j=i+1;j<n;j++)
                {
                    if (arr[j] < arr[min])
                    min = j;
                }
		        int t=arr[i];
		        arr[i]=arr[min];
		        arr[min]=t;
	        }
	        for(int i=0;i<n;i++)
		    cout<<arr[i]<<" ";    
		}
		if (choice == 2 )
		{
			for (int i = 1; i < n; i++)
            {
                int tmp=arr[i];
                int j=i-1;
                while (j>=0&&arr[j] >tmp)
                {
                    arr[j+1]=arr[j];
                    j--;
                }
                arr[j+1] = tmp;
            }
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
		}
		else if (choice == 3)
        {
            for(int i=0;i<n-1;i++)
            {
                for (int j=0;j<n-i-1;j++)
                {
                    if (arr[j]>arr[j+1])
                    {
                        int t = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = t;
                    }
                }
            }
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
        }

}
while (choice != 3);

    return 0;
}
