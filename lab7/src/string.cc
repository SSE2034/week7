#include "string.h"
#include <iostream>

String::String() {char_array.clear();}

String::String(char str[])
{
    size_t i=0;

    while (str[i] != '\0') {
        char_array.push_back(str[i]);
        i++;
    }
}

String::String(std::vector<char> str) {char_array = str;}

size_t String::len() {
    size_t size = char_array.size();

    return size;
}

char String::at(size_t idx) {return char_array.at(idx);}

void String::set(size_t idx, char c) {char_array.at(idx) = c;}

size_t String::find(char c) {

    size_t i;

    for (i=0; i<char_array.size(); i++){
        if (char_array.at(i) == c) return c;
    }

    return i;
}

size_t String::end() {return (size_t)char_array.size();}

void String::print(){
    for (size_t i=0; i<char_array.size(); i++) {
        std::cout << char_array.at(i);
    }
}

void print(String str) {
    //TODO : Same operation as String::print().
}

std::vector<String> split(String str, char divide){
    //TODO : divide string into char divide
    //Ex) str = "This is example.", divide = ' '
    //Ex) return vector<String> = {"This", "is", "example."}
}

String String::operator +(String rhs) {
    //TODO : return string lhs + string rhs
    //Ex) "This is " + "example." = "This is example."
}

String String::operator +(char rhs[]) {
    //TODO : String lhs + char rhs[]
    //Hint : Convert rhs to String
}

void String::operator += (String rhs) {
    //TODO : *this = *this + rhs;
}

void String::operator += (char rhs[]) {
    //TODO : *this = *this + rhs;
}

void String::operator =(char rhs[]) {
    //TODO : assign *this as rhs;
}

void String::operator =(std::vector<char> rhs) {
    //TODO : assign *this as rhs
}

String String::operator *(unsigned rhs) {
    //TODO : String lhs * unsigned rhs
    //Ex) "AB" * 3 = "ABABAB"
}

void String::operator *= (unsigned rhs) {
    //TODO : *this = *this * rhs;
}

char String::operator [](size_t rhs) const{
    //TODO : return rhs index character in *this
}

String String::operator <<(size_t rhs) {
    //TODO : Rotational Shift Left as RHS
    //Ex) "ABCD" << 1 = "BCDA" 
}

String String::operator >>(size_t rhs) {
    //TODO : Rotational Shifht Right as rhs
    //Ex) "ABCD" << 1 = "DABC"
}

bool String::operator ==(String rhs) {
    //TODO : if all characters are same -> return true
}

bool String::operator !=(String rhs) {
    //TODO : if !(lhs == rhs) -> return true
}


