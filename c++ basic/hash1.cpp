

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> target_sum(vector<int> &vec,int sum)
{
    unordered_map <int,int>m;
    vector<int>v(2,-1);

    for(int i=0;i<vec.size();i++)
    {
        int differ=sum-vec[i];

        if(m.find(differ)!=m.end())
        {
            v[0]=m[differ];
            v[1]=i;
            return v;
        }
        else{
            m[vec[i]]=i;
        }
    }
    return v;
}


int main()
{
    int n;
    cout<<"Enter the number:- ";
    cin>>n;

    vector<int>vec(n);

    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int sum=0;

    cout<<endl<<"Enter the target :- ";
    cin>>sum;

    vector<int> ans(target_sum(vec,sum));

    if (ans[0] == -1) {
        cout << "No pair found.\n";
    } else {
        cout << "Indices: " << ans[0] << ", " << ans[1] << endl;
    }

    return 0;

}


