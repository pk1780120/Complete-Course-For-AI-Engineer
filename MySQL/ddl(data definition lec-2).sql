create database cybrom;
create database college;
show databases;
drop database pawan;
use college;
create table student(roll int,name varchar(10),branch varchar(2));
desc student;
alter table student add address varchar(10);
desc student;
alter table student drop branch;
desc student;
alter table student modify name varchar(30);
desc student;
drop table student;
desc student; 
create database college; 
use college;
create table student(roll int,name varchar(10),branch varchar(5));
desc student;
insert into student values(01,'pawan','cs');
insert into student values(02,'karan','cs');
insert into student values(03,'nikhil','cs');
insert into student values(04,'kamali','cs');
insert into student values(05,'chameli','mc');
select *from student;-- find the infoirmation of student(first )
-- find the name of student;
select name from student;
-- find the name and brach of student;
select name,branch from student;
-- update the branch of student to ec;
update student set branch = 'ec';
set sql_safe_updates=0;
select *from student;
delete from student;
select *from student;  




