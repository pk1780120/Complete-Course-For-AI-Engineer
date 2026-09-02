
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







