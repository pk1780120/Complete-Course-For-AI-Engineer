use pawan;
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








