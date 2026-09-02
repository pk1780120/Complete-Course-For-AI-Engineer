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

create table order1(orderid int,customerid varchar(30),orderdate varchar(28));
insert into order1 values(101,'C-1','20nov');
insert into order1 values(102,'D-1','21nov');
insert into order1 values(103,'E-1','22nov');
insert into order1 values(104,'F-1','22nov');
select *from order1;

create table customer2(customerid varchar(35),cname varchar(45),country varchar(29));
insert into customer2 values('C-1','Harsh','India');
insert into customer2 values('D-1','ajay','Sa');
insert into customer2 values('F-1','anil','Aus');
insert into customer2 values('H-1','anjana','nz'); 
select *from customer2;
-- find the customer name of order id 101;
select cname from customer2 where customerid = (select  customerid from order1 where orderid=101); 
select *from customer2 inner join order1 on customer2.customerid = order1.customerid;
select cname from customer2 inner join order1 on customer2.customerid = order1.customerid where orderid=101;
select *from customer2 inner join order1 on customer2.customerid = order1.customerid where orderid=101;
use college;
-- find customer name and customer id from oreder id 101;
select cname,customer2.customerid from customer2 inner join order1 on customer2.customerid = order1.customerid where orderid=101;
-- find the customer name and orderdate of orderid 101;
select cname,orderdate from customer2 inner join order1 on customer2.customerid = order1.customerid where orderid=101;
-- left join
select * from customer2 left join  order1 on customer2.customerid = order1.customerid;
-- right join
select * from customer2 right join order1 on customer2.customerid = order1.customerid ; 
