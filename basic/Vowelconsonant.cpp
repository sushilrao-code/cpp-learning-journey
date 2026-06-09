#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char c;
    bool isLowercaseVowel ,isUppercaseVowel;
   
    cout<<"Enter an Alphabet\n";
    cin>>c;
     isLowercaseVowel = (c =='a'|| c=='e' || c=='i' || c=='o'|| c=='u');
    isUppercaseVowel = (c =='A' || c=='E' || c=='I'|| c=='O' || c=='U');
    if(isLowercaseVowel || isUppercaseVowel){
        cout<<c <<" "<<"Vowel";
}
    else{
        cout<<c <<" "<<"Consonant";
    }
    return 0;
} 