#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


int main(){

    // Variables 
    int semesters;  
    vector<int> semester;

    cout << "How many semesters did you have?: ";
    cin >> semesters;

    for (int i = 0;i < semesters;i++) {
        int percentage;
        cout << "Enter your percentage starting from the first semester: " << endl;
        cin >> percentage;

        semester.push_back(percentage);
    }

    int sumOfPercentages = accumulate(semester.begin(), semester.end(), 0);

    float cgpa = (sumOfPercentages / semesters)/9.5;

    cout << "Your CGPA is " << cgpa;
    
    return 0;
}