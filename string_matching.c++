//string matching keyboard typing suggestions
#include <iostream>
#include <cstring>
int z;
using namespace std;
int main()
{
    string str1="oooonionoonionooonionoonion";
    string target;
    cout<<"Target: "<< str1<<endl;
    cout<<"Enter string to match with str1 above: "<<endl;
    cin>>target;
    int count=0;
    int size_str1 = str1.size();
    int size_target= target.size();
    // int size_str2= str2.size();
    int k=0;
    for(int i=0; i<size_str1; i++) // outer loop
    {
        
        if(str1[i]==target[0])
        {
            //check whether next 3 alphabets are same as target or not
            int k=0;
            // cout<<i;
            string str2="";
            int size_str2= str2.size();
            for( z=i; z<size_target;z++) //inner loop
            {
                if(str1[z]==target[k])
                {
                    str2.append(str1,z,1);
                    // if(str2==target)
                    // {
                    //     // cout<<"String found"<<endl;
                    // }
                    k++;
                }
                else
                {
                    break;
                }
                if(str2==target)
                    {
                        count++;
                        cout<<"Target found at = "<<z-4<<" shoot!!!!!"<<endl ;
                    }
            }
        } 
        size_target++;
    }
        cout<<"Original string= "<<str1<<endl;
        cout<<"String to match= "<<target<<endl;
        // cout<<"string match found= "<<str2<<endl;
        cout<<"Number of times string occur= "<<count<<endl;
    return 0;
    }



// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string str1 = "oonionoonionooniononion";
//     string target;

//     cout << "Enter the target string to search for: ";
//     cin >> target;

//     int count = 0;
//     int size_str1 = str1.size();
//     int size_target = target.size();

//     for (int i = 0; i <= size_str1 - size_target; i++) {
//         if (str1[i] == target[0]) {
//             int match = 1; // Flag to track matching characters
//             for (int j = 0; j < size_target; j++) {
//                 if (str1[i + j] != target[j]) {
//                     match = 0;
//                     break;
//                 }
//             }
//             if (match) {
//                 count++;
//                 cout << "Target found at index = " << i << " shoot!!!!!" << endl;
//             }
//         }
//     }

//     cout << "Original string = " << str1 << endl;
//     cout << "String to match = " << target << endl;
//     cout << "Number of times string occurs = " << count << endl;

//     return 0;
// }
