// rotate the array by n postion in d directions

#include<iostream>
using namespace std;


void rotate_n_postion_d_direction(int arr[],int num,int direction,int size)
{
    int i,j,n1,n2;
    if(direction>0)
    {
        while(num!=0)
        {
            //temp=arr[1];
            //n2=arr[0];
           for(i=0;i<size;i++)
           {
              

           }
            num--;
        }
    }
    else{

    }
}



int main()
{
    int arr[10],i,n,d;
    cout<<"Enter the number in array :-";
    for(i=0;i<10;i++){
        cin>>arr[i];
    }

    cout<<endl<<"Printing data :-";
    for(i=0;i<10;i++){
        cout<<" "<<arr[i];
    }

    cout<<endl<<"How many position you rotate :-";
    cin>>n;
    cout<<endl<<"In which direction (+) for right or (-) for left";
    cin>>d;

    rotate_n_postion_d_direction(arr,n,d,10);
    cout<<endl<<"After rotation of array :-"<<endl;
    //cout<<endl<<"Printing data :-";
    for(i=0;i<10;i++){
        cout<<" "<<arr[i];
    }

}