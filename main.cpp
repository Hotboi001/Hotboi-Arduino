#include <iostream>

using namespace std;
#include <string>

int main()
{
   int Age;
   string name;
    string Option;
 string A = "HEADACHE";
 string B = "BODY PAINS";
 string C = "SOUR THROAT";
   cout << "WELCOME TO DAVIS CARE"<< endl;
   cout << "Your mobile doctor app" << endl<<endl;
    cout << "TYPE YOUR NAME" << endl;
   getline(cin, name);
    cout << "Welcome "<<name<< endl<<endl;

    loop:
    cout << "BELOW ARE SOME SYMPTOMS, What are yours? " << endl;
    cout << "(A) HEADACHE "<< endl<<"(B) BODY PAINS "<< endl<<"(C) SOUR THROAT "<<endl<<endl;
   cout << "PLEASE SELECT AN OPTION: (A,B,C) BELOW "<<endl;

    cin>> Option;


   if (Option == "A"){
        cout << "You have "<< A << endl;
        cout << "How old are you? " << endl;
        cin>> Age;
        if (Age <= 18){
             cout << "I RECOMMEND 1 TABLET OF PARACETAMOL AND 30MINS REST IMMEDIATELY" << endl<<endl;
             cout <<"GO BACK TO THE OPTIONS"<<endl;
                cin>> Option;
                cout<<endl;}
        else {
            cout << "I RECOMMEND 2 TABLET OF PARACETAMOL AND 1HR REST IMMEDIATELY" << endl<<endl;
            cout <<"TYPE (D) TO GO BACK TO THE OPTIONS"<<endl;
                cin>> Option;
                cout<<endl;

}
}


        if (Option == "B"){
        cout << "You have "<< B << endl<<endl;
        cout << "How old are you? " << endl;
        cin>> Age;
        if (Age <= 18){
             cout << "I RECOMMEND PAIN RELIEVER OF 250mg AND A GLASS OF WATER" << endl<<endl;
              cout <<"TYPE (D) TO GO BACK TO THE OPTIONS"<<endl<<endl;
                cin>> Option;
                cout<<endl;}
        else {
            cout << "I RECOMMEND PAIN RELIEVER OF 500mg AND A GLASS OF WATER" << endl<<endl;
             cout <<"TYPE (D) TO GO BACK TO THE OPTIONS"<<endl<<endl;
                cin>> Option;
                cout<<endl;
        }

    }

        if (Option == "C"){
            cout << "You have "<< C << endl;
            cout << "How old are you? " << endl;
            cin>> Age;
                if (Age <= 18){
                    cout << "I RECOMMEND STREPSILS OF 250mg AND A 10MINS REST" << endl;
                     cout <<"TYPE (D) TO GO BACK TO THE OPTIONS"<<endl;
                cin>> Option;
                cout<<endl;
        }
                else {
                    cout << "I RECOMMEND STREPSILS OF 500mg AND A 30 MINS REST" << endl;
                     cout <<"TYPE (D) TO GO BACK TO THE OPTIONS"<<endl;
                cin>> Option;
                cout<<endl;
        }
        }
    if (Option == "D") goto loop;

    return 0;
}
