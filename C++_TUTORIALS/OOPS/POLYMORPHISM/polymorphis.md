# C++ Polymorphism

- The term "Polymorphism" is the combination of "poly" + "morphs" which means many forms.

<br>

# Real Life Example Of Polymorphism

        Let's consider a real-life example of polymorphism. A lady behaves like a teacher in a classroom, mother or daughter in a home and customer in a market. Here, a single person is behaving differently according to the situations.


<br><br>

# Types of polymorphism in C++

![image](cpp-polymorphism.png)

<br><br><br>

## **Compile time polymorphism:**

 - The overloaded functions are invoked by matching the type and number of arguments. 

 - This information is available at the compile time and, therefore, compiler selects the appropriate function at the compile time.

 - It is achieved by function overloading and operator overloading which is also known as static binding or early binding.

            class A                                  //  base class declaration.  
        {  
            int a;  
            public:  
            void display()  
            {   
                    cout<< "Class A ";  
                }  
        };  
        class B : public A                       //  derived class declaration.  
        {  
            int b;  
            public:  
        void display()  
        {  
                cout<<"Class B";  
        }  
        };  


