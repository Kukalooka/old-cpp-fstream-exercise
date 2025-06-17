#include <iostream>
#include <fstream>

using namespace std;


int unique(string word)
{
    int result = 0;
    string usedup = "";

    for(int i = 0; i < word.length(); i++){
        for(int j = 0; j <= usedup.length(); j++){
            if(usedup[j] == word[i])
            {
                break;
            }

            if(j == usedup.length()){
                result++;
                usedup += word[i];
                break;
            }
        }
    }

    return result;
}


int main(){
    fstream file("untitled.txt");
    string lol = "";

    int uniqueness = 0;
    string thatword = "";

    while(file >> lol){
        cout << lol << " " << unique(lol) << endl;

        if(unique(lol) > uniqueness)
        {
            uniqueness = unique(lol);
            thatword = lol;
        }

    }

    cout << uniqueness << " " << thatword;

    return 0;
}