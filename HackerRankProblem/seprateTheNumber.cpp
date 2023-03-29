#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'separateNumbers' function below.
 *
 * The function accepts STRING s as parameter.
 */

void separateNumbers(string s) {
    // int q;
    // cin>>q;
    // cout<<"The value of q is : "<<q<<endl;
    // for (int i =0 ; i < s.size(); i++) {
        
        bool flag = false;
        long long int ans = 0;
        if (s[0] == '0') {
            long long int temp = 1;
            string str = "0";
            while (str.size() < s.size()) {
                str = str + to_string(temp);
                temp++;
            }
            if (str == s) {
                flag = true;
            }
        }
        
        else {
            // string str2;
            
            for (int i = 1; i <= s.size()/2; i++) {
                ans = ans *10;
                ans = ans + (s[i-1] - '0');
                // cout<<"The ans is : "<<ans<<endl;
                long long int temp = ans + 1;
                string ss = s.substr(0,i);
                while (ss.size()< s.size()) {
                    ss = ss + to_string(temp);
                    temp++;
                }
                
                
                if (ss == s) {
                    flag = true;
                    break;
                }
            }
        }
        if (flag == true && s.size()>1) {
            cout<<"YES"<<" "<<ans<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
    }
// }

int main()
{
    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        separateNumbers(s);
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
