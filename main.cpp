#include <iostream>
#include <string>
using namespace std;

/**
 *
 */
int main() {
  // make variables
  string n;
  string str;
  double a, b;
  // step 1: accept user input
  cin >> n;

  // use a while loop to input or separate?
  // A: 65, Z: 91
  // 656565 -> AAA
  // s_output
  // 656565 -> 65, 65, 65 -> A, 65, 65 -> A, A, 65 -> A, A, A
  // for(i=0; i < len(s); i += 2) {
  //  ascii = s[i, i+2];
  // s_asci = "66" // search how to concert string to number
  // n_asci = 66
  // 'A' + (n_sci - 65)
  // 'A' + 1 = B
  //  s_output.append(B) -> AB -> ABZ
  //}
  // print s_output
  string output;
  for (int i = 0; i < n.length(); i+=2) {
    string s = n.substr(i, i+2);
    int n_s = stoi(s);
    char ch = 'A' + (n_s-'A');
    output.push_back(ch);
    
    
    // int j = i + 1;
    // char a = n[i], b = n[j];
    // char c = a * 10 - '0' + b - '0' + 'A';
    // cout << c;
    // int j = 0;
    // int a;
    // while(j <= 2){
    //   //remembering 1 digit then forgeting.
    //   a = n[i]-'0';
    //   cout<<a;
    //   j++;
    //   i++;
    //   cout<<a;
    // }
    // a = n/100;
    // //6538/100 = 65.38
    // b = a-n/100;
    // //65-65.38 = -.38
    // a = a-b;
    // //6538/100 = 65.38-.38
    // b = b*100;
    // a=b;
    // //.38*100 = 38
    // char c = a;
    // char d = b;
    // cout<<d;
    // cout<<c<<d;
  }
  cout<<output;
  // for(int i = 0, j = 1; i<n; i++, j++){
  //   //string str = n.substr(i, j);    //divide a by two to find to ascii
  //   values then subtract it by char 0 and print

  // }
  // let user input number and string
  // then make a loop for converting and output
}