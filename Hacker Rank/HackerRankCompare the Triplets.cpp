#include<iostream>
using namespace std;
int main(){
  int arr[101], array[101];
  int size =3;
  int i, j;

  for(i =0; i<size; i++){
    cin>>arr[i];
    
  }
  for(j=0; j<size; j++){
    cin>>array[j];
  }
  int alice, bob;
  int alice1, alice2, alice3, bob1, bob2, bob3;
  while(arr[0]&& array[0]>=0){
  if(arr[0] > array[0] ){
  alice1 = 1;
  break;
  }
  else if(arr[0] < array[0] ) 
  {
    bob1 = 1;
    break;
  }
  else if(arr[0] == array[0] ) {
   alice1=0;
    bob1 = 0;
    }
    }
    while(arr[1]&& array[1]>=0){
   if(arr[1] > array[1] )
   {
     alice2 = 1;
     break;
     }
  else if(arr[1] < array[1] )
   {
     bob2 = 1;
     break;
   }
  else if(arr[1] == array[1]){ 
    alice2 =0;
  bob2 = 0;
  break;
    }  
    }
    while(arr[2]&& array[2]>=0){
   if(arr[2] > array[2] )
   {
     alice3 = 1;
     break;
   }
  else if(arr[2] < array[2] )
   {
     bob3 = 1;
     break;
   }
  else if(arr[2] == array[2] )
  { 
    alice3=0;
    bob3 = 0;
    break;
    }
    }
  alice = alice1 + alice2 + alice3;
  bob = bob1 + bob2 + bob3;
  cout<<alice<<" " <<bob<<endl;
  return 0;
}
// And also this code included...
/*#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the compareTriplets function below.
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice = 0;
    int bob = 0;
    vector <int> answer(2);
    for(int i = 0; i < 3; i++) {
        if (a[i] > b[i]) alice++;
        if (a[i] < b[i]) bob++;
    }
    answer[0] = alice;
    answer[1] = bob;
    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(3);

    for (int i = 0; i < 3; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    string b_temp_temp;
    getline(cin, b_temp_temp);

    vector<string> b_temp = split(rtrim(b_temp_temp));

    vector<int> b(3);

    for (int i = 0; i < 3; i++) {
        int b_item = stoi(b_temp[i]);

        b[i] = b_item;
    }

    vector<int> result = compareTriplets(a, b);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
*\