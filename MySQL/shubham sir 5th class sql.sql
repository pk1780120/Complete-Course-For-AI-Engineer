
/*what is my sql and sql?
my sql is data managining tool where sql is use manage the dat*/
-- is sql is procdural or declarative 
/*it is declarative because under way command/order only
and procedure language?
is sql rdbms or dbms
my sql is an rdms and dbms both because for the app to be an rdbms five cond must satis fy
-- data store in tabular format
--
concurrency control means multiple people( )mulatiple transaction can take place at a time without
--data concurrency-- if any column is unique it will be uniquye before and after the transactions)
--acid properties*/
/*condn for dbms
-- data must be stored in tabular or any format
-- sql or otthelang may be used to manage the data
--reamaianing 3 are same
thats why mysql is an rdbms and dbms both*/

-- practical whaere we see  sql language in daily life 
/*ans -- e commerese ,banking etc because when we search  the rhingson amazon that time  it writes the queries at the backennd like select tshiert from data base;
whe  we fetch the information of the account that time  the sql query is wriutten there select avcount number from database;*/
/* we use show database and show database and show tables to see the existings dbs in the schema and bidefault the selected db  tables;*/
create database practice8;
show databases;
show tables;
use practice8;
create table employee(e_id int,e_name varchar(30),doj date,salary int);
/* we can active the data base 2 away 
1. by double click on database name 
2.by using the query use databasename

when database become active thats times becomes bold;*/
/*desc tablename means: it is used to see the structure of the table*/
desc employee;
insert into employee values(1,"raju","2000-01-01",5000);
insert into employee values(2,"shyam","2000-01-10",10000);
insert into employee values(3,"harish","2000-01-04",30000);

-- now i want to see the table with complete data;
select * from employee;
select e_id ,e_name from  employee;

-- 2nd class
create table student7(s_id int,s_name varchar(30),s_score int);
ALTER TABLE student7
RENAME COLUMN s_10 TO s_id;-- for change only column then use
insert into student7 values(1,"A",100);
insert into student7 values(2,"B",80);
insert into student7 values(3,"C",70);
insert into student7 values(4,"D",90);
select *from student7;
desc student7;
/* NOW I WANT TO NEW COLUMN PERFORMENCE*/
alter table student7 add column performance varchar(50);
/* now i want to change the data type existing column*/
alter table student7 modify column performance int;
alter table student7 modify column performance varchar(40);
/* now i want to feed the data under the new column*/
update student7 set performance =case when s_id <3 then "good "   when s_id >3 then "excellent" else "v.good" end;
/*my update is not working so i have to run the safe querry*/
set sql_safe_updates=0;
/* now we will remove the new column";*/ 
alter table student7 drop performance;
/* now we use the pin tab on the tableo/p name to save the result of querry on the temporary basis just right click on o/p name and pin tab*/
/* now i want to drop the particular row from the table */
delete from student7 where s_id=4;

/*now i want to remove the complete data inside the table*/
truncate student7;
/*now i want to remove the complete table with its structure*/
drop table student7;
/* sql commands are categiry into 5 times
1.DDL-(data definitioon lang)-- shortcut remeber to coommand is{DRCAT} 
It consist :-
drop
rename
create
alter
truncate
2.DML(data manipulation lang )-
it consist:-
insert 
update
delete
3.DCL(data control lang):this command is used at the administrative level
grant
revoke
4.DQL(data querry lang):It is used for fetching the data
 it consist
 select command

5.TCL(transaction control lang)
commit
rollback
savepoint*/

-- class -3 shubham sir
create table tcl(id int,name varchar(30));
insert into tcl values(1,"A");
insert into tcl values(2,"B");
SELECT *FROM tcl;
rollback;

set autocommit=0;
insert into tcl values(3,"C"); 
rollback;
insert into tcl values(3,"C");

commit;
rollback;
insert into tcl values(4,"D");
set autocommit=0;
rollback;

commit;
insert into tcl values(4,"D");
rollback;
insert into tcl values(5,"E");

savepoint sp1;
insert into tcl values(6,"F");
rollback to sp1;
rollback;

-- class 3 revision
use practice8;
drop  table tcl;
create table tcl(id int,name varchar(30));
insert into tcl values(1,"A");
insert into tcl values(2,"B");
SELECT *FROM tcl;
rollback;

set autocommit=0;
insert into tcl values(3,"C"); 
rollback;
insert into tcl values(3,"C");
commit;
rollback;
insert into tcl values(4,"D");
set autocommit=0;
rollback;
select *from tcl;
commit;
insert into tcl values(4,"D");
rollback;
insert into tcl values(5,"E");

savepoint sp1;
insert into tcl values(6,"F");
rollback to sp1;
rollback;

/* tcl command  consistcommit ,roolback,saveopoiunt
commit:if you want see the then firstly we have to run the safely set autocommit=0 it will stop the system from permanent store
now whatever  the daata i insert it willlbe data going to temp memoery for making at  perm memory we have to run commit
at any instant of time if we rollback then it will bring the system till last commit.
now if i create the save point which is also landmarks in mysql.now after creating the savepoint like sp1 ,sp2,etc now if i rollback to sp1 then system will so the o/p till that stage the advatage of save point is that we can
come to any satage b/w last commit and the present data.alter
due to it we don't need store the data perma in b/w the stages.*/


-- CLASS-4
create table A(id int,name varchar(30));
insert into A values(1,"A"),(2,"B");
SELECT *FROM A;

/*IF YOU WANT TO drop the  table then in schemas go at any table name right click drop table*/
create table A(id int unique,name varchar(30) not null,age int check (age>18),location varchar(40) default "bhopal");
insert into A values(1,"A",19,"pune"),(2,"B",20,"pune"),(3,"C",20,"pune");
SELECT *FROM A;
insert into A(id,name,age) values(4,"D",23);

create table B(id int primary key,name varchar(30) not null,age int check (age>18),location varchar(40) default "bhopal");
insert into B values(1,"A",19,"pune"),(2,"B",20,"pune"),(3,"C",20,"pune");
SELECT *FROM B; 
desc B;
insert into B values(4,"A",20,"pune"); 



-- day - 5 class
/* now we construct the table which consist the primary key constraints*/
use practice8;
create table customer11(c_id int primary key,c_name varchar(30) not null);






/* now we create customer table*/
create table order11(o_id int primary key,o_name varchar(30) not null,c_id int ,foreign key (c_id) references customers(c_id) );


create table doctor(d_id int primary key,d_name varchar(30) not null);
create table patient(p_id int primary key,p_name varchar(30) not null,doctor_id int ,foreign key (doctor_id) references doctor(d_id) );



Create Database
CREATE DATABASE CompanyDB;
USE CompanyDB;

-- Create Employees Table
CREATE TABLE Employees (
EmpID INT PRIMARY KEY,
Name VARCHAR(50),
Department VARCHAR(50),
Salary INT,
ManagerID INT,
JoiningDate DATE,
Email VARCHAR(100)
);

-- Insert Data
INSERT INTO Employees VALUES
(1, 'Amit', 'IT', 60000, NULL, '2022-01-10', 'amit@gmail.com'),
(2, 'Rohan', 'HR', 40000, 1, '2021-03-15', 'rohan@gmail.com'),
(3, 'Sneha', 'IT', 75000, 1, '2020-07-20', 'sneha@gmail.com'),
(4, 'Karan', 'Finance', 50000, NULL, '2019-11-01', 'karan@gmail.com'),
(5, 'Anita', 'HR', 45000, 2, '2023-02-25', 'anita@gmail.com'),
(6, 'Vikas', 'IT', 80000, 1, '2018-06-30', 'vikas@gmail.com'),
(7, 'Neha', 'Finance', 30000, 4, '2022-09-10', 'neha@gmail.com'),
(8, 'Arjun', 'IT', 90000, 1, '2017-12-12', 'arjun@gmail.com'),
(9, 'Pooja', 'HR', 35000, 2, '2020-05-18', 'pooja@gmail.com'),
(10, 'Rahul', 'Finance', 28000, NULL, '2021-08-08', 'rahul@gmail.com');



-- Question Paper
Section A: DDL (Data Definition Language)


Create a database named CompanyDB.


Create a table Employees with the following fields:

EmpID (Primary Key)

Name (VARCHAR)

Department (VARCHAR)

/*

*/














