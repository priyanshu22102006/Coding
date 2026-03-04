//WE CAN LITERALLY PASS ANYTHING INSIDE AN OBJECT


// Creating Objects using Instance of Object
var Student = new Object();
Student.name = "Priyanshu";
Student.enroll = "12024002028041";
Student.class = "B3LG 2.3";
Student.roll = 40;
Student.year = 2 ;
Student.cgp = 7.62;

console.log(Student);

//added new key
Student.depart = "CSE";
console.log(Student);

//modified department
Student.depart = "CSE(AI-ML)";
console.log(Student);


//Creating an Object Literals     
var myDetails = {
    name : "Chirag Goel",
    title : "Engineer at Microsoft | ex-Flipkart | Teacher | Mentor | YouTuber",
    expertise : ['#frontend', '#interview', '#javascript', '#systemdesign'],
    followers : 15000,
    greetMe : function() {
        console.log("Hello from Chirag Goel PW Skills");
    }
}
console.log(myDetails);

//to call a function inside an object
myDetails.greetMe();


// Creating an Object using Constructor Function
function Course(
    instructor,
    title,
    description,
    langauge,
    duration,
    fees,
    startDate,
    youTubeLink)
{
    this.instructor = instructor;
    this.title = title;
    this.description = description;
    this. langauge = langauge;
    this.duration = duration;
    this.fees = fees;
    this.startDate = startDate;
    this.youTubeLink = youTubeLink;
}

var course1 = new Course(
    "Chirag Goel",
    "JavaScript for Beginners",
    "This course is designed for absolute beginners who want to learn JavaScript from scratch. It covers the fundamentals of JavaScript programming, including variables, data types, functions, loops, and more.",
    "English",
    "4 weeks",
    4999,
    "2024-07-01",
    "https://www.youtube.com/playlist?list=PLu0W_9lII9agICnT8t4iYVSZ3eykIAOME"
);

var course2 = new Course(
    "Chirag Goel",
    "Advanced OOPs",
    "This course is designed for intermediate developers who want to learn advanced Object-Oriented Programming concepts.",
    "Hinglish",
    "4 weeks",
    49,
    "2024-07-01",
    "https://www.youtube.com/playlist?list=PLu0W_9lII9agICnT8t4iYVSZ3eykIAOME"
);

console.log(course1 ,course2);

//Deleting any key from an object
delete course1.fees;
console.log(course1); 