#include <iostream>
#include <string>

using namespace std;

int length(string str){
    int len = 0;
    for (char c:str) {
        len ++;
    }
    return len;
}

void traverse(string str){
    for (char c: str){
        cout<<c<<" ";
    }
}

string concatenate(string str1, string str2) {
    return str1 + str2;
}

string reverse(string str){
    string rev;
    for (char c:str){
        rev = c + rev;
    }
    return rev;
}

int main(){
    int choice;
    string str1, str2;

    cout << "STRING MENU\n";
    cout << "1. Find Length\n";
    cout << "2. Traverse String\n";
    cout << "3. Concatenate Strings\n";
    cout << "4. Reverse String\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice){
        case 1:
            cout << "Enter string: ";
            cin >> str1;
            cout << "Length = " << length(str1) << endl;
            break;
        case 2:
            cout << "Enter string: ";
            cin >> str1;
            traverse(str1);
            break;
        case 3:
            cout << "Enter first string: ";
            cin >> str1;
            cout << "Enter second string: ";
            cin >> str2;
            cout << "Concatenated String = " << concatenate(str1,str2) << endl;
            break;
        case 4:
            cout << "Enter string: ";
            cin >> str1;
            cout << "Reversed String = " << reverse(str1) << endl;
            break;
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice\n";
        }
    return 0;
}
