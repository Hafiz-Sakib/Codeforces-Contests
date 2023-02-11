#include <bits/stdc++.h>
#include <map>

using namespace std;

struct student_data
{
    string email, blood_group;
    int day, month, year;
};

bool comp(student_data s1, student_data s2)
{
    return s1.email < s2.email;
}

int main()
{
    int n;
    cin >> n;
    string input, email, blood_group;
    int day, month, year, hour, minute, second, birthday_day, birthday_month, birthday_year;
    map<string, student_data> data;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        day = stoi(input.substr(0, 2));
        month = stoi(input.substr(3, 2));
        year = stoi(input.substr(6, 4));
        cin >> email;
        cin >> input;
        birthday_day = stoi(input.substr(0, 2));
        birthday_month = stoi(input.substr(3, 2));
        birthday_year = stoi(input.substr(6, 4));
        cin >> blood_group;
        if (data.count(email) == 0)
        {
            data[email] = {email, blood_group, birthday_day, birthday_month, birthday_year};
        }
        else
        {
            data[email] = {email, blood_group, birthday_day, birthday_month, birthday_year};
        }
    }

    vector<student_data> students_data;
    for (map<string, student_data>::iterator it = data.begin(); it != data.end(); it++)
    {
        students_data.push_back(it->second);
    }
    sort(students_data.begin(), students_data.end(), comp);

    int A_plus = 0, A_minus = 0, AB_plus = 0, AB_minus = 0, B_plus = 0, B_minus = 0, O_plus = 0, O_minus = 0;
    for (int i = 0; i < students_data.size(); i++)
    {
        if (students_data[i].blood_group == "A+")
        {
            A_plus++;
        }
        else if (students_data[i].blood_group == "A-")
        {
            A_minus++;
        }
        else if (students_data[i].blood_group == "AB+")
        {
            AB_plus++;
        }
        else if (students_data[i].blood_group == "AB-")
        {
            AB_minus++;
        }
        else if (students_data[i].blood_group == "B+")
        {
            B_plus++;
        }
        else if (students_data[i].blood_group == "B-")
        {
            B_minus++;
        }
        else if (students_data[i].blood_group == "O+")
        {
            O_plus++;
        }
        else if (students_data[i].blood_group == "O-")
        {
            O_minus++;
        }
    }

    cout << "A+ " << A_plus;
}