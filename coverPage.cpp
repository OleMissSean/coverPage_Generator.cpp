/*
Sean Staz
CSC 2134
Program Cover Page
This program will create a cover page for Sean Staz.
*/

#include <iostream>
#include <string>

using namespace std; 

const string Chapter = "Chapter number: "; // Insert chapter number
const string Lesson = "Lesson: "; // Insert assignment
const string Instr = "Mr. Kurt Cobain";
const string Name = "Sean Staz";
const string Date = "Date: "; // Insert date

int main ()
{
  string chapterLine;
  string lessonLine;
  string instrLine;
  string nameLine;
  string dateLine;
  
  // Create a black-white row by concatenating the basic strings
  chapterLine = Chapter;
  lessonLine = Lesson;
  instrLine = Instr;
  nameLine = Name;
  dateLine = Date;
                          
  cout << chapterLine << endl;
  cout << lessonLine << endl;
  cout << instrLine << endl;
  cout << nameLine << endl;
  cout << dateLine << endl;

  return 0;                  
}      
    
