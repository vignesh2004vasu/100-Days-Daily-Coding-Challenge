Digory Kirke and Polly Plummer are two kids living next door to each other. The attics of the two houses are connected to each other
through a passage. Digory's Uncle Andrew has been secretly doing strange things in the attic of his house, and he always ensures that
the room is locked. Being curious, Digory suspects that there is another route into the attic through PollYs house, and being curious as
kids always are, they wish to find out what it is that Uncle Andrew is secretly up to.
So they start from Polly's house, and walk along the passageway to Digory's. Unfortunately, along the way, they suddenly find that some
of the floorboards are missing, and that taking a step forward would have them plummet to their deaths below.
Dejected, but determined, they return to Polly's house, and decide to practice long-jumping in the yard before they re-attempt the
crossing of the passage. It takes them exactly one day to master long-jumping a certain length. Also, once they have mastered jumping
a particular length L, they are able to jump any amount less than equal to L as well.
The next day they return to their mission, but somehow find that there is another place further up the passage, that requires them to
jump even more than they had practiced for. So they go back and repeat the process.
Note the following:
• At each point, they are able to sense only how much they need tojump at that point, and have no idea of the further reaches of the
passage till they reach there. That is, they are able to only see how far ahead is the next floorboard.
• The amount they choose to practice for their jump is exactly the amount they need to get across that particular part of the passage.
That is, if they can currently jump upto a length LO, and they require to jump a length LI(> LO) at that point, they will practice jumping
length LI that day.
• They start by being able to "jump" a length of 1.


Answer:
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    while (test--)
    {

        string str;
        cin >> str;
        int n = str.length();
        int days = 0;
        int count = 0;
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '.')
            {
                count++;
            }
            else
            {
                if (max < count)
                {
                    max = count;
                    days++;
                }
                count = 0;
            }
        }
        cout << days << endl;
    }

    return 0;
}
