#include <iostream>
#include "student.h"
#include <vector>
#include <algorithm>

using namespace std;

int main ()

{

    string sname;
    int sage;

    int selection =0;
    vector<Student>studentList;
    vector<Student>::iterator it = studentList.begin();

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            cout << "Valinta 0" << endl;


            cout << "Opiskelijan nimi? " << endl;
            cin >> sname;

            cout << "Opiskelijan ika? " << endl;
            cin >> sage;

            studentList.emplace_back(sname,sage);
            cout << "listattiin: " << sname << "ja " << sage << endl;
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout << "Valinta 1" << endl;
            cout << "Tulostetaan lista" << endl;
            for (auto &s: studentList) {
                //cout << s.getName() << ": " << s.getAge() << endl;
                s.printStudentInfo();
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "Valinta 2" << endl;
            cout << "Jarjestetaan aakkosjarjestyksessa" << endl;
            sort (studentList.begin(), studentList.end(), [](const Student &a, const Student &b){
                return a.getName() < b.getName();
            });
            for (auto &s: studentList) {
                s.printStudentInfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "Valinta 3" << endl;
            cout << "Jarjestetaan ikajarjestyksessa" << endl;
            sort (studentList.begin(), studentList.end(), [](const Student &a, const Student &b){
                return a.getAge() < b.getAge();
            });
            for (auto &s: studentList) {
                s.printStudentInfo();
            }
            break;
        case 4:
            cout << "Valinta 4" << endl;
            // Kysy käyttäjältä opiskelijan nimi
            cout << "Anna opiskelijan nimi: " << endl;
            cin >> sname;

            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.

            it = find_if(studentList.begin(), studentList.end(), [sname](const Student &a){
                return a.getName() == sname;
            });

            if (it != studentList.end()){
                cout << "Loytyy" << endl;
                it->printStudentInfo();
           }
            else {
                cout << "Ei Loytynyt" << endl;
           }

            break;

    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }
}while(selection < 5);

return 0;
}
