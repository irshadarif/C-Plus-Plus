/* vowel by || operator */
#include <iostream>
using namespace std;
int main()
{
    char c;

    cout << "Enter an alphabet: ";
    cin >> c;
   
     if( c == 'a' || c=='A' || c == 'e' || c=='E' || c == 'i' || c=='I' || c == 'o' ||c=='O'|| c=='C' ||c == 'u' || c=='C')
    
        cout << c << " is a vowel";
    else
        cout << c << " is a consonant";
}
   

