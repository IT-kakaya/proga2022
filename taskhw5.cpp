#include <iostream>
using namespace std;

string TheAWord(string str1){ 
    string str2;
    str2.clear();
    if (str1[0] == 'A' || str1[0] == 'a'){
        for (int j = 0; j < str1.size() - 1; j++){
            if (str1[j] != ' '){
                str2.push_back(str1[j]);
                }
            else{
                break;
            }
        }
        str2.push_back(' ');
    }
    for (int i = 1; i < str1.size() - 1; i++){
        if ((str1[i] == 'A' || str1[i] == 'a') && str1[i-1] == ' '){
            for (int j = i; j < str1.size() - 1; j++){
                if (str1[j] != ' '){
                    str2.push_back(str1[j]);
                }
                else{
                    break;
                }
            }
            str2.push_back(' ');
        }
    }
    return str2;
}

int main()
{
    string str1;
    cout << "Enter the string:" << endl;
    getline(cin, str1);
    
    cout << "Words with the first letter A:" << endl << TheAWord(str1) << endl;
}
