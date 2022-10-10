#include<iostream>
#include<fstream> 
#include<cstring>
using namespace std;


bool hasRegistered()
{
    string username, password,email_address, un, pw, ad; 

    cout << "Enter username :";
    cin >> username;

    cout << "Enter password :";
    cin >> password;

    cout << "Enter email_adress :";
    cin >> email_address;
    ifstream read("data\\" + username + "main.txt"); 
   
    getline(read, un);
    getline(read, pw); 
    getline(read, ad);

    if (un == username && pw == password && ad == email_address)
    {
        return true;  
    }
    else
    {
        return false;
    }
}

int main()
{

    int choice;

    cout << "1 : Register \n2 :Login\nYour choice :";
    cin >> choice;
    if (choice == 1)
    {
        string username, password, email_address;

        cout << "select a username :";
        cin >> username;
        cout << "select a password :";
        cin >> password;
        cout << "Select a email_address :";
        cin >> email_address;

        ofstream file;
        file.open("userinfo\\" + username + "main.txt");
        file<<"username :"<<username<<endl<<"password :"<<password<<"email"<<email_address; //the data is registered into our file
        file.close();

    main();
    }

    else if(choice==2)
    {
        
       bool status =hasRegistered();

       if(!status) 
       {
          cout<<"Invalid user name password :"<<endl;
          system("PAUSE");


          return 0;
       }
       else 
       {
           cout<<"Successfully Logged in"<<endl;
           system("pause");
           return 1;
       }
    }
}
