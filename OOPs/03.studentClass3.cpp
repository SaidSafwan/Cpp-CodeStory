class student{
    public:
        int rollNum;

    private:
        int age;

    public:
        //Default constructor
        student(){
            cout<<"Default Constructor is called"<<endl;
        }

        // Parameterized Constructor
        // student(int r){
        //     rollNum = r;
        //     cout<<"Parameterized Constructor 1 is called"<<endl;
        // }

        student(int age){
            // age = age;  this is like inserting value to itself
            // so to avoid this, we use referrence pointer variable "this" keyword, which point to current object varaible
            this -> age = age;
            cout<<"Parameterized Constructor 1 is called"<<endl;
        }
        student(int a, int r){
            age = a;
            rollNum = r;
            cout<<"Parameterized Constructor 2 is called"<<endl;
        }

        void display(){
            cout<<age << " " << rollNum <<endl;
            cout<<"this : "<<this<<endl;
        }

        int getAge(){
            return age;
        }

        void setAge(int a){
            age = a;
        }
};