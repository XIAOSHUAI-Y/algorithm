#include <iostream>
#include <algorithm>

using namespace std;
int n;

struct stu
{
    int number;
    int chanese;
    int math;
    int english;
    int sum;
} student[310];

bool cmp(stu a, stu b)
{
    if (a.sum > b.sum)
        return 1;
    else if (a.sum < b.sum)
        return 0;
    else
    {
        if (a.chanese > b.chanese)
            return 1;
        else if (a.chanese < b.chanese)
            return 0;
        else
        {
            if (a.number > b.number)
                return 0;
            else
                return 1;
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> student[i].chanese >> student[i].math >> student[i].english;
        student[i].number = i;
        student[i].sum = student[i].chanese + student[i].math + student[i].english;
    }

    sort(student + 1, student + 1 + n, cmp);
    for (int i = 1; i <= 5; i++)
    {
        cout << student[i].number << " " << student[i].sum << endl;
    }
    return 0;
}