#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    //Array of Characters are called C-Strings

    //Types of Decleration

    //1.) 
        char str[] = {'h','e','l','l','o','\0'};
        cout << str <<endl;
    //2.)
        char str1[] = {"hello world"};
        cout << str1 <<endl;
    //3.)
        char str2[12] = {'h','e','l','l','o',' ','w','o','r','l','d'};
        cout << str2 <<endl;
    //4.)
        char str3[10];
        cin.getline(str3,100,'.'); //buffer overflow occurs
        cout << str3 <<endl;
    //5.)
        char str33[] = {'h','e','l','l','o',' ','w','o','r','l','d','\0'};
        cout << str33 <<endl;
    
    //6.)
        string str4 = "hello world";
        cout << str4 <<endl;
    //7.)
        string str5(10,'a'); //10 times a
        cout << str5 <<endl;
    //8.)
        string str6;
        cin >> str6; //only takes input till space
        cout << str6 <<endl;
    //9.)
        string str7;
        cin.ignore();
        getline(cin,str7); //takes input till new line
        cout << str7 <<endl;  
    //10.)
        string str8;
        cin.ignore();
        getline(cin,str8,'.'); //takes input till dot
        cout << str8 <<endl;

    // Differnt operations on string 

    //1.) Append
        string str9 = "hello";
        string str10 = " world";
        str9.append(str10);
        cout << str9 <<endl; //hello world

    //2.) Insert
        string str11 = "hello";
        string str12 = " world";
        str11.insert(5,str12);
        cout << str11 <<endl;

    //3.) Erase 
        string str13 = "hello world";
        str13.erase(5,6); //erase 6 characters from index 5
        cout << str13 <<endl;

    //4.) Replace
        string str14 = "hello world";
        str14.replace(5,6,"everyone"); //replace 6 characters from index 5 with everyone
        cout << str14 <<endl;

    //5.) Find
        string str15 = "hello world";
        int index = str15.find("world"); //find the index of world
        cout << index <<endl;

    //6.) Substring
        string str16 = "hello world";
        string str17 = str16.substr(0,5); //substring from index 0 to 5
        cout << str17 <<endl;

    //7.) Compare
        string str18 = "hello";
        string str19 = "hello";
        cout << str18.compare(str19) <<endl; //compare two strings

    //8.) Size
        string str20 = "hello world";
        cout << str20.size() <<endl; //size of string
        cout << str20.capacity() <<endl; //capacity of string

    //9.) Reserve
        string str21 = "hello world";
        str21.reserve(100); //reserve memory for 100 characters
        cout << str21.capacity() <<endl; //capacity of string
        
    //9.) Length    
        string str21 = "hello world";
        cout << str21.length() <<endl; //length of string

    //10.) Clear    
        string str22 = "hello world";
        str22.clear(); //clear the string
        cout << str22 <<endl; //empty string

    //11.) Empty
        string str23 = "hello world";
        if(str23.empty()){ //check if string is empty
            cout << "Empty" <<endl;
        }
        else{
            cout << "Not Empty" <<endl;
        }

    //12.) Swap
        string str24 = "hello";
        string str25 = "world";
        str24.swap(str25); //swap two strings
        cout << str24 <<endl;
        cout << str25 <<endl;

    //13.) reverse
        string str26 = "hello world";
        string str27 = str26;
        reverse(str27.begin(), str27.end()); //reverse the string
        cout << str26 <<endl;
        cout << str27 <<endl;

    //13.) concat
        string str26 = "hello";
        string str27 = " world";
        string str28 = str26 + str27; //concatenate two strings
        cout << str28 <<endl;

    //13.) C_str
        string str26 = "hello world";
        const char* cstr = str26.c_str(); //convert string to char array
        cout << cstr <<endl;

    //14.) String to Integer
        string str27 = "123";
        int num = stoi(str27); //convert string to integer
        cout << num <<endl;

    //15.) Integer to String
        int num1 = 123;
        string str28 = to_string(num1); //convert integer to string
        cout << str28 <<endl;

    //16.) String to Float
        string str29 = "123.45";
        float num2 = stof(str29); //convert string to float
        cout << num2 <<endl;

    //17.) Float to String          
        float num3 = 123.45;
        string str30 = to_string(num3); //convert float to string
        cout << str30 <<endl;

    //18.) String to Double
        string str31 = "123.45";
        double num4 = stod(str31); //convert string to double
        cout << num4 <<endl;

    //19.) Double to String         
        double num5 = 123.45;
        string str32 = to_string(num5); //convert double to string
        cout << str32 <<endl;  
    
    return 0;
}