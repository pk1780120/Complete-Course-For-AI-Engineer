create database kpawan;
use kpawan;
create table employee(id int,name varchar(30),department varchar(20),salary int,city varchar(20));
desc employee;
insert into employee values(1,'Pawan','IT',50000,'Bhopal');
insert into employee values(2,'Karan','HR',35000,'Indore');
insert into employee values(3,'Nikhil','IT',60000,'Delhi');
insert into employee values(4,'Rohit','Sales',45000,'Mumbai');
insert into employee values(5,'Aman','HR',30000,'Pune');
insert into employee values(6,'Neha','IT',70000,'Delhi');
insert into employee values(7,'Komal','Sales',40000,'Bhopal');

insert into employee values(8,'Riya','Finance',65000,'Indore');
select * from employee;
select name from employee;
select name,salary from employee;
select * from employee
where department='IT';
select * from employee where salary > 50000;
select * from employee where department='IT' and salary > 55000;
select * from employee where city='Delhi' or city='Bhopal';
select * from employee
where not department='HR';
update employee set salary=55000
where id=1;
delete from employee
where id=5;
select distinct department from employee;
select * from employee
order by salary;
select * from employee
order by salary desc;
select * from employee
limit 3;
select * from employee
limit 3 offset 2;
select count(*) from employee;
select max(salary) from employee;
select min(salary) from employee;
select avg(salary) from employee;
select sum(salary) from employee;
select count(*),department from employee group by department;
select count(*),department from employee group by department having count(*) > 1;
select * from employee where name like 'N%';
select * from employee where name like '%a';
select * from employee where name like '_____';
select * from employee where city in('Delhi','Bhopal');
select * from employee where department not in('HR','Sales');
select * from employee where salary between 40000 and 70000;
insert into employee values(9,'Rahul','IT',null,'Delhi');
select * from employee where salary is null;
select * from employee where salary=(select max(salary) from employee);
select salary from employee order by salary desc limit 1 offset 1;
select * from employee where salary > any(select salary from employee where department='HR');
select * from employee where salary > all(select salary from employee where department='HR');
alter table employee add age int;
alter table employee modify name varchar(50);
alter table employee drop age;
desc employee;
truncate table employee;
select * from employee;
drop table employee; 




