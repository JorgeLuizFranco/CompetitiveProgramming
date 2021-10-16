
// C++ program to print all permutations with
// duplicates allowed using next_permutation
#include <bits/stdc++.h>
using namespace std;
 int cont=0;
// Function to print permutations of string str
// using next_permutation
void permute(string str)
{
    // Sort the string in lexicographically
    // ascennding order
    sort(str.begin(), str.end());
 
    // Keep printing next permutation while there
    // is next permutation
    do {
        if(str[str.find('0')+1]!='0' and str[str.find('0')-1]!='0'){
            cout << str << endl;
            cont++;
        }
    } while (next_permutation(str.begin(), str.end()));
}
 
// Driver code
int main()
{
    string str = "OMIF2020";
    permute(str);
    cout<< '\n'<< cont <<'\n';
    return 0;
}