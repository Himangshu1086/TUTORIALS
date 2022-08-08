

- The access modifiers of C++ are public, private, and protected.

- One of the main features of object-oriented programming languages such as C++ is data hiding.


- Data hiding refers to restricting access to data members of a class. This is to prevent other functions and classes from tampering with the class data.


- **The access modifiers of C++ allows us to determine which class 
   members are accessible to other classes and functions, and which are not**
   <br>
   <br>
    <br>
   <br>


# public Access Modifier

- The public keyword is used to create public members (data and functions).

- The public members are accessible from any part of the program.

 <br>
   <br> <br>
   <br>

# private Access Modifier

- The private keyword is used to create private members (data and functions).

- The private members can only be accessed from within the class.
  However, friend classes and friend functions can access private members.

        #include <iostream>
        using namespace std;

        // define a class
        class Sample {

            // private elements
        private:
            int age;

            // public elements
        public:
            void displayAge(int a) {
                age = a;
                cout << "Age = " << age << endl;
            }
        };

        int main() {

            int ageInput;

            // declare an object
            Sample obj1;

            cout << "Enter your age: ";
            cin >> ageInput;

            // call function and pass ageInput as argument
            obj1.displayAge(ageInput);

            return 0;
        }

 <br>
   <br> <br>
   <br>





# protected Access Modifier


- The protected keyword is used to create protected members (data and function).

- The protected members can be accessed within the class and from the derived class.



        #include <iostream>
        using namespace std;

        // declare parent class
        class Sample {
            // protected elements
        protected:
            int age;
        };

        // declare child class
        class SampleChild : public Sample {

        public:
            void displayAge(int a) {
                age = a;
                cout << "Age = " << age << endl;
            }

        };

        int main() {
            int ageInput;

            // declare object of child class
            SampleChild child;

            cout << "Enter your age: ";
            cin >> ageInput;

            // call child class function
            // pass ageInput as argument
            child.displayAge(ageInput);

            return 0;
        }

 <br>
   <br>

*Here, SampleChild is an inherited class that is derived from Sample. The variable age is declared in Sample with the protected keyword.This means that SampleChild can access age since Sample is its parent class. We see this as we have assigned the value of age in SampleChild even though age is declared in the Sample class.*

 <br>
   <br>
 <br>
   <br>

# Summary: public, private, and protected

- public elements can be accessed by all other classes and functions.

- private elements cannot be accessed outside the class in which they are 
declared, except by friend classes and functions.

- protected elements are just like the private, except they can be 
accessed by derived classes.


            Specifiers	Same Class	Derived Class	Outside Class

            public	       Yes	        Yes	            Yes
            private	       Yes	        No	            No
            protected	       Yes	        Yes	            No


*/