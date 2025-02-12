
#include<iostream>
#include<vector>
using namespace std;

// int migratoryBirds(vector<int> arr) {
//     int n=arr.size();
    
//     int count=0;
//     int temp[n];
//     int num;
//     int max=-2;
    
//     for(int i=0;i<n;i++)
//     {
//         temp[i]=-1;
//     }
    
//     for(int i=0;i<arr.size();i++)
//     {
//         num=arr[i];
//         count=1;
//         cout<<"NUMEBR arr["<<i<<"]"<<num;
//         for(int j=i+1;j<arr.size();j++)
//         {
//             if(num==arr[j])
//             {
//                 count++;
//             }
//             cout<<"Times :- "<<count<<endl;
//         }
//         if(temp[num-1]==-1)
//         {
//             temp[num-1]=count;
//             count=0;
//         }
//     }
    
//     for(int i=0;i<n;i++)
//     {
//         if(max<temp[i])
//         {
//             max=temp[i];
//         }
//     }
    
//     return temp[max];
    
// }



#include <vector>
using namespace std;

int migratoryBirds(vector<int> arr) {
    int n = arr.size();
    
    // Assuming bird types are between 1 and 5, we create a frequency array of size 5.
    int temp[5] = {0}; // Frequency array for bird types 1 to 5
    
    // Count the frequency of each bird type
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        temp[num - 1]++; // Increment the count for the bird type
    }
    
    // Find the bird type with the maximum frequency
    int maxFreq = -1;
    int birdType = 0;
    for (int i = 0; i < 5; i++) {
        if (temp[i] > maxFreq) {
            maxFreq = temp[i];
            birdType = i + 1; // Bird types are 1-based index
        } else if (temp[i] == maxFreq) {
            birdType = min(birdType, i + 1); // Choose the smallest bird type if frequencies are equal
        }
    }
    
    return birdType;
}


int main()
{
    // vector<int> arr;
    int n,temp;
    vector<int> arr;
    cout<<"Ente the size of the array :-";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }

    int result = migratoryBirds(arr);
    cout<<endl<<"Result :- "<<result;

}