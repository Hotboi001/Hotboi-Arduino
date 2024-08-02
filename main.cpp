#include <iostream>

using namespace std;


float multiplication (float f,float g){
float t;
t = f*g;
return (t);
}
int main()
{
    string Username;
    int Password;
     string Option;
     string A;
     string B;
     string C;
     int n;
     float AMOUNT;
    Username == "DAVIS UDO";
    Password == 12345;
    cout << "WELCOME TO DAVE ONLINE PHONE MARKET" <<endl<<endl;
    cout << "ENTER USERNAME: " << endl;
   getline(cin,Username);
    cout <<endl;
    cout << "ENTER PASSWORD: " << endl;
    cin>>Password;

if (Username == "DAVIS UDO" && Password == 12345){

        cout<<"CORRECT LOGIN, REDIRECTING "<<endl<<endl;

}
    else  {

        cout<<"INCORRECT LOGIN, RETRY"<<endl;


if (Username == "DAVIS UDO" && Password == 12345){
        cout<<"WELCOME "<<Username<<endl<<endl;
        cout<<"WE HAVE:" <<endl<<endl;
        cout<<"(A) IPHONES "<< endl<<"(B) SAMSUNGS "<< endl<<endl;
    cout << "PLEASE SELECT AN OPTION: (A,B) BELOW "<<endl;
    cin>> Option;
    A = "IPHONE";
    B = "SAMSUNG";

    if (Option == "A"){
        cout << "You need an "<< A << endl<<endl;
        cout<<"WE HAVE:" <<endl<<endl;
        cout<<"(A) IPHONE X "<< endl<<"(B) IPHONE 13 PRO MAX "<< endl<<endl;
        cout << "PLEASE SELECT AN OPTION: (A,B) BELOW "<<endl<<endl;
        cin>> Option;
        if (Option == "A")
        cout << "How many pieces of IPHONE X do you need " << endl<<endl;
       cin>>n;
       cout << "How want "<<n<<" Pieces of IPHONE X"<< endl<<endl;
       AMOUNT = multiplication (150000,n);
    cout << "YOU ARE TO PAY N"<<AMOUNT<< endl<<endl;
    cout << "PROCEED TO PAYMENT"<<endl<<endl;

        if (Option == "B")
        cout << "How many pieces of IPHONE 13 PRO MAX do you need " << endl<<endl;
       cin>>n;
       cout << "How want "<<n<<" Pieces of IPHONE 13 PRO MAX"<< endl<<endl;
       AMOUNT = multiplication (85000,n);
    cout << "YOU ARE TO PAY N"<<AMOUNT<< endl<<endl;
    cout << "PROCEED TO PAYMENT"<<endl<<endl;
    }
    if (Option == "B"){
        cout << "You need an "<< B << endl<<endl;
        cout<<"WE HAVE:" <<endl<<endl;
        cout<<"(A) SAMSUNG GALAXY NOTE 20 "<< endl<<"(B) SAMSUNG GALAXY S20 ULTRA  "<< endl<<endl;
        cout << "PLEASE SELECT AN OPTION: (A,B) BELOW "<<endl<<endl;
        cin>> Option;

        if (Option == "A"){
        cout << "How many pieces of SAMSUNG GALAXY NOTE 20 do you need " << endl<<endl;
       cin>>n;
       cout << "How want "<<n<<" Pieces of SAMSUNG GALAXY NOTE 20"<< endl<<endl;
        AMOUNT = multiplication (350000,n);
        cout << "YOU ARE TO PAY N"<<AMOUNT<< endl<<endl;
        cout << "PROCEED TO PAYMENT"<<endl<<endl;
        }
        else
        cout << "How many pieces of SAMSUNG GALAXY S20 ULTRA do you need " << endl<<endl;
       cin>>n;
       cout << "How want "<<n<<" Pieces of SAMSUNG GALAXY S20 ULTRA"<< endl<<endl;
        AMOUNT = multiplication (450000,n);
        cout << "YOU ARE TO PAY N"<<AMOUNT<< endl<<endl;
        cout << "PROCEED TO PAYMENT"<<endl<<endl;

    }
}
    return 0;
}
}
