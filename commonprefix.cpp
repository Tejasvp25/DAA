/**
 *  Name - Tejas Patil
 *  GR No - 22020163
 *  Roll No - 323080
 *  Div - TY-C (C3 Batch) 
 *
 *  @author Tejas-PC
 * 
 * https://github.com/Tejasvp25/DAA/blob/master/commonprefix.cpp
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
    cout << "Example 1 : ";
    if (res == "-1")
    {
        cout << "No Common prefix found" << endl;
    }
    else
    {
        cout << "Common Prefix is : " << res << endl;
    }

    cout << "Example 2 : ";
    res = commonPrefix(arr2, 3);
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