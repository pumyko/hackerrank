#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));
    string period = s.substr(8, 2);
    
    if(hour != 12 && period == "PM") {
        hour += 12;
    }
    else if(hour == 12 && period == "AM"){
        hour = 0;
    }
    string res = (hour < 10 ? "0" : "") + to_string(hour) + s.substr(2, 6);
    return res; 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
