#include<bits/stdc++.h>
using namespace std;
string ans;


int main() {

    cout << endl;
    cout << endl;

    cout << "\t\t\t_*_*_*_*_*_*_*_*_*_*_*_*_*_*_" << endl;
    cout << "\t\t\t_*Password Strength Checker*_" << endl;
    cout << "\t\t\t_*_*_*_*_*_*_*_*_*_*_*_*_*_*_" << endl;

    cout << endl;
    cout << endl;

    cout<<"\t\t\t\t    ***** "<<endl;
    cout<<"\t\t\t\t    *   * "<<endl;
    cout<<"\t\t\t\t  *********"<<endl;
    cout<<"\t\t\t\t  **** ****"<<endl;
    cout<<"\t\t\t\t  *********"<<endl;

    cout << endl;

    do{

    cout << "Please, Enter Your Password : " << endl;
    string password; cin >> password;
    int pass_length = password.size();

    int point_upper = 0;
    int point_lower = 0;
    int point_digit = 0;
    int point_symbol = 0;

    int point = 0;

    for(int i = 0; i < pass_length; i++) {
        if(password[i] >= 48 && password[i] <= 57) {
                point_digit++;
        }
       else if(password[i] >= 97 && password[i] <= 125) {
                point_lower++;
        }
        else if(password[i] >= 65 && password[i] <= 90) {
                point_upper++;
        }
        else {
                point_symbol++;
        }
    }

    if(point_digit > 0) {
        point += 50;
    }

    if(point_lower > 0) {
        point += 50;
    }

    if(point_upper > 0) {
        point += 50;
    }

    if(point_symbol > 0) {
        point += 50;
    }


    if(point_digit > 0 && point_lower > 0 && point_upper > 0 && point_symbol > 0) {
        point += 100;
    }

    if(point <= 50 || pass_length < 8) {
        cout << "WEAK" << endl;
    }

    else if(point > 50 && point <= 100) {
        cout << "AVERAGE" << endl;
    }

    else if(point >= 150 && point <= 200) {
        cout << "STRONG" << endl;
    }


    else if(point > 200) {
        cout << "SECURE" << endl;
    }


    cout << "If you want to check again Please press the key : ' y ' " << endl;
    cin >> ans;
    cout << endl;
    cout << endl;


    }while(ans == "y");

    return 0;

}
