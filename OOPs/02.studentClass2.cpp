class student{
    public:
        int rollNum;

    private:
        int age;

    public:
        void display(){
            cout<<age << " " << rollNum <<endl;
        }

        int getAge(){
            return age;
        }

        void setAge(int a){
            age = a;
        }
};