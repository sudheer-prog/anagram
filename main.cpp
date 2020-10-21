#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;

class Permutations {
    private:
        vector<vector<string>> stringsList;
        vector<vector<string>> generatePermutations(string input)
        {
            //Generate permutation algorithm
            permute(input.c_str(),0,input.length()-1); 
        }

        void swap((char *x, char *y)
        {
            char temp;
            temp = *x;
            *x = *y;
            *y = temp;
        }

        void permute(char *a, int i, int n)
        {
            int j;
            if (i == n)
                stringsList.push_back(convertToString(a, sizeof(a)); 
            else {
                for (j = i; j <= n; j++)
                {
                    swap((a + i), (a + j));
                    permute(a, i + 1, n);
                    swap((a + i), (a + j)); //backtrack
                }
            }
        }

    public:
        Permutations(string input)
        {
            stringsList = generatePermutations(input);
        }

        vector<vector<string>> getStringList()
        {
            return stringsList;
        }
}

class WordValidator {
    private:
        vector<string> validWords;

    public:
        WordValidator(string pathToDict)
        {
            string word;
            ifstream dictfile(pathToDict);
            if (dictfile.is_open())
            {
                while ( getline (dictfile,line) )
                {
                    validWords.push_back(line);
                }
            }
            dictfile.close();
        }

        bool isValidWord(string word)
        {
            for (auto i: validWords)
            {
                if (word == i)
                    return true;
            }

            return false;
        }
}

int main(int agrc, char *arg[])
{
    string input;

    cin >> input;
    //Get permutations
    vector<vector<string>> stringsList = Permutations(input).getStringList();
    WordValidator validatorDict("/usr/share/dict/british-english");

    for(auto randomString : stringsList) {
        pch = strtok (str," ");
        while (pch != NULL)
        {
            if (validatorDict.isValidWord(pch))
            {
                cout << pch << " ";
            }

            pch = strtok (NULL, " ");
        }
        cout << endl;
    }

}

