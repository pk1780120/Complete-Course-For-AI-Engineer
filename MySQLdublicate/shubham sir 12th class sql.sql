
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

/* tcl command  consistcommit ,roolback,saveopoint
commit:if you want see the then firstly we have to run the safely set autocommit=0 it will stop the system from permanent store
now whatever  the data i insert it will be data going to temp memory for making at  perm memory we have to run commit
at any instant of time if we rollback then it will bring the system till last commit.
now if i create the save point which is also landmarks in mysql.now after creating the savepoint like sp1 ,sp2,etc now if i rollback to sp1 then system will so the o/p 
till that stage the advatage of save point is that we can
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

/*constraints*/
/*there are 6 types of constraints
1.unique key: if we use it any column then it will not allowed the column to have the dublicate values
2.not null:  it doesn't null vlue in the column
3.check :it is use for checking the particular value that does it satisfy the condition or not
4.default: if we don't provide the value under the column then by default what value it should have we decide it with the default
5.primary key: this key is used to provide the unique identification to  each row andd it consist the property of not null and unique.
6.foregien:this key is used to  create the relationship bewteen
 the table it may consist propertie of duplicate and null value.*/

/* what are  acid property
1.a for atomicity: it is used it state that either mysql if any transaction text please then either it will be completed or falied 
if not in holding stage.
2. c -consistancy: it state that if any column is unique then it will be unique before and after 
the transaction.it doesn't break the database integrity.
3.i for isolation : this word itself means the separation means 1-transaction doesn't affect
 the other transaction at a time.
4.durability: it means  ones the transaction  is executed than if the system face than  the 
transaction would be done but if the  transaction is not commited than if the system face than nothing change will take palace savepoint
system will achieve the atomicity.*/

-- Employees Dataset for practicing Text and Numeric Functions

CREATE TABLE employees4 (
	emp_id INT PRIMARY KEY,
    first_name VARCHAR(50),
    last_name VARCHAR(50),
    department VARCHAR(50),
    city VARCHAR(50),
    salary DECIMAL(10,2),
    bonus DECIMAL(10,2),
    age INT,
    experience_years INT
);

INSERT INTO employees4 VALUES
(101, 'Rahul', 'Sharma', 'IT', 'Delhi', 55000.75, 5000.50, 25, 2),
(102, 'Priya', 'Verma', 'HR', 'Mumbai', 48000.50, 4000.00, 28, 4),
(103, 'Amit', 'Singh', 'Finance', 'Kolkata', 62000.00, 6000.75, 32, 7),
(104, 'Neha', 'Gupta', 'IT', 'Bangalore', 71000.25, 7000.25, 30, 6),
(105, 'Rohit', 'Mehta', 'Sales', 'Pune', 45000.00, 3500.50, 26, 3),
(106, 'Anjali', 'Patel', 'Marketing', 'Ahmedabad', 52000.60, 4200.40, 29, 5),
(107, 'Vikas', 'Yadav', 'IT', 'Delhi', 68000.80, 6500.60, 31, 8),
(108, 'Sneha', 'Reddy', 'Finance', 'Hyderabad', 59000.45, 5000.00, 27, 4),
(109, 'Karan', 'Malhotra', 'Sales', 'Chennai', 47000.90, 3000.30, 24, 2),
(110, 'Pooja', 'Kapoor', 'HR', 'Delhi', 51000.00, 4500.75, 28, 5);

select *from employees4;

-- text functions
select concat(first_name," ",last_name) from employees4; 
select substr(first_name,2,3) from employees4;
select length(first_name) from employess4;
select left(first_name,2) from employees4;
select right(first_name,2) from employees4;
select instr("mysql","sql");
select locate("sql","mysql");
select upper(first_name) from employees4;
select lower(first_name) from employees4;
select trim(first_name) from employees4;
select ltrim(first_name) from employees4;
select rtrim(first_name) from employees4;
select replace("i love java","java","my sql");
select reverse(first_name) from employees4;

select lpad(salary,10,0) from employees4;
select rpad(salary,10,0) from employees4;


-- aggregate funct
/*
a func which takes multiple i/p rows and  provide the singel value o/p is aggregate function

-- exception of (group by )
*/
select sum(salary) from employees4;
select max(salary) from employees4;
select min(salary) from employees4;
select count(salary) from employees4;
select avg(salary) from employees4;

-- numeric func
select round(salary,1) as round_value from employees4;

/*now i use alias to provide the temp header */

select ceil(salary) from employees4;
select floor(salary) from employees4;
select sqrt(salary) from employees4;
select power(salary,2) from employees4;

-- date & time funct

select now() ;
-- it provide date with time
select current_date();
select current_time();
select current_timestamp();
select year("2022-01-01");
select monthname("2024-04-02");
select day("2024-04-02");
select date_add("2024-04-02",interval 10 day);
select date_sub("2024-04-02",interval 10 day);
select datediff("2024-04-02","2022-04-02");
select abs(datediff("2024-04-02","2022-04-02"));
-- absolute makes the number positive;
select date_format("2024-04-02","%d-%m-%y");
select date_format("2024-04-02","%d-%m-%y");
select date_format("2024-04-02","%D-%M-%Y");
select last_day("2024-04-02");
select year("2024-04-02");
select month("2024-04-02");
select minute("22:34");

/*how to export and import file from mysql*/
/*select the database go at the table name then right click then table name export wizard then select source table export option is given from which we can choose the table which is we want do download
then next and then in the file path we have to select the location at which we are to locate the file
then next and then next 

we can export and import in csb and json format

now if i are to import the file right click on any database then table data import wizard then in the file path give the location of file from wher we are to import then create new table
and the next next...

now we can refresh the scemas we will find the imp table*/

/* is mysql opensource or close source data base
my sql is an open source data base because it is freely available we can downloaded free of cost*/

/* why do we prefere mysql for managing the data foreverother tools
- mysql can handle the large amount of data and under my sql data is permanent permanent doesn't mean that the data can't be deleted it means that the data is more secure and can be store for longer time */

-- class -8
-- dcl commmand
grant all on table_name to user_name;

-- grant column1,column2 on table_name to user_name;
-- revoke all on table_name to user_name;
-- revoke column1,column2 on table_name to user_name;

-- sql clauses
/*under the sql statement for defining the task that what task need to be done we use*/
select *from employees4 where department = "IT";
select *from employees4 where salary > 50000;
select *from employees4 where city = "Bangalore";
select  department,sum(salary) as dept_wise_salary  from employees4 group by department;
/*here i want to see dept wise salary thats why ihave group the department and the group by clause is used with the aggregate func*/

select  department,count(salary) as dept_wise_salary  from employees4 group by department;

select city,sum(salary) from employees4  group by city order by sum(salary) asc limit 2;
select  department,sum(salary) as dept_wise_salary  from employees4 group by department having sum(salary) >100000;
select city,sum(salary) from employees4  group by city order by sum(salary) asc limit 2 offset 2;
select city,sum(salary) from employees4  group by city order by sum(salary) desc limit 2;

/* order of exicution*/
/*from
where
group by 
having
select
order by
limit
offset
*where clause is used for the filter condition and having clause is used apply the filter on the result

we used order by claused to arrange the data in asc and desc order

for the desc order we need to write order by column name desc and fro asc in the placed of desc write asc or leave it blank 


if we want to top to rows o/p then we use limit clause but support if i want to have the third and fourth row means i want to leave the starting  2 rows then i used to offset 

limit 2 offset 2*/

select  city,sum(salary) from employees4 group by city having sum(salary) >50000  limit 4  offset 2 ;
select *from employees4 where department ="IT" or city="Delhi";
select *from employees4 where department ="IT" and city="Delhi";
select *from employees4 where salary  between 40000 and 50000;
select *from employees4  where city in ("Mumbai","Delhi");
select *from employees4  where city not in ("Mumbai","Delhi");

select *from employees4  where city like  "A";
select *from employees4  where city like "_e%";
select *from employees4  where city like "d%i";
select *from employees4  where city like "_____";
select *from employees4  where city like "m%" or department="IT";
use practice8;
select *from employees4;
select  department,sum(salary) as dept_wise_salary  from employees4 group by department;
select city,department,sum(salary) from employees4  group by city,department order by city, department;
select city,department,sum(salary) from employees4  group by city,department order by city desc;
select city,department,sum(salary) from employees4  group by city,department order by city asc;

select * from employees4  limit 170890 offset 1 ;
select * from employees4  limit 1  ;

select  emp_id,first_name,last_name,department,sum(salary) as dept_wise_salary from employees4 group by emp_id,first_name,last_name,department having sum(salary) >50000 or
 first_name like "p%"  order by sum(salary)  limit 48028  offset 2 ;
 
 
create table A4(A_ID  INT PRIMARY KEY ,NAME VARCHAR(40) NOT NULL  DEFAULT "RAJA" ,AGE  INT NOT NULL CHECK (AGE>18));
DESC A4;
create table B4(B_ID  INT PRIMARY KEY ,NAME VARCHAR(40) NOT NULL  DEFAULT "SHYAM" , foreign key B4(B_ID) references A4(A_ID));
DESC B4;   
use practice8;
set sql_safe_updates=0;

drop  table employees4;
select *from employees4;
desc employees4; 

SELECT *,
       0.10 * salary AS salary_10_percent,
       0.75 * bonus AS bonus_75_percent
FROM employees4
WHERE (first_name LIKE 'R%'
    OR first_name LIKE 'P%')
  and age BETWEEN 20 AND 25
ORDER BY salary DESC
LIMIT 3 OFFSET 1;

SELECT *,
       0.10 * salary AS salary_10_percent,
       0.75 * bonus AS bonus_75_percent
FROM employees4
WHERE (first_name LIKE 'R%'
    OR first_name LIKE 'P%')
  AND age BETWEEN 20 AND 25
ORDER BY salary DESC
LIMIT 3;

/* is null operator
we use it to know that is null value available in the column or not if we avalabe then it shows 1 otherwise  show 0 in the new clmn.*/
-- Create Table
CREATE TABLE sales (
    order_id INT,
    customer_name VARCHAR(50),
    product VARCHAR(50),
    city VARCHAR(50),
    quantity INT,
    price DECIMAL(10,2),
    order_date DATE
);

-- Insert Sample Data (Including NULL Values)
INSERT INTO sales VALUES
(1, 'Amit', 'Laptop', 'Mumbai', 1, 55000, '2024-01-10'),
(2, 'Rahul', 'Mobile', 'Delhi', 2, 20000, '2024-01-12'),
(3, 'Sneha', 'Laptop', 'Mumbai', 1, 60000, '2024-01-15'),
(4, 'Priya', 'Tablet', 'Chennai', 3, 15000, '2024-01-18'),
(5, 'Amit', 'Mobile', 'Mumbai', 1, 18000, '2024-01-20'),
(6, 'Rahul', 'Laptop', 'Delhi', 2, 52000, '2024-01-25'),
(7, 'Sneha', 'Tablet', 'Mumbai', 1, 14000, '2024-01-28'),
(8, 'Priya', 'Mobile', 'Chennai', 2, 21000, '2024-02-02'),
(9, 'Amit', 'Tablet', 'Mumbai', 2, 16000, '2024-02-05'),
(10, 'Rahul', 'Mobile', 'Delhi', 1, 19000, '2024-02-08'),
(11, 'Karan', 'Laptop', 'Mumbai', 1, 58000, '2024-02-10'),
(12, 'Meena', 'Mobile', NULL, 2, 22000, '2024-02-12'),
(13, 'Rohit', NULL, 'Delhi', 1, 30000, '2024-02-15'),
(14, NULL, 'Tablet', 'Chennai', 3, 15000, '2024-02-18'),
(15, 'Anjali', 'Laptop', 'Mumbai', NULL, 62000, '2024-02-20'),
(16, 'Vikas', 'Mobile', 'Delhi', 2, NULL, '2024-02-22'),
(17, 'Neha', 'Tablet', NULL, 1, 14000, NULL),
(18, NULL, NULL, 'Mumbai', 2, 18000, '2024-02-25');

select *from sales;





-- isnull funct
/*if the help of it  if the null value is available in the clmn    then it will replace it by the specified value*/
select *,isnull(product) from sales;
select *,ifnull(product,customer_name) from sales;

/*coalesce-
we use this functn  to replace the  null value by the specified value but the suppose that if the specified value als o null then 
under the coalesce functn we having the option to go further*/
select *,coalesce(product,customer_name,city,2) from sales;
-- joints
/* joints are used to combine the rows of the multiple table basically it perform the merge operation with the help of common clmn b/w the table
basically joint are of 7-types
1.inner- it provide the common section b/w multi table
2.left inner- left joints=inner + lefttable (unmatched rows with the right table where right table provided with null)
3.right-it is the combination of .innerjoints + right table unmatche d rows wher left table valuse provided by null*/
-- JOIN PRACTICE DATASET

-- CREATE DATABASE IF NOT EXISTS join_practice;
-- USE join_practice;

-- Customers table
CREATE TABLE customers9 (
    customer_id INT PRIMARY KEY,
    customer_name VARCHAR(50),
    city VARCHAR(50),
    email VARCHAR(100)
);

INSERT INTO customers9 VALUES
(1,'Shubham','Delhi','shubham@gmail.com'),
(2,'Amit','Mumbai','amit@gmail.com'),
(3,'Neha','Pune','neha@gmail.com'),
(4,'Rohit','Delhi','rohit@gmail.com'),
(5,'Priya','Bangalore','priya@gmail.com');

-- Categories table
CREATE TABLE categories (
    category_id INT PRIMARY KEY,
    category_name VARCHAR(50)
);

INSERT INTO categories VALUES
(1,'Electronics'),
(2,'Clothing'),
(3,'Books');

-- Products table
CREATE TABLE products (
    product_id INT PRIMARY KEY,
    product_name VARCHAR(50),
    price DECIMAL(10,2),
    category_id INT,
    FOREIGN KEY (category_id) REFERENCES categories(category_id)
);

INSERT INTO products VALUES
(101,'Laptop',50000,1),
(102,'Mobile',20000,1),
(103,'T-Shirt',500,2),
(104,'Jeans',1200,2),
(105,'SQL Book',700,3);

-- Orders table
CREATE TABLE orders (
    order_id INT PRIMARY KEY,
    customer_id INT,
    order_date DATE,
    FOREIGN KEY (customer_id) REFERENCES customers(customer_id)
);

INSERT INTO orders VALUES
(1001,1,'2024-01-10'),
(1002,2,'2024-01-12'),
(1003,1,'2024-01-15'),
(1004,3,'2024-01-18'),
(1005,5,'2024-01-20');

-- Order Items table
CREATE TABLE order_items (
    order_item_id INT PRIMARY KEY,
    order_id INT,
    product_id INT,
    quantity INT,
    FOREIGN KEY (order_id) REFERENCES orders(order_id),
    FOREIGN KEY (product_id) REFERENCES products(product_id)
);

INSERT INTO order_items VALUES
(1,1001,101,1),
(2,1001,103,2),
(3,1002,102,1),
(4,1003,105,3),
(5,1004,104,1),
(6,1005,101,1);

-- SAMPLE JOIN QUERY
SELECT customers.customer_name, products.product_name, order_items.quantity
FROM customers
JOIN orders ON customers.customer_id = orders.customer_id
JOIN order_items ON orders.order_id = order_items.order_id
JOIN products ON order_items.product_id = products.product_id;
 
 
-- apply the inner joints b/w category and products
select * from categories as c inner join products as  p on c.category_id = p.category_id;
select * from categories as c left join products as  p on c.category_id = p.category_id;
select * from categories as c right join products as  p on c.category_id = p.category_id;

/* 5. cross join- it provides the cartesion product which means if there are 3 row are 1st table and 4 rows int the 2nd table then  it will provide the o/p is  provide 12 rows 
under which we need not  provide the on condn because ther no need any clmn*/
select * from categories cross join products ;

/*6.natural join-under it we need not provide the condn because a join find the commn b/w table b y itself 

it find the commn clmn then it perform inner joints other wise cross join*/
select * from categories natural join products ;
-- case of commn clmn 
select * from categories natural join customers9 ;
-- case of not having common clmn