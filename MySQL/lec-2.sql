create database college;
use college;
create table student(roll int,name varchar(15),branch varchar(15));
desc student;
insert into student values(01,'pawan','cse');
insert into student values(02,'karan','bsc');
insert into student values(03,'nikhil','cs/it');
insert into student values(04,'kamali','mca');
insert into student values(05,'chameli','mba');
-- find the infoirmation of student(first )
select *from student;
-- find the name of student;
select name from student;
-- find the name and branch of student;
select name,branch from student;
-- update the branch of student to ec;
update student set branch = 'ec';
set sql_safe_updates=0;
select *from student;
delete from student;
select *from student;



