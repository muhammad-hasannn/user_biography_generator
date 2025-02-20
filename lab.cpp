#include<iostream>
#include<string>

using namespace std;
int main(){
    int birth_year=0;
    string name, uni, hob, pet;
    cout << "What is your name? ";
    getline(cin,name);
    cout << "Enter year of birth: ";
    cin >> birth_year;
    cout << "Name of university: ";
    cin.ignore();
    getline(cin,uni);
    cout << "Favourite hobby: ";
    getline(cin,hob);
    cout << "Pet's name: ";
    getline(cin,pet);
    cout <<endl;
    cout << "\"There lives a person names "<<name<<" who is currently "<<2025-birth_year<<" years of age. "<<name<<
    " is studying at "<<uni<<". It is interesting because "<<name<<" likes to read with "<<pet<<" and they live happily after.!\"";
}
