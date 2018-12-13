/*
*   Log in to mysql using terminal
*       $ mysql -u root -p
*       $ Enter your password: [Type your password]
*   then, create a new database called 'weblab'
*   >   create database weblab;
*   >   exit
*
*   Write the contents of this file in queries.sql
*   and execute the following command
*       $ mysql -u root -p web-lab < queries.sql
*       $ Enter Password: [Type ur password]
*/

/* creating a students table */
create table students (
    id int auto_increment,
    name varchar(50),
    usn varchar(10),
    year int,
    college varchar(50),
    primary key(id)
);

/* Insert values to the table */
insert into students (name, usn, year, college) values (
    'Musthaq', '4SF15CS085', 2015, 'Sahyadri College'
);
insert into students (name, usn, year, college) values (
    'Maneesh', '4SF15CS084', 2015, 'Sri Devi College'
);
insert into students (name, usn, year, college) values (
    'Lalith', '4SF15CS089', 2015, 'Canara College'
);
insert into students (name, usn, year, college) values (
    'Hari', '4SF15CS103', 2015, 'Sahyadri College'
);
insert into students (name, usn, year, college) values (
    'Rahul', '4SF15CS065', 2015, 'Sahyadri College'
);
insert into students (name, usn, year, college) values (
    'Nithin', '4SF15CS055', 2015, 'PACE College'
);