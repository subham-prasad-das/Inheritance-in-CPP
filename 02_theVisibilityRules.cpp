/*

    -> Inheritance of a "base class with visibility mode public", by a derieved class, causes "public" members of the base class to become "public" members of the derived class and the "protected" members of the class become "protected" members of the derieved class. 

    -> Inheritance of a "base class with visibility mode private", by a derieved class, causes "public" members of the base class to become "private" members of the derived class and the "protected" members of the class become "private" members of the derieved class.

    -> Inheritance of a "base class with visibility mode protected", by a derieved class, causes "public" members of the base class to become "protected" members of the derived class and the "protected" members of the class become "protected" members of the derieved class.

    -> The "private" members of the base class remain "private" to the base class, whether the base class is inherited with visibility mode "public, private or protected". They add to the data items of the derived class and they are "not directly accessible" to the member of a derieved class. Derieved classes "can access them through the inherited member functions of the base class".

*/

/*
    Inheritance and member accessibilty---------

    Inheritance enhances the capabilities of existing class in the form of derieved classes without modifying them. "Accessibility" refers to the authorizationn granted to access the members of a class by using an access specifier with or without inheritance. While deciding the declaration of the members as "Private, Protected or Public", the following things need to be considered:-
    -> The "Private" members are not inheritable. They are only accessible to the members of the class they are declared.
    -> The "Private" members of the base class can only be accessed in the derieved class by the "public" member functions of the base class.
    -> The "Protected" members are accessible to the members of the class in which they are declared as well as to the members of the derieved class but not from outside of the class.
    -> The "Public" members are accessible to the members of the class, members of the derieved class and also from outside of the class i.e. anywhere inside the program.
    -> The "Private, Protected and Public" sections ofhe class may appear as mant times as needed in the class and in any order.
*/