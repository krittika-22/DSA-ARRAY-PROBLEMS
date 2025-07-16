#include<bits/stdc++.h>
#include <vector>
using namespace std;

int largestElement(vector <int> &a ,int n)
{
    int largest=a[0];

    for(int i=1;i<n;i++)
    {
      if (a[i]>largest)
      {
        largest=a[i];
      }
    }
    return largest;
    
}

int main()
{
    int n;
    cout<<"ENTER THE NO OF ELEMENTS IN THE ARRAY: \n";
    cin>>n;

    vector<int> a(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = largestElement(a, n);  
    cout << "The largest element is: " << result << endl;  

    return 0;

}





