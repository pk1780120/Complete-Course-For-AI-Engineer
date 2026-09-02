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

use college; 
create table emp(eid int,ename varchar(24),eaddr varchar(18));
insert into emp values(101,'A','A-1');
insert into emp values(102,'B','B-1');
insert into emp values(103,'C','C-1');
select *from emp;


create table dept(dname varchar(40),daddr varchar(14));
insert into dept values('D-1','DA');
insert into dept values('D-2','DB');
insert into dept values('D-3','DC');

select *from dept;


-- CROSS JOIN
select * from emp , dept;-- or
select * from emp cross join dept;

-- SELF JOIN

create table customer500(customerid varchar(50),cname varchar(34),country varchar(38));
insert into customer500 values('C-1','harsh','india');
insert into customer500 values('D-1','ajay','sa');
insert into customer500 values('F-1','anil','aus');
insert into customer500 values('H-1','anjana','india');
select *from customer500;

select a.cname from customer500 a,customer500 b where a.country=b.country and a.customerid <> b.customerid;

create table A1(name varchar(10),per int);
insert into A1 values('A',1);
insert into A1 values('B',2);
insert into A1 values('C',3);
select * from A1;

create table A2(roll int,addr varchar(15));
insert into A2 values(1,'A-1');
insert into A2 values(2,'B-1');
insert into A2 values(3,'C-1');
select * from A2;

-- NOT NULL CONSTRAINTS

create table A3(roll int not null,addr varchar(15));
insert into A3 values(1,'A-1');
insert into A3 values(2,'B-1');
insert into A3 values(3,'C-1');
select * from A3;
desc A3;
insert into A3 values(4,'D-1');
insert into A3 values(5,null);
insert into A3 values(null,'E-1');

select * from A1 inner join A2 on A1.per=A2.roll; 

-- UNIQUE CONSTRAINTS
  create table P2(ID int not null,NAME varchar(35),AGE int,unique(AGE));
  alter table P2 modify ID int  null;
  alter table P2 modify ID int not null;
  insert into P2 values(1,'amit',20);
  insert into P2 values(1,'amit',20);
  insert into P2 values(3,'ajay',null);
   insert into P2 values(3,'ajay',null);
   insert into P2 values(null,'pawan',30);
   INSERT INTO P2 VALUES(NULL,'KRISHNA',40);
  select *from P2;
  desc P2;
  
  
USE COLLEGE;
create table P3(ID int ,AGE int,primary key(ID));
desc P3;
insert into P3 values(1,20);
insert into P3 values(2,30);
insert into P3 values(3,null);
insert into P3 values(3,50);
select *from P3;
alter table P3 drop primary key;
 alter table P3 modify ID int primary key; 
 alter table P3 modify AGE int primary key;  
 
 
 create table P300(ID int,AGE int,PRIMARY KEY(ID,AGE));
  insert into P300 values(1,20);
  insert into P300 values(2,30);
  insert into P300 values(3,null);
  
  select *from P300;
  desc P300; 
  
 
create table person1(person_id int not null,person_name varchar(35),primary key(person_id));
insert into person1 values(1001,'A');
insert into person1 values(1002,'B');
insert into person1 values(1004,'C');

desc person1;
 create table order5(orderid int not null,person_id int,primary key(orderid),foreign key(person_id) references person1(person_id));
 insert into order5 values(101,1001); 
 insert into order5 values(102,1001);
 insert into order5 values(103,1002);  
 insert into order5 values(104,null);
 desc order5;

 set sql_safe_updates=0;
 delete from person1 where person_id =1004;
 delete from person1 where person_id =1001;   
 
 create table person100(no int ,pname varchar(35),primary key(no));
 insert into person100 values(101,'A');
 insert into person100 values(102,'B');
 select * from person100;
 set sql_safe_updates=0;
 delete from person100 where pname = 'A';

 create table people(name varchar(29) ,no int,foreign key(no) references person100(no) on delete cascade);
 insert into people values('A-1',101);
 insert into people values('B-1',102);
 insert into people values('C-1',102);
select * from people;


create table person1000(no int ,pname varchar(35),primary key(no));
 insert into person1000 values(101,'A');
 insert into person1000 values(102,'B');
 select * from person1000;

 delete from person1000 where pname = 'A';

 create table people4(name varchar(29) ,no int,foreign key(no) references person1000(no) on delete set null);
 insert into people4 values('A-1',101);
 insert into people4 values('B-1',102);
 insert into people4 values('C-1',102);
select * from people4;

-- default constraints

create table p10(id int not null,age int,city varchar(40) default 'bhopal');
insert into p10 values(101,40,'ind');
insert into p10 values(102,50,default);
desc p10;
select *from p10;

-- check table
create table p7(studentid int not null,age int not null,check(age>=17));
insert into p7 values(101,20);
insert into p7 values(102,4);






