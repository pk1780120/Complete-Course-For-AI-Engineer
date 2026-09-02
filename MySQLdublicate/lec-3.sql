create database cybrom;
use cybrom;
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






