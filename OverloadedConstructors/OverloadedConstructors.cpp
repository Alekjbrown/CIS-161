Student()
{
    name = "Bob";     // Student's name
    idNum = 000000001;       // Student ID number
    creditHours = 3; // Credit hours enrolled
    gpa = 1.0;      // Current GPA
    major = "BS";    // Student's major
    satScore = 5;    // Student's SAT score
}

Student(string n, int i, int c, double g, string m, int s)
{
    name = n;     // Student's name
    idNum = i;       // Student ID number
    creditHours = c; // Credit hours enrolled
    gpa = g;      // Current GPA
    major = m;    // Student's major
    satScore = s;    // Student's SAT score
}

Student a; //instantiate student a with default
Student b("bob",900082755,3,2.5,"CS",1); // instantiate student b with args in overload