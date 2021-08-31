/**
 *  Name - Tejas Patil
 *  GR No - xxxxxxxx
 *  Roll No - xxxxxx
 *  Div - TY-C (C3 Batch) 
 *
 *  @author Tejas-PC
 **/
#include <iostream>
#include <string>
using namespace std;
string commonPrefixTwoString(string str, string sec)
{
    string prefix;
    for (int i = 0, j = 0; i < str.length() && j < sec.length(); i++, j++)
    {
        if (str[i] != sec[j])
            break;
        prefix.push_back(str[i]);
    }

    return prefix;
}

string commonPrefix(string arr[], int size)
{
    string prefix = arr[0];
    for (int i = 1; i < size; i++)
        prefix = commonPrefixTwoString(prefix, arr[i]);
    if (prefix.length() == 0)
        return "-1";
    return prefix;
}

int main()
{
    string arr[] = {"apple", "ape ", "april"};
    string arr2[] = {"after", "academy", "mindorks"};

    string res = commonPrefix(arr, 3);
    if (res == "-1")
    {
        cout << "No Common prefix found" << endl;
    }
    else
    {
        cout << "Common Prefix is : " << res << endl;
    }
    return 0;
}