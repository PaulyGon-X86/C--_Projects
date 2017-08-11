//2017-AUG-03
//Paul Gonzales
//Examples of Classes

//Definining a Class
class NameOfClass   //Class definition -- defines a new type, NameOfClass
{
    public:                         //Member access level (public)
        int m_DataMember1;          //Data members can be prefixed with m_ as a naming convention
        void MemberFunction1();      //Member function prototype. By convention names begin with uppercase letter
    
    private:                        //Member access level (private)
        int m_DataMember2;          //This data member is private
        void MemberFunction2();     //This member function is private
};

void NameOfClass::MemberFunction1() //Member function definitions are defined outside of the class definintion. They must be prefixed
{}                                  //NameOfClass::, the class name and scope resolution operator
void NameOfClass::MemberFunction2() 
{}