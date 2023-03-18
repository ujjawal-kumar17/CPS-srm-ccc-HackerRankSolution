#include<iostream>

int main(){
    std::string word, hello="hello";
    std::cin>>word;
    int j=0, pas=0;
    for(int i=0; i<word.length();i++){
        if(word[i]==hello[j]){
            j++;
            pas++;
        }
    }
    if(pas==5){
        std::cout<<"YES";
    }else{
        std::cout<<"NO";
    }
    return 0;
}
