 MariaDB[(none)]>show databases;   | enter

 : .................
:...................
>create database PPA41;   |
 query OK 1 ROW Affected(0.001 sec)

>show databases; |
: .................
:...................            

>use PPA41;  |                
database changed              
                                
MariaDB[(PPA41)]use PPA41  |   

MariaDB[(PPA41)]create table student(RID int, Name varchar(255),Marks int, Cityvarchar(255));  |

Query ok

MariaDB[(PPA41)]describe Student;

Field Type  Null key Default Extra
...................................
...................................
...................................
...................................

MariaDB[(PPA41)]insert into student values(101,'Amit',87,'Pune');  |
Query OK 1 row Affected


MariaDB[(PPA41)]insert into student values(111,'Pooja',92,'Mumbai');  |

MariaDB[(PPA41)]insert into student values(121,'Aditi',67,'Mumbai');  |

MariaDB[(PPA41)]insert into student values(151,'Rahul',56,'Nashik');  |

MariaDB[(PPA41)]insert into student values(201,'Sneha',98,'Satara');  |

...................................
...................................
...................................
...................................

MariaDB[(PPA41)]select Name,City from student; |

MariaDB[(PPA41)]select * from student where City = 'Mumbai';  |

MariaDB[(PPA41)]select * from student where Marks > 80;  |

MariaDB[(PPA41)]select * from student where Marks > 80 and City ='Mumbai';

MariaDB[(PPA41)]select * from student where Marks > 80 && City ='Mumbai';
  
MariaDB[(PPA41)]select * from student where Marks > 80 or City ='Mumbai';

MariaDB[(PPA41)]select * from student where Marks > 80 || City ='Mumbai';

MariaDB[(PPA41)]select * from student order by Marks

MariaDB[(PPA41)]select * from student order by Marks DESC;

MariaDB[(PPA41)]select * from student order by Marks ASC;

MariaDB[(PPA41)]select * from student order by Name;

MariaDB[(PPA41)]update student set City = 'Pune' where Name = 'rahul';

MariaDB[(PPA41)]delet from student where RID = 151;

MariaDB[(PPA41)]select * from student;  //for cheked in table

MariaDB[(PPA41)]select min(marks), Name from student;

MariaDB[(PPA41)]select max(marks), Name from student;

MariaDB[(PPA41)]select sum(marks) form student;

MariaDB[(PPA41)]select avg(marks) from student;

MariaDB[(PPA41)]select count(name) form student;

MariaDB[(PPA41)]select count(rid) from student where City ='Mumbai';

MariaDB[(PPA41)]select * from student where name like'A%';

MariaDB[(PPA41)]select * from student where Marks > 80 || City ='Mumbai';




create table teacher
 (
  EID int PRIMARY KEY,
  Name varchar(255) NOT NULL,
  Department varchar(255) UNIQUE,
  Age int,
  City varchar(255) DEFAULT 'Pune'
  CHECK (Age > 20)
  );




