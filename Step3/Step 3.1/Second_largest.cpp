//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max=INT_MIN;
	    int s_max=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>max)
	        {   s_max=max; 
	            max=arr[i];
	        }
	        else if(arr[i]>s_max && arr[i]!=max)
	            s_max=arr[i];
	        
	    }
	    return s_max;
	}
};

