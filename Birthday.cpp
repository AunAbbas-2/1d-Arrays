#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int n = 365;
    int count_1 = 0;

    bool calender[n];

    while (true)
    {
        count_1++;
        int birthday = (rand() % 365);
        if (calender[birthday] == true)
        {
            break;
        }
        calender[birthday] = true;
    }
    cout << "Count of people entered before there is a match: " << count_1 << endl;
   

    int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        int count = 0;

        bool calender[n];

        while (true)
        {
            count++;
            int birthday = (rand() % 365);
            if (calender[birthday] == true)
            {
                break;
            }
            calender[birthday] = true;
             cout<<birthday<<endl;
        }
       
        sum = sum + count;
    }
    float avg_sum = sum / 1000.0;
    cout << "Average count of people before match is: " << avg_sum << endl;

     return 0;
}
