# Exercise 01 of module cpp00: My Awesome PhoneBook

## Files Checklist

- [ ] Files to upload
    - [ ] Makefile
        - [ ] Give a relevant name to your executable.
    - [ ] All the *.cpp
    - [ ] All the *.hpp
    - [ ] All the *.h
- [ ] Function can be used - NONE

## Exercise Checklist

- [ ] Have to implement two/2 Classes

- [ ] Class One - PhoneBook
    - [ ] It has an array of Contact(Class)
    - [ ] It can store 8 contact. It tries to add 9th replace the oldest with newest

- [ ] Class Two - Contact
    - [ ] first name, last name, nickname, phone number, and darkest secret.

- [ ] The program will read input from stdin 
- [ ] ADD - Save new contact
    - [ ] Once all the fields have been completed, add the contact to the phonebook otherwise - NO
    - [ ] Contact field are first name, last name, nickname, phone number, and darkest secret.
    - [ ] A saved contact can’t have empty fields.
   
- [ ] SEARCH - Display a specefic contact from saved Contact
    - [ ] Display the saved contacts as a list of 4 columns
    - [ ] index, first name, last name and nickname
    - [ ] Each column must be 10 characters wide
    - [ ] A pipe character (’|’) separates them. The text must be right-aligned.
    If the text is longer than the column, it must be truncated and the last displayable
    character must be replaced by a dot (’.’).
    - [ ] Then, prompt the user again for the index of the entry to display.
    If the index is out of range or wrong, define a relevant behavior.
    Otherwise, display the contact information, one field per line.

- [ ] EXIT - exit from the program


http://www.cplusplus.com/reference/string/string/
http://www.cplusplus.com/reference/iomanip/
