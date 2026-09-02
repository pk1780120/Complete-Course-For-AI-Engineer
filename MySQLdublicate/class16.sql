-- Create Tables
create database Setoperator;
USE Setoperator;
CREATE TABLE students (
    id INT,
    name VARCHAR(50)
);

CREATE TABLE employees (
    id INT,
    name VARCHAR(50)
);

-- Insert Data into students
INSERT INTO students VALUES
(1, 'Amit'),
(2, 'Neha'),
(3, 'Rahul'),
(4, 'Priya');

-- Insert Data into employees
INSERT INTO employees VALUES
(3, 'Rahul'),
(4, 'Priya'),
(5, 'Sohan'),
(6, 'Riya');

-- UNION Example (Removes Duplicates)
SELECT id, name FROM students
UNION
SELECT id, name FROM employees;

-- UNION ALL Example (Keeps Duplicates)
SELECT id, name FROM students
UNION ALL
SELECT id, name FROM employees;

SELECT id, name FROM students
INTERSECT 
SELECT id, name FROM employees;

SELECT id, name FROM students
EXCEPT
SELECT id, name FROM employees;

/* WHEN WE ARE TO PERFORM THE MERGE OPERATION B/W THE TABLE THAT TIME USING JOINS

BUT WHEN COMES TO PERFORM THE APPEWND OPERATION THAT TIME WE USE SET OPERATOR LIKE UNION ,UNION ALL

1.UNION(IT APPENDS THE 2 TABLE BUT REMOVES THE DUBLICATE VALUES
 CONDN TO PERFORM APPEND 
 1.BOTH THE TABLE MUST CONTAIN SAME NO. OF CLMN
 2. THE DATA TYPE OF EACH MATCHING CLMN OR LOGIC MUST BE SAME
 3.CLMN HEADER NEED NOT BE SAME
 
 
 2.UNIONALL(IT ALSO APPENDS THE 2 TABLE BUT KEEPING THE DUBLICATE)
 
 3.INTERSECT(IT PROVIDE THE COMMON PART B/W THE 2 PARTS OF THE TABLE
 
 WORKS LIKE A INNER JOIN)
 
 4.EXCEPT(IT PROVIDES THE DATA OF 1ST TABLE BUT REMOVING THE DATA OF THE 1ST TABLE WHICH IS SAME OR EXIST IN 2ND TABLE ALSO)*/
 
 -- NOW OUR TASK IS TO PERFORM THE 2 OUTER JOIN B/W CATEGORY AND PRODUCAT TABLE
use setoperator;
select *from students as s left join employees as e on e.id = s.id
union all
select *from employees as e right join students as s on e.id = s.id;


