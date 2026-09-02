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
use college;
create table product(product_id int,product_name varchar(10),price int,category varchar(20));
insert into product values(01,'laptop',999,'electronics');
delete from student;
use cybrom;
create table product(product_id int,product_name varchar(30),price int,category varchar(25));
alter table product modify category varchar(20);
alter table product modify product_name varchar(20);
desc product;
insert into product values(01,'laptop',999,'electronics');
insert into product values(02,'deskchair',149,'furniture');
insert into product values(03,'smartphone',599,'electronics');
insert into product values(04,'notebook',2,'stationary');
insert into product values(05,'headphone',89,'electronics');
insert into product values(06,'coffeemaker',49,'appliances');
insert into product values(07,'standingdesk',249,'furniture');
insert into product values(08,'tablet',399,'electronics');
insert into product values(09,'mouse',19,'electronics');
insert into product values(10,'waterbottle',12,'stationary');
select *from product;
select category from product;
use college;
create table works(employee_id int,company_name varchar(20),salary int);
insert into works values(1,'techcorp',75000);
insert into works values(2,'innovateltd',62000);
insert into works values(3,'healthplus',54000);
insert into works values(4,'eduworks',48000);
insert into works values(5,'greentech',68000);
insert into works values(6,'techcrop',80000);
insert into works values(7,'innovateltd',66000);
insert into works values(8,'healthplus',50000);
insert into works values(9,'eduworks',51000);
insert into works values(10,'greentech',72000);
-- find the category of product;
select category from product;
-- find the product name of category of electronics;
select product_name from product where category = 'electronics';
select *from works;
-- find the information of product whose price  greater than 500;
select *from product where price > 500;
select *from product where price < 500;













