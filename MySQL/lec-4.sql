use college;
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
-- find the maximum salary of the company healthplus
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








