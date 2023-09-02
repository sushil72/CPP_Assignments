#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

void checkNmber()
{
    int number;
    cout << "enter 10 digit mobile number :";
    cin >> number;
    int numLength = 0;
    for (int i = 0; number != 0; i++)
    {
        number = number / 10;
        numLength++;
    }
    cout << numLength << endl;
    try
    {
        if (numLength > 10 || numLength < 10)
            throw number;
        else
            cout << "mobile number is valid " << endl;
    }
    catch (int n)
    {
        cout << "Number is not of 10 digit" << endl;
    }
}

int isvalidEmail(string email)
{
    int len = email.length();
    int i, atoffset, Dotoffset;
    for (i = 0; email[i] != '\0'; i++)
    {
        if (email[i] == '@')
            atoffset = i;
        if (email[i] == '.')
            Dotoffset = i;
    }
    //  cout<<len<<endl;
    //  cout<<atoffset<<endl<<Dotoffset<<endl;
    if (atoffset == 0 || Dotoffset == 0 || Dotoffset == len - 1 || atoffset > Dotoffset)
        return 0;
    else
        return 1;
}
void Check_email()
{
    string email;
    cout << "enter Your email address:" << endl;
    cin >> email;
    int i;

    try
    {
        if (isvalidEmail(email))
            cout << "Email is valid:";
        else
            throw 'c';
    }
    catch (char c)
    {
        cout << c << " "
             << "Email is not Valid" << endl;
    }
}

void test_try(int num)
{
    try
    {
        if (num > 0 && num <= 9)
        {
            cout << "\n number is single digit";
            throw num;
        }
        else
        {
            cout << "\n number is not single digit";
            throw "number is not single digit";
        }
    }

    catch (int num)
    {
        cout << "\nnumbe is signle digit";
    }
    catch (char b[100])
    {
        cout << "number is not sigle digit";
    }
}

/*Write a C++ program to accept a username if the username has less than 6 characters or does contain any digit or special symbol*/

int checkUsername(string user)
{
    int i, sploffset = -1, digiOffset = -1;
    for (int i = 0; i < user.length(); i++)
    {
        if (isdigit(user[i]))
            digiOffset = i;
        if (!isalpha(user[i]) && digiOffset == -1)
            sploffset = i;
    }
    if(sploffset==-1 && digiOffset ==-1)
    return 0;
    if(digiOffset>=0 || sploffset >=0)
    return 1;
}
void Username()
{
    string user;
    // char special[] = {'#', '$', '%', '&', '!', '?', '@'};
    cout << "Enter username:";
    cin >> user;
    int i, len, sploffset = -1, digiOffset = -1;

    len = user.length();
    try
    {
        if (checkUsername(user))
            cout << "user name is valid";
        else
            throw 'c';
    }
    catch (char c)
    {
        cout <<"length should be atleast 6 character long " << endl;
    }
}


int checkPassword(string pass)
{
    int spl=-1,digi=-1,alph=-1;
    if(pass.length()<6)
    return 0;
    for (int i = 0; i < pass.length(); i++)
    {
        if(isalpha(pass[i]))
        alph=i;
        if(isdigit(pass[i]))
        digi=i;
        if(!isalpha(pass[i]) && !isdigit(pass[i]))
        spl=i;
    }
    
    cout<<alph<<endl<<digi<<endl<<spl<<endl;

    if(spl==-1 || digi ==-1 || alph ==-1)
    return 0;
    else
    return 1; 
}
void password()
{
    string pass;
    cout<<"enter Password"<<endl;
    getline(cin,pass);
    try{
        if(checkPassword(pass))
        cout<<"password is valid";
        else throw 3;
    }
    catch(int a)
    {
        cout<<"Password is not valid , it should be atleas 6 character long"<<endl<<"it chould contain character , number (0-9) and special character"<<endl;
    }
}

int main()
{
    int n;
    //     cout<<"enter number:";
    //     cin>> n;
    //  test_try(n);
    // Check_email();
    // checkNmber();
    Username(); cout<<endl;
    fflush(stdin);
    password();
    return 0;
}