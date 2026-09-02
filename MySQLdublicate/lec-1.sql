create database cybrom;
create database college;
show databases;
drop database cybrom;
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



