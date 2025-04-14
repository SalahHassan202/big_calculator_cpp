// Big Calculator Project
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
#include <conio.h>                   // getch() ;        // to take any key from keyboard to continue the program
using namespace std;

// prototype functions
void addition() ;
void subtraction() ; 
void multipliction() ;
void division() ;
void mod() ;
void squaring() ;
void squareRoot() ;
void evenOrOdd() ;
void power() ;
void tableOfContents() ;
void determinant() ;
// end of prototype functions

// main function
int main ()
{      

    int choice ;
    // do - while () statement ;
   do
   {
        cout << "Press any key to start the program" <<endl;
        getch() ;                  // to take any key from keyboard to continue the program
        cout << endl;
        cout <<"Select the operation using a number " ;
        cout << endl;
        cout << "1- Addition" << endl;
        cout << "2- Subtraction" << endl;
        cout << "3- Multipliction" << endl;
        cout << "4- Division" << endl;
        cout << "5- Modulus" << endl;
        cout << "6- Squaring" << endl;
        cout << "7- Square Root" << endl;
        cout << "8- Even Or Odd" << endl;
        cout << "9- Power" << endl;
        cout << "10- Table Of Contents" << endl;
        cout << "11- Determinant" << endl;
        cout << "12- Exit" << endl;

        cout << "*********************************" << endl;
        cout<< "enter a number : " << endl;
        cin >> choice ;
        cout << "*********************************" << endl; 

        // switch statement 
        switch(choice)
        {
            case 1 :
                addition() ;
                break ;
                
            case 2 :
                subtraction() ;
                break ;

            case 3 :
                multipliction() ;
                break ;

            case 4 :
                division() ;
                break ;

            case 5 :
                mod() ;
                break ;

            case 6 :
                squaring() ;
                break ;

            case 7 :
                squareRoot() ;
                break ;

            case 8 :
                evenOrOdd() ;
                break ;

            case 9 :
                power() ;
                break ;

            case 10 :
                tableOfContents() ;
                break ;

            case 11 :
                determinant() ;
                break ;

            case 12 :
                cout << "Tank You" << endl;
                exit(0) ;         // close the program 
                break ;

            case 13 :
                cout << "enter a valied number : " << endl ;

        }

   }while(choice != 12) ;
    

    return 0 ;
}

// function details 

// first function addition

void addition()
{
    int numberOfNumbers = 0  ;

    cout << "enter the number of numbers : " << endl;
    cout << "*********************************" << endl; 
    cin >> numberOfNumbers ;
    cout << "*********************************" << endl; 

    int number = 0 ;
    int result = 0 ;
    for(int i = 1 ; i <= numberOfNumbers ; i++)
    {
        cout << "enter a number " << i << " : " << endl;
        cin >> number ;
        result += number ;
    }
    
    cout << "*********************************" << endl; 
    cout << "the result of addition all numbers is : " << result << endl;
    cout << "*********************************" << endl; 

}

// second function subtraction

void subtraction()
{
    int numberOfNumbers = 0  ;

    cout << "enter the number of numbers : " << endl;
    cout << "*********************************" << endl; 
    cin >> numberOfNumbers ;
    cout << "*********************************" << endl; 

    int number = 0 ;
    int result = 0 ;
    for(int i = 1 ; i <= numberOfNumbers ; i++)
    {
        cout << "enter a number " << i << " : " << endl;
        cin >> number ;
        result -= number ;
    }

    cout << "*********************************" << endl; 
    cout << "the result of subtraction all numbers is : " << result << endl;
    cout << "*********************************" << endl; 

}

// third function multipliction

void multipliction()
{
    int numberOfNumbers = 0  ;

    cout << "enter the number of numbers : " << endl;
    cout << "*********************************" << endl; 
    cin >> numberOfNumbers ;
    cout << "*********************************" << endl; 

    int number = 0 ;
    int result = 1 ;         // المعامل الضربي او المحايد الضربي = الواحد الصحيح 
    for(int i = 1 ; i <= numberOfNumbers ; i++)
    {
        cout << "enter a number " << i << " : " << endl;
        cin >> number ;
        result *= number ;
    }

    cout << "*********************************" << endl; 
    cout << "the result of multipliction all numbers is : " << result << endl; 
    cout << "*********************************" << endl; 

}

// forth function division

void division()
{
    int num1 , num2 , result ;
    cout << "enter the first number : " << endl ;
    cin >> num1 ;
    cout << "enter the second number : " << endl ;
    cin >> num2 ;

    // check for num2 if it == zero
    if(num2 == 0)
    {

        cout << "*********************************" << endl; 
        cout << "Division by Zero Is Incorrect!! " << endl;
        cout << "*********************************" << endl; 
    }
    else
    {
        result = num1 / num2 ;
        cout << "*********************************" << endl;
        cout << "The Division of " << num1 << " / " << num2 <<" = " << result << endl;
        cout << "*********************************" << endl; 

    }

}
// fifth function modulus

void mod()
{
    
    int num1 , num2 , result ;
    cout << "enter the first number : " << endl ;
    cin >> num1 ;
    cout << "enter the second number : " << endl ;
    cin >> num2 ;
    
    result = num1 % num2 ;
    cout << "*********************************" << endl;
    cout << "The Modulus of " << num1 << " % " << num2 <<" = " << result << endl;
    cout << "*********************************" << endl; 

    
}

// sixth function squaring

void squaring() 
{
    int num , result ;
    cout << "enter the number : "<< endl ;
    cout << "*********************************" << endl;
    cin >> num ;
   
    result = num * num ;
    cout << "*********************************" << endl;
    cout << "The result of squaring for " <<num << " is " << result << endl;
    cout << "*********************************" << endl; 
}

// seventh function squareRoot

void squareRoot() 
{
    float num , result ;
    cout << "enter the number : " << endl ;
    cout << "*********************************" << endl;
    cin >> num ;
   
    result = sqrt(num);             // #include <cmath>
    cout << "*********************************" << endl;
    cout << "The result of squareRoot for the  " << num <<" is " << result << endl;
    cout << "*********************************" << endl; 
}


// eighth function evenOrOdd

void evenOrOdd()
{
    int num ;
    cout <<"enter a number : " << endl ;
    cout << "*********************************" << endl;
    cin >> num ;

    // check for this number 
    if(num % 2 == 0 && num != 0)         // even number
    {
        cout << "*********************************" << endl;
        cout << num << " Is Even " << endl;
        cout << "*********************************" << endl;
    }
    else if(num % 2 != 0)
    {
        cout << "*********************************" << endl;
        cout << num << " Is Odd " << endl;
        cout << "*********************************" << endl;

    }
    else               // num == 0
    {
        cout << "*********************************" << endl;
        cout << " num = zero" << endl;
        cout << "*********************************" << endl;

    }

}

// ninth function power

void power()
{
    int num = 0  , power = 0 , result = 0 ;
    cout << "enter the num : " << endl;
    cin >> num ;
    cout << "enter the power : " << endl;
    cin >> power ;

    result = pow(num , power) ;

    cout << "*********************************" << endl;
    cout <<"the result is " << num << " ^ " << power << " = " << result << endl; 
    cout << "*********************************" << endl;
    
}

// tenth function tableOfContents

void tableOfContents()
{
    int operation ;
    // prototype function
    void table_items() ;
    void table_strings() ;
    // end of prototype function

    // do-while()-statement
    do 
    {
        cout << "enter the number of operation : " << endl;
        cout <<"1- Integers" << endl;
        cout <<"2- Strings" << endl;
        cout <<"3- Exit" << endl;
        cout << "*********************************" << endl;
        cin >> operation ;
        cout << "*********************************" << endl;

        // switch statement
        switch(operation)
        {
            case 1 :
                table_items() ;
                break ;

            case 2:
                table_strings() ;
                break;

            case 3 :
                main() ;

            default :
                cout << "enter a valid number : " << endl ;
                tableOfContents() ;

        }
    }while(operation != 3) ;

}

void table_items()
{ 
    int size = 0  ; 
    cout <<"enter size : " << endl;           // size ==> number of numbers ;
    cout << "*********************************" << endl;
    cin >> size ;
    cout << "*********************************" << endl;
    int num = 0 ;
    int arr[size] ;         // array to store all number of the table ;
    // for ===> to get numbers 
    for(int i = 0 ; i < size ; i++)
    {
        cout << "enter num "<< i+1 << " : " << endl;
        cin >> num ;
        arr[i] = num ;

    }

    cout << "*********************************" << endl;
    cout << "Table Of numbers :: " << endl;
    cout << "*********************************" << endl;

    // for to print numbers 
    for(int i = 0 ; i < size ; i++)
    {
        cout << "the element number" <<i+1 << " : " << arr[i] << endl;
    }

}


void table_strings()
{
    int size = 0  ; 
    cout <<"enter size : " << endl;           // size ==> number of strings ;
    cout << "*********************************" << endl;
    cin >> size ;
    cout << "*********************************" << endl;
    string store_string = "unknown" ;
    string arr[size] ;         // array to store all strings of the table ;
    // for ===> to get strings 
    for(int i = 0 ; i < size ; i++)
    {
        cout << "enter string "<< i+1 << " : " << endl;
        cin >> store_string ;
        arr[i] = store_string ;

    }
    cout << "*********************************" << endl;
    cout << "Table Of Strings :: " << endl;
    cout << "*********************************" << endl;
    
    // for to print strings 
    for(int i = 0 ; i < size ; i++)
    {
        cout << "the strings are" <<i+1 << " : " << arr[i] << endl;
    }

}


// eleventh function determinant
void determinant()
{
    int choice ;
    // prototype function 
    void determinant_2D() ; 
    void determinant_3D() ;
    // end of prototype function

    // do-while()statement 
    do 
    {
        cout <<"Enter the operation : " <<endl;
        cout <<"1- 2D" << endl;
        cout <<"2- 3D" << endl;
        cout <<"3- Exit" << endl;
        cout << "*********************************" << endl;
        cin >> choice ; 
        cout << "*********************************" << endl;

        // switch statement 
        switch (choice)
        {
            case 1 :
                determinant_2D() ;
                break ;
                
            case 2 :
                determinant_3D() ;
                break ;

            case 3 :
               main() ;

            default :
                cout << "enter a valid number : " << endl;
                determinant() ;

        }

    }while(choice != 3) ;
    

}

void determinant_2D()
{
    int element1 , element2 , element3 , element4 , result ;
    // first row of determinant_2D
    cout << "*********************************" << endl;
    cout <<"enter the first row : " << endl;
    cout << "enter element1 : " << endl ;
    cin >> element1 ;
    cout << "enter element2 : " << endl ;
    cin >> element2 ; 
    cout << "*********************************" << endl;

    // second row of determinant_2D
    cout <<"enter the second row : " << endl;
    cout << "enter element3 : " << endl ;
    cin >> element3 ;
    cout << "enter element4 : " << endl ;
    cin >> element4 ; 
    cout << "*********************************" << endl;

    result = (element4 * element1) - (element3 * element2) ;

    cout << "*********************************" << endl;
    cout << "| " << element1 << " " << element2 << " | " << endl;
    cout << "| " << element3 << " " << element4 << " | " << " = "<< result << endl ;
    cout << "*********************************" << endl;
    
}

void determinant_3D()
{
    int element1 , element2 , element3 , element4 ,element5 , element6 , element7 , element8 , element9 , result ;
    // first row of 
    cout << "*********************************" << endl;
    cout <<"enter the first row : " << endl;
    cout << "enter element1 : " << endl ;
    cin >> element1 ;
    cout << "enter element2 : " << endl ;
    cin >> element2 ; 
    cout << "enter element3 : " << endl ;
    cin >> element3 ; 
    cout << "*********************************" << endl;


    // second row of determinant_3D
    cout <<"enter the second row : " << endl;
    cout << "enter element4 : " << endl ;
    cin >> element4 ;
    cout << "enter element5 : " << endl ;
    cin >> element5 ; 
    cout << "enter element6 : " << endl ;
    cin >> element6 ; 
    cout << "*********************************" << endl;


    // third row of determinant_3D
    cout <<"enter the third row : " << endl;
    cout << "enter element7 : " << endl ;
    cin >> element7 ;
    cout << "enter element8 : " << endl ;
    cin >> element8 ; 
    cout << "enter element9 : " << endl ;
    cin >> element9 ; 
    cout << "*********************************" << endl;

    int x , y , z ;
    x = (+1) * element1 *((element5 * element9) - (element6 * element8)) ;
    y = (-1) * element2 *((element4 * element9) - (element6 * element7)) ;
    z = (+1) * element3 *((element4 * element8) - (element5 * element7)) ;

    result = x + y + z ;
    cout << "*********************************" << endl;
    cout << "| " << element1 << " " << element2 << " " << element3 << " |" << endl;
    cout << "| " << element4 << " " << element5 << " " << element6 << " |" << endl;
    cout << "| " << element7 << " " << element8 << " " << element9 << " |" << " = " << result << endl ;
    cout << "*********************************" << endl;
    
}
