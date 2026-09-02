create database kpawan;
use kpawan;
show databases;
drop database cybrom;
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


create table student(roll int,name varchar(15),branch varchar(15));
desc student;
insert into student values(01,'pawan','cse');
insert into student values(02,'karan','bsc');
insert into student values(03,'nikhil','cs/it');
insert into student values(04,'kamali','mca');
insert into student values(05,'chameli','mba');
-- find the information of student(first )
select *from student;
-- find the name of student;
select name from student;
-- find the name and branch of student;
select name,branch from student;
-- update the branch of student to ec;
update student set branch = 'ece';
set sql_safe_updates=0;
select *from student;
delete from student;
select *from student;


create table works(employee_id int,company_name varchar(20),salary int);
alter table works modify company_name varchar(30);
insert into works values(1,'techcrop',75000);
insert into works values(2,'innovateltd',62000);
insert into works values(3,'healthplus',54000);
insert into works values(4,'eduworks',48000);
insert into works values(5,'greentech',68000);
insert into works values(6,'techcrop',80000);
insert into works values(7,'innovateltd',66000);
insert into works values(8,'healthplus',50000);
insert into works values(9,'eduworks',51000);
insert into works values(10,'greentech',72000);
select *from works;
-- find the maximum salary of the company healthplus;
select max(salary) from works where company_name= 'healthplus' ;
-- find the number of employee in healthplus;
select count(*) from works where company_name='healthplus';
-- find the employ_id in the healthplus;
select employee_id from works where company_name='healthplus';
-- find the information of company which name start from h;
select *from works where company_name like 'h%';
select *from works where company_name like '%s';
-- find the information of company whose name has exactly 8 character;
select *from works where company_name like '________';
-- find the info of company whoe company name is atleast 8;
-- select *from works where company_name like '--------'; wrong
select *from works where company_name like '_________%';
-- find the unique company_name ;
select company_name from works;
select distinct company_name from works;
-- find the second highest salary;
select  salary from works order by salary desc limit 1 offset 1 ; 


create table student100(roll int,name varchar(20),per int);
insert into student100 values(01,'Pooja',10);
insert into student100 values(02,'Neelam',20);
insert into student100 values(03,'Ruchi',null);
insert into student100 values(04,'Null',null);
insert into student100 values(null,'null',null);
select *from student100;
select count(*) from student100;
create table s100(roll int,name varchar(20),per int);
insert into s100 values(01,'A',10);
insert into s100 values(02,'B',20);
insert into s100 values(03,'null',30);
insert into s100 values(null,'null',null);
select *from s100;
select count(*) from s100;
select avg(per) from s100;
select 2*3;
select 16%4;
select 16%5;
select *from s100 where per = 30;
select *from s100 where  per = 20 & 30;
select *from s100 where per = 20 | 30;
select *from s100 where per = 20 ^ 30; 
-- find the name of student whose percentage belongs to 10,40,60,30
select name from s100 where per= 10 or per =40 or per=60 or per=30;
select name from s100 where per in (10,40,60,30);
select name from s100 where per not in(10,40,60,30);


create table workss(employee_id int,company_name varchar(20),salary int);
alter table workss modify company_name varchar(30);
insert into workss values(1,'techcrop',75000);
insert into workss values(2,'innovateltd',62000);
insert into workss values(3,'healthplus',54000);
insert into workss values(4,'eduworks',48000);
insert into workss values(5,'greentech',68000);
insert into workss values(6,'techcrop',80000);
insert into workss values(7,'innovateltd',66000);
insert into workss values(8,'healthplus',50000);
insert into workss values(9,'eduworks',51000);
insert into workss values(10,'greentech',72000);
select *from workss;
-- find the maximum of each company;
select max(salary), company_name from workss group by company_name;
-- find the number of emplyee each company;
select count(*)  from workss group by  company_name;


create table product(product_id int,product_name varchar(10),price int,category varchar(5));
alter table product modify product_name varchar(25);
alter table product modify category varchar(30);
desc product;
insert into product values(1,'laptop',999,'electronics');
insert into product values(2,'deskchair',149,'furniture');
insert into product values(3,'smartphone',599,'electronics');
insert into product values(4,'notebook',2,'stationary');
insert into product values(5,'headphone',89,'electronics');
insert into product values(6,'coffeemaker',49,'appliances');
insert into product values(7,'standingdesk',249,'furniture');
insert into product values(8,'tablet',399,'electronics');
insert into product values(9,'mouse',19,'electronics');
insert into product values(10,'waterbottle',12,'stationary');
select *from product;
select category from product;
-- display the product price in asscending order;
select price from product order by price;
-- display the product price in desending order;
select price from product order by price desc;
select *from product limit 5;
select *from product limit 5 offset 2;
select price from product limit 5 offset 2;
-- find the maximum price of product;
select max(price) from product;
select min(price) from product;
select max(product_name) from product;
select count(*) from product;
-- find the price of mouse;
select price from   product where product_name ='mouse';
-- display the information of product whose categories belong to furniture and price less than 200; 
select  *from product where category = 'furniture' and price < 200; 
-- find the number of product each category;
select count(*),category from product group by category; 
-- find the nuumber of product in category where number of product should be 3 or more than three(3);
select count(*),category from product group by category having count(*) > 3;
-- find the information of most expensive product;
select * from product where price =(select max(price) from product);
-- find the product id of second highest product ;
 select product_id from product where price=(select max(price) from product where price < (select max(price) from product));

use kpawan;
create table managers(id int,name varchar(30),age int,address varchar(35),salary int);
insert into managers values(1,'ramesh',32,'ahmedabad',2000);
insert into managers values(2,'khilan',25,'delhi',1500);
insert into managers values(3,'kaushik',23,'kota',2000);
insert into managers values(4,'chaitali',25,'mumbai',6500);
insert into managers values(5,'hardik',27,'bhopal',8500);
insert into managers values(6,'komal',22,'hyderabad',4500);
insert into managers values(7,'muffy',24,'indore',10000);
select *from managers;
-- list out the detail of all customer which salary is greater than salary of any customer whose age is 32;
select * from managers where salary > (select max(salary) from manager where age = 25); 
select * from manager where salary > (select salary from manager where age = 32);
select * from managers where salary > any(select salary from manager where age = 32);
select * from managers where salary > all(select salary from manager where age = 32);
select * from manager where salary > some(select salary from manager where age = 32);
use kpawan;
truncate  table managers;
desc managers;







