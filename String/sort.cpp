#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string countSort(string str){
    vector<int> freq(26, 0);

    // storing frequency of every string character
    for(int i = 0; i< str.size(); i++){
        int index = str[i] - 'a';
        freq[index]++;
    }
    // create our sorted string

    int j = 0 ;
    for (int i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
            str[j++] = i + 'a';
        }
        
    }
    
    return str;
}

int main(){
    string str = "hello";
    //below method for sorting the string that solve using in-bulid function i.e sort().
    // sort(str.begin(), str.end());
    // cout<<str<<endl;

    /*method for sorting the string without using in-build function*/
    
    cout<<countSort(str);
    return 0;
}