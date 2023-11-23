
Given a dictionary of words where each word follows CamelCase notation,
print all words (in lexicographical order) in the dictionary that match with a given pattern consisting of uppercase characters only.
Example: GeeksForGeeks matches the pattern "GFG", because if we combine all the capital letters in GeeksForGeeks they become GFG.
Also note "GeeksForGeeks" matches with the pattern "GFG" and also "GF", but not matches with "FG".
CamelCase is the practice of writing compound words or phrases such that each word or abbreviation begins with a capital letter.
Common examples include PowerPoint and Wikipedia, GeeksForGeeks, CodeBlocks, etc.

Example 1:

Input:
N=3
Dictionary=["WelcomeGeek",
"WelcomeToGeeksForGeeks","GeeksForGeeks"]
Pattern="WTG"
Output:
WelcomeToGeeksForGeeks
Explanation:
Since only WelcomeToGeeksForGeeks matches 
the pattern, it is the only answer.
Example 2:

Input:
N=8
Dictionary=["Hi","Hello","HelloWorld",
"HiTech","HiGeek","HiTechWorld",
"HiTechCity","HiTechLab"]
Pattern="HA"
Output:
-1
Explanation:
Since the pattern matches none of the words
of the string,the output is -1.
Answer:
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        vector<string> result;

        for (const string& word : Dictionary) {
            int patternIndex = 0;
            bool match = true;

            for (char ch : word) {
                if (isupper(ch)) {
                    if (ch != Pattern[patternIndex]) {
                        match = false;
                        break;
                    }
                    patternIndex++;

                    if (patternIndex == Pattern.size()) {
                        break;
                    }
                }
            }

            if (match && patternIndex == Pattern.size()) {
                result.push_back(word);
            }
        }

        if (result.empty()) {
            result.push_back("-1");
        }
        return result;
   
    }
};
