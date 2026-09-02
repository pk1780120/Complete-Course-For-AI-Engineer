create database windowfunct;
use windowfunct;
CREATE TABLE employees (
    emp_id INT PRIMARY KEY,
    emp_name VARCHAR(50),
    department VARCHAR(50),
    salary INT
);

INSERT INTO employees (emp_id, emp_name, department, salary) VALUES
(101, 'Amit', 'HR', 50000),
(102, 'Riya', 'IT', 60000),
(103, 'Sohan', 'IT', 60000),
(104, 'Priya', 'Finance', 75000),
(105, 'Rahul', 'HR', 50000),
(106, 'Neha', 'Finance', 75000),
(107, 'Karan', 'IT', 90000),
(108, 'Simran', 'HR', 50000),
(109, 'Vikas', 'Finance', 90000),
(110, 'Anjali', 'IT', 60000),
(111, 'Rohit', 'HR', 45000),
(112, 'Pooja', 'Finance', 75000),
(113, 'Arjun', 'IT', 90000),
(114, 'Kavya', 'HR', 45000),
(115, 'Manish', 'Finance', 60000);
select *from employees;

-- 1. rank window function
-- rank functn
select *,rank() over(order by salary desc) as Ranks from employees;
-- dens rank
select *,dense_rank() over(order by salary desc) as dense_Ranks from employees;
-- row number
select *,row_number() over(order by salary desc) as rownumbers from employees;
-- ntile()
select *,ntile(5) over(order by salary desc) as partitions from employees;

-- 2. Value Window Function
-- first values
select *,first_value(salary) over(order by salary desc) as first_values from employees;

-- last values
select *,last_value(salary) over(order by salary desc) as lastvalues from employees;

-- lead values
select *,lead(salary) over(order by salary desc) as leadvalues from employees;

-- lag value
select *,lag(salary) over(order by salary desc) as lagvalues from employees;

-- aggregate  funct
--  rolling sum
select *,sum(salary) over(order by salary desc) as Rolling_sum from employees;

-- max
select *,maX(salary) over(order by salary desc) as MAX_sum from employees;

-- MIN 
select *,min(salary) over(order by salary desc) as MIN_sum from employees;

-- COUNT
select *,count(salary) over(order by salary desc) as Rolling_COUNT from employees;
