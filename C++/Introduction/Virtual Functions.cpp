class Person {
    public :
        string name;
        int age;
        virtual void getdata() {
            /* nothing */
        }
        virtual void putdata() {
            /* nothing */
        }
};

class Professor : public Person {
    public :
        static int objP;
        int publications;
        int cur_id;
        Professor() {
            cur_id = objP++;
        }
        void getdata() {
            cin >> name;
            cin >> age;
            cin >> publications;
        }
        void putdata() {
            cout << name << " " << age << " " << publications << " " << cur_id << endl;
        }
};

class Student : public Person {
    public :
        static int objS;
        int marks[6];
        int cur_id;
        Student() {
            cur_id = objS++;
        }
        void getdata() {
            int i;
            cin >> name;
            cin >> age;
            for(i = 0; i < 6; i++) cin >> marks[i];
        }
        int sum(int m[]) {
            int total = 0;
            int i;
            for(i = 0; i < 6; i++) total = total + m[i];
            return total;
        }
        void putdata() {
            cout << name << " " << age << " " << sum(marks) << " " << cur_id << endl;
        }
};
int Professor::objP = 1;
int Student::objS = 1;
