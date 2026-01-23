#include <iostream>
using namespace std;

int main() 
{
    int n, choice, tmp ;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }
    
    do 
	{
    cout<<"1. Linear Search\n";
    cout<<"2. Binary Search\n";
    cout<<"3. Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice)
        
	{
        case 1:
		{
		 cout<<"enter the number to search  : ";
		 cin>>tmp;
		 
		 int pos =-1;
		 for(int i=0;i<n;i++)
		   {
		    if (arr[i]==tmp)
		 	    {
		 		   pos =-1;
			    }
			}
			
			if(pos != -1)
			{
            cout<<"Element found " << pos;
            }
            else
            {
             cout<<"Element not found";
		    }
		}
		case 2: 
		{ 
            cout<<"Enter element to search: ";
            cin>>tmp;
                int low=0;
				int high=n - 1;
                int pos= -1;

                while(low <= high) 
				{
                    int mid = (low + high) / 2;

                    if(arr[mid] == tmp) 
					{
                        pos = mid;
                        break;
                    }
                    else if(tmp < arr[mid]) 
					{
                        high = mid - 1;
                    }
                    else 
					{
                        low = mid + 1;
                    }
                }

                if(pos != -1)
                {
                    cout << "Element found at index " << pos;
                }
                else
                {
                    cout << "Element not found";
                }
                break;
            }
				
	}
}while (choice != 3);
	return 0;
}

		
		
		
		
		
		
		
		
		
		
		
		
