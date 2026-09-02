use college;
create table student1(roll_no int,name varchar(25),age int);
insert into student1 values(101,'adam',12);
insert into student1 values(102,'bob',14);
insert into student1 values(103,'casey',11);
select *from student1;
create table teacher(id int,name varchar(30),subject varchar(35));
insert into teacher values(1,'aman','english');
insert into teacher values(2,'buvan','computerscience');
insert into teacher values(3,'surbhi','math');
select *from teacher;
create table user(id int,name varchar(15), email varchar(45),followers int,following int);
insert into user values(1,'adam1','adam@yahoo.in',123,145);
insert into user values(2,'bob1','bob@gamil.com',200,200);
insert into user values(3,'casey','casey@email.com',300,306);
insert into user values(4,'donald','doanld@mil.com',200,105);
select *from user;
create table user4(id int,age int,name varchar(15) not null,
   email varchar(45) unique,followers int default 0,following int,constraint check(age>=13),primary key (id));

create table post(id int primary key,content varchar(100),user_id int,foreign key (user_id) references user4(id));
