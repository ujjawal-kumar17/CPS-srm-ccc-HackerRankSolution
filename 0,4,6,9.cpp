#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'closedPaths' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER number as parameter.
 */

int closedPaths(int number) {
    int closedPathsCount = 0;
    while(number > 0) {
        int digit = number % 10;
        switch(digit) {
            case 0:
            case 4:
            case 6:
            case 9:
                closedPathsCount++;
                break;
            case 8:
                closedPathsCount += 2;
                break;
        }
        number /= 10;
    }
    return closedPathsCount;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string number_temp;
    getline(cin, number_temp);

    int number = stoi(ltrim(rtrim(number_temp)));

    int result = closedPaths(number);

    fout << result << "\n";

    fout.close();

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
