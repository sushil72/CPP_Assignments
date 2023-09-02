/*The range of ASCII values for uppercase letters A-Z is 65-90, and the range for lowercase letters a-z is 97-122.*/
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
/*
Write a C++ program to create a file and print “File created successfully” and throw
an error if file is not created.
*/

void file1()
{
   fstream file1;
   file1.open("D:/Desktop/C++ bootcamp mysirg/Files/file1.txt", ios::app);
   try
   {
      if (file1)
      {
         cout << "File Created successfully";
         file1 << "This is File 1 for the question numbe 1 from assignment 34 file handling";
      }
      else
         throw 'c';
   }
   catch (char ch)
   {
      cout << "unexpected exception while creating a file ";
   }
   catch (...)
   {
      cout << "unexpected exception while creating a file ";
   }
   file1.close();
}

/*2. Write a C++ program to read a text file and count the number of characters in it ? .*/
void file2()
{
   int counter = 0, space = 0;
   ifstream file2;
   file2.open("D:/Desktop/C++ bootcamp mysirg/Files/a.txt");
   while (!file2.eof())
   {
      char ch;

      file2.get(ch);
      if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
         counter++;
      if (ch == ' ')
         space++;
      cout << ch;
   }

   cout << "\nnumber of character :" << counter << endl;
   cout << "number of space:" << space << endl;
   file2.close();
}
/*Write a C++ program to open an output file 'a.txt' and append data to it.
 */
void file3()
{
   ofstream fout;
   fout.open("D:/Desktop/C++ bootcamp mysirg/Files/a.txt", ios::app);
   fout << "this is a.txt file" << endl;
   fout << "hello its working now";
}
/*
Write a program to copy the contents of one text file to another while changing the
case of every alphabet.
*/
void file4()
{
   ofstream fout;
   fout.open("D:/Desktop/C++ bootcamp mysirg/Files/second.txt");
   ifstream fin;
   fin.open("D:/Desktop/C++ bootcamp mysirg/Files/first.txt", ios::in);
   char ch;
   if (fout && fin)
   {
      while (!fin.eof())
      {
         fin.get(ch);
         if (ch >= 97 && ch <= 122)
         {
            ch = ch - 32;
            fout << ch;
         }
         else if (ch == 32)
            fout << ch;
         else if (ch >= 65 && ch <= 90)
         {
            ch = ch + 32;
            fout << ch;
         }
      }
      cout << "Data copied succesfully";
      fout.close();
      fin.close();
   }
}

/*Write a C++ program to merge the two files*/
void file5()
{
   ofstream fout;

   fout.open("D:/Desktop/C++ bootcamp mysirg/Files/merge.txt", ios::app);
   ifstream fin1;
   fin1.open("D:/Desktop/C++ bootcamp mysirg/Files/first.txt");
   ifstream fin2;
   fin2.open("D:/Desktop/C++ bootcamp mysirg/Files/second.txt");
   string ch;
   while (!fin1.eof())
   {
      getline(fin1, ch);
      fout << ch;
   }
   cout << "File one copied" << endl;
   while (!fin2.eof())
   {

      getline(fin2, ch);
      fout << ch;
   }
   cout << "file2 copied" << endl;
   cout << "files merged succesfully " << endl;
}

/*Write a C++ program that counts the total number of characters, words and lines in
the file.*/
void file6()
{
   ifstream fin;
   fin.open("D:/Desktop/C++ bootcamp mysirg/Files/first.txt");
   if (fin.is_open())
   {
      int ch = 0, cw, cl;
      string s;
      while (getline(fin, s))
      {
         cw = 0;
         cl = 0;
         for (int i = 0; i < s.length(); i++)
         {

            if (s[i] == ' ')
            {
               cw++;
            }
            else
               ch++;
            if (s[i] == '\n')
            {
               cl++;
            }
         }
         if (cl == 0)
            cl++;
         cout << "Characters : " << s.length() << endl;
         cout << "Words : " << cw + 1 << endl;
         cout << "Lines : " << cl << endl;
      }
      fin.close();
   }
   else
   {
      cout << "file not found" << endl;
   }
}
/* There are 50 records in a file. Each record contains 6-character item-code, 20
characters for item-name and an integer price. Write a program to read these
records, arrange them in the descending order of price and write them in the same
file, overwriting the earlier records.*/
void file7()
{
}

/*Write a C++ program to create a file which has information Name, Account number,
Balance and perform following operations:
a. Add record
b. Display content of file
c. Display name of person having balance > 10,000*/

class Bank
{
private:
   string name;
   int id=0;
   int account_no;
   int balance;

public:
   void AddRecord()
   {
      ofstream fout; 
      fout.open("D:/Desktop/C++ bootcamp mysirg/Files/Bank.txt",ios::app);
      if (fout)
      {
         cout << "enter name:";
         getline(cin,name); fflush(stdin);
         cout << "enter Account number:";
         cin >> account_no; fflush(stdin);
         cout << "Enter Balance:";
         cin >> balance;
         id++;
         fout<<id<<endl;
         fout << name << endl;
         fout << account_no << endl;
         fout << balance << endl;
         cout<<"Record Saved succesfully"<<endl;
      }
      fout.close();
   }

  
void print( )
{
 Bank b;
    cout<<"id:"<<id<<endl;
            cout<<"Name:"<<b.name<<endl;
            cout<<"Account number"<<b.account_no<<endl;
            cout<<"Balance :"<<b.balance<<endl;
            cout<<endl<<"..........................."<<endl;
}
   void showRecord()
   {
      ifstream  fin; Bank b;
      fin.open("D:/Desktop/C++ bootcamp mysirg/Files/Bank.txt");
      if(fin)
      {
         while(fin.eof()==0)
         {
            
            fin>>b.id;
            fin.ignore();
            getline(fin,b.name);
            fin>>b.account_no;
            fin>>b.balance;
            b.print();
         }
         fin.close();
      }
   }
};

int main()
{
   // file1();
   //  file2();
   // file3();
   // file4();
   // file5();
   // file6();

   Bank b1;
   b1.AddRecord();
   b1.showRecord();
   return 0;
}