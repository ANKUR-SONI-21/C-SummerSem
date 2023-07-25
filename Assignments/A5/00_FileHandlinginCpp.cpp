#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{

    fstream file;
    //^ declaring file object similar to file pointer in C

    char fileName[100];
    cout << "Enter file name: ";
    cin.getline(fileName, 100);  


    file.open(fileName, ios::out);
    //^ opening file in write mode
    if (!file)
    {
        cout << "Error in opening file!";
        return 0;
    }
    file.close();

    cout << "Now Writing to file" << endl;
    file.open(fileName, ios::out);
    //^ opening file in write mode
    if (!file)
    {
        cout << "Error in opening file!";
        return 0;
    }

    file << "Hello World!";
    file.close();

    //! adding more text to new file

    cout << "Now Writing to file" << endl;
    file.open(fileName, ios::out | ios::app);
    //^ opening file in write mode
    if (!file)
    {
        cout << "Error in opening file!";
        return 0;
    }

    char name[100];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter name: ";
        cin.getline(name, 100);
        file << name << endl;
    }
    file.close();

//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa



    //! printing the text in the file
    cout << "Now Reading from file" << endl;
    file.open(fileName, ios::in);
    //^ opening file in read mode
    if (!file)
    {
        cout << "Error in opening file!";
        return 0;
    }
    char names[100];
    for (int i = 0; i < 2; i++)
    {
        file >> names;
        //^ reading from file
        //^ names is a char array so it will read till it encounters a space
        cout << names << endl;
    }
    file.close();





    //! printing the text in the file using eof()
    cout << "Now Reading from file" << endl;
    file.open(fileName, ios::in);
    //^ opening file in read mode
    if (!file)
    {
        cout << "Error in opening file!";
        return 0;
    }

    while (!file.eof())
    {
        file >> names;
        //^ reading from file
        //^ names is a char array so it will read till it encounters a space
        cout << names << endl;
    }
    file.close();


    //! printing the text in the file using getline()
    cout << "Now Reading from file" << endl;
    file.open(fileName, ios::in);
    //^ opening file in read mode
    if (!file)
    {
        cout << "Error in opening file!";
        return 0;
    }
    while (!file.eof())
    {
        file.getline(names, 100);
        //^ reading from file
        //^ names is a char array so it will read till it encounters a space
        cout << names << endl;
    }
    file.close();

    //! printing the text in the file using get(ch)
    cout << "Now Reading from file" << endl;
    file.open(fileName, ios::in);
    //^ opening file in read mode
    if (!file)
    {
        cout << "Error in opening file!";
        return 0;
    }
    char ch;
    while (!file.eof())
    {
        file.get(ch);
        //^ get(ch) reads a single character from the file
        //* mechanism of jumping to next line
        //^ if we use get(ch) then it will read till it encounters a space or a new line
        cout << ch;
    }
    file.close();

    //! adding more text to new file using put(ch)
    cout << "Now Writing to file" << endl;
    file.open(fileName, ios::out | ios::app);
    //^ opening file in write mode
    if (!file)
    {
        cout << "Error in opening file!";
        return 0;
    }
    char name1[100];
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter name: ";
        cin.getline(name1, 100);
        file.put('\n');
        //^ adding a new line
        file.put(' ');
        //^ adding a space
        file << name1;
    }
    file.close();

    //! read and write form binary file

    cout << "Now Writing to file" << endl;
    file.open(fileName, ios::out | ios::binary);
    //^ opening file in write mode
    if (!file)
    {
        cout << "Error in opening file!";
        return 0;
    }
    int num[] = {10, 20, 30, 40, 50, 60, 70};
    file.write((char *)&num, sizeof(num));
    //^ writing to file
    file.close();

    for (int i = 0; i < 7; i++)
        num[i] = 0;
    cout << "Now Reading from file" << endl;
    file.open(fileName, ios::in | ios::binary);
    //^ opening file in read mode
    if (!file)
    {
        cout << "Error in opening file!";
        return 0;
    }
    file.read((char *)&num, sizeof(num));
    //^ reading from file
    for (int i = 0; i < 7; i++)
        cout << num[i] << " ";
    file.close();
    return 0;
}