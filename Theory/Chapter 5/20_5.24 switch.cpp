/* switch */
#include <iostream>
 
using namespace std;
 
int main(){
 
     char ch;
 
    //Reading an alphabet from user
    cout<<"Enter any alphabet: ";
    cin>>ch;
 
    // checking vowel and consonant
 
     switch(ch)
    {
        case 'a':  //it's like or operator if u press a or A it will display vowel
		case 'A':
		cout<<"vowel";
            break;   // ka da case satisfy sho nu da ba dy da switch na bahar obasi
        case 'e':
		case 'E':
		cout<<"vowel";
            break;
        case 'i':
		case'I':
		cout<<"vowel";
            break;
        case 'o':
		case'O':
		cout<<"vowel";
            break;
        case 'u':
		case 'U':
		cout<<"vowel";
            break;
        default:  //the message inside the default will display when your input choice doesn't match with the above choices
		 cout<<"consonant";
    }
}
