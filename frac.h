class FractionType {

private:
    int num; 
    int denom; 

public:

    void  Initialize(int numerator, int denominator) {
    // Function:  Initialize the fraction
    // Pre: Numerator and denominator are in reduced form
    // Post: Fraction is initialized
    num = numerator; 
    denom = denominator; 
    }

    int NumeratorIs() {
    // Function: Returns the value of the numerator
    // Pre: Fraction has been initialized
    // Post: Numerator is returned
    return num; 
    }

    int DenominatorIs() {
    // Function: Returns the value of the denominator
    // Pre: Fraction has been initialized
    // Post: Denominator is returned
    return denom; 
    }

    bool IsZero() {
    // Function: Determines if fraction is zero
    // Pre: Fraction has been initialized
    // Post: Returns true if numerator is zero, false otherwise
    return (num == 0); 
    }

    bool IsNotProper() {
    // Function: Determines if fraction is a proper fraction
    // Pre: Fraction has been initialized
    // Post: Returns true if fraction is greater than or 
    //  equal to 1; false otherwise
    return (num >= denom); 
    }

    int ConvertToProper() {
    // Function: Converts the fraction to a whole number and a 
    //  fractional part
    // Pre: Fraction has been initialized, is in reduced form,
    //  and is not a proper fraction
    // Post: Returns whole number
    //      Remaining fraction is original fraction minus
    //      the whole number; fraction is in reduced form
    int result = num / denom; 
    num = num % denom; 
        if (num == 0) 
            denom = 1; 
            return result; 
    } 
}; 

