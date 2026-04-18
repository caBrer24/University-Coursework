// create class
//intitialize two variables
// create constructor
// cretae display function
// overload + and -
// result is a complex object
// Addition (3 + 2i) + (4 - 8i) and Substraction (3 + 2i) - (4  - 8i)  

/*
Program: Complex Numbers Addition and Substraction
Name: Carlos Cabrera
Date: 04/17/2026
Purpose: To learn to implement operator functions, in this case, to add and substract
         imaginary and real numbers.
*/

#include <iostream>

// complex class declaration
class complex {

    // Made variables private to avoid instances like complexNumbers.real = 9000;
    private:
        int real;
        int imaginary;

    public:
        //  Constructor declaration
        complex(int real, int imaginary)
        {
            // same name as parameter so clarified using this-> real/imaginary
            this -> real = real;
            this -> imaginary = imaginary;
        }
        
        // Operator function for '+'
        // const keyword makes sure that none of the objects' value suddenly change
        // Could've used a friend function and used 2 parameters (a + b)
        // right hand side operand accesing left, so left hand side operand listed as b parameter
        // a.operator+(b)
        complex operator+(const complex& b) const {

            // adding of objects
            int resultReal = real + b.real;
            int resultImaginary = imaginary + b.imaginary;
            
            // Operator function of type complex, therefore, return type complex
            // Our constructor already returns object of type complex, so I used it
            return complex(resultReal, resultImaginary);
        }
        
        // Same thing as addition operator function but for substraction (-)
        complex operator-(const complex& b) const {

            int resultReal = this->real - b.real;
            int resultImaginary = this->imaginary - b.imaginary;

            return complex(resultReal, resultImaginary);
        }

        // Prints both values in a readable, complex format
        void display()
        {
            // if imaginary is negative, we don't want 4 - - 8i
            // Multiplied by -1 and display "-" in cout
            // It doesn't matter that real is negative because it's at the beginning
            // of expression
            if (imaginary < 0) {
                std::cout << "Your complex number is: " << real << " - " << imaginary*-1 << "i" << std::endl;
        
            } else {
                std::cout << "Your complex number is: " << real << " + " << imaginary << "i" << std::endl;
            }
        }

    

};



int main() {
    
    // Object instances
    complex complexNumbers(3, 2);
    complex complexNumbers2(4, -8);
    
    // Using our display function on our objects individually
    complexNumbers.display();
    complexNumbers2.display();

    // Third object with addition and substraction
    // Holds result
    complex resultAddition = complexNumbers + complexNumbers2;
    complex resultSubstraction = complexNumbers - complexNumbers2;

    // Displays result of operations
    resultAddition.display();
    resultSubstraction.display();
    
    

    return 0;
}