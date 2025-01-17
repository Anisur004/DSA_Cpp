// //Brute force
// #include<bits/stdc++.h>
// using namespace std;
// 	 void findRepeatingElements(int arr[],int n) {
// 	    int cnt = 0;
// 	    int dup[n] ;
// 	    for(int i=0;i<n-1;i++) {
// 	        for(int j=i+1;j<n;j++) {
// 	            if(arr[i]==arr[j]) dup[cnt++] = arr[i];
// 	        }
// 	    }
// 	    cout<<"The repeating elements are: ";
// 	    for(int i=0;i<cnt;i++) 
// 	        if(dup[i] != dup[i+1]) cout<<dup[i]<<" ";
// 	}
// 	int main() {
// 		int arr[] = {1,1,2,3,4,4,5,2};
// 		findRepeatingElements(arr,8);
// 	}

//     //sorting
//     #include<bits/stdc++.h>
// using namespace std;

// void findRepeatingElements(vector<int>& arr) {
//     sort(arr.begin(),arr.end());
    
//     cout<<"The repeating elements are: ";
//     for(int i=0;i<arr.size()-1;i++) 
//         if(arr[i] == arr[i+1]) cout<<arr[i]<<" ";
// }

// int main() {
//     vector<int> arr = {1,1,2,3,4,4,5,2};
//     findRepeatingElements(arr);
//     return 0;
// }

//map
#include<bits/stdc++.h>
using namespace std;

void findRepeatingElements(vector<int>& arr) {
    unordered_map<int,int> elementCount;
    for(auto i:arr) ++elementCount[i];
    
    cout<<"The repeating elements are: ";
    for(auto i:elementCount) {
        if(i.second > 1) cout<<i.first<<" ";
    }
}

int main() {
    vector<int> arr = {1,1,2,3,4,4,5,2};
    findRepeatingElements(arr);
    
    return 0;
}