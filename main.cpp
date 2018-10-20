/*

Description: Midterm, fall 2018
Filename: Main.cpp
Author: Roger Aragon
Date:19 Oct 2018

*/

#include <iostream>
#include <string>

using namespace std;

string get_string(string s) //1st. function, get string. Initializes string value "s"
{  
    string text; //Initializes string value "text" to be used later
    cout << s;  // output value "s", to be defined later
    getline (cin, text); //input value for "text" using getline, to allow multiple words in a single string
    
    return text; //return value for "text"
}

void char_count(string s) // Void used to keep function in the background
{
    cout << endl  << "Which letter should I search for? " << endl; //Output prompt for a letter to search for within string value "s"
    
    int count = 0;       //initializing int value "count", and setting initial value to 0
    char letter = 'a';   //initializing char value "letter", and setting initial value to 'a'
    char lcase = 'z';    //initializing char value "lcase', and setting initial value to 'z'

    cin >> letter;       //calling input value "letter" to be used to search for a specific letter in string value "s"
    
    for (int i = 0; i < s.length(); i++) //The loop to scan string value until value "i" equals total length of string
    {
        if (isupper(s.at(i))) //IF loop: searches for upper case letters
        {
            lcase = tolower(s.at(i)); //IF an uppercase letter is found, it is converted to lowercase and placed in value "lcase"
            if (lcase == letter) // ...and if the letter in the value "lcase" is the same as the vlue "letter" it adds 1 to the value "count"
            {
                count++;
            }
        }
        
        if (s.at(i) == letter) //Meanwhile, the unconverted lowercase letters are compared against value "letter"
        {
            count++; //And if they match, it adds 1 to value "count"
        }
    }
    cout << "There are " << count << " letter " << letter << "'s in this text." << endl; 
            //And the output statement, which takes values from "count" and "letter" to complete the statement
}

int main()  //Finally,  the function that puts the parts together
{
    string s = get_string("Enter text: " ); //starting with function "get_string", and adding the prompt for the text to be scanned
        
    char_count(s); // And ending with the function "char_count" to output the results
    

return 0;

}  
