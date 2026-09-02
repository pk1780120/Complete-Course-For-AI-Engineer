
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
create table student7(s_10 int,s_name varchar(30),s_score int);
insert into student7 values(1,"A",100);
insert into student7 values(2,"B",80);
insert into student7 values(3,"C",70);
insert into student7 values(4,"D",90);
select *from student7;

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
/* now we use the pin tab on the tableo/p name to savwe the result of querry on the temporary basis just right click on o/p name and pin tab*/
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
savepoint