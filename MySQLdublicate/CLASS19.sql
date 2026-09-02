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

/*window func
window func text the n no of i/p row and provide the  equal no of o/p row it works row wise

-- windows funct are categories into 3 part
1.rank w f
2.values wf
3.agregate wf

.rank-- it consist ,
-1 rank func-- it provide s the rank on the basis of the clmn provider renader order by close

if the tie of the value text  place then its keep the coming rank values

2.dense-- when the tie of the value text place it doesn't skip the coming rank value
3.row number-- it provides the unique  identification to each other
4. ntile-- it divides the table into equal no of part which we describe under ntile()

.- value wf
1.first value-- whatever  the 1st value we see on the defined clmn it shows it continously it show 1st valu on clmn
2.last value: the last value clmn provides the last value which it has seen now
3.lead -- it shows the coming value of the defined clmn
4.lag -- it show sthe last values of the defined clmn

.windows aggregate func--
1.sum func- it prvides the rolling sum
2.max func- it provides the max value but companing this max values row by
3.min
4.count-
5.avg-

suppose if i  want to see the rank on the basis of rank see i have to group the value then definded values*/

select *, rank() over(partition by  department order by salary desc) as ranks from employees;
select *  from employees where salary>60000; 
/*
sdo-- are createed by the  to eaimaproves by the aworkaing ,operation wheerr system data by objeact are create d by user to hel[p it aperforming by task

- database obj also known as user defined obj 
its example
view ,index strew ,triggered ,funct

data by obj 2 types ...
1.data base obj
2.table level obj
*/

  /*-- views 
  it is database obj which is helpful to create the virtual table from a sql table it does not store the data physicallly it just stores the sql queery statment
  when  we select from a view it fetches data from a original table
  
  -a view is virtual table created from one or more table 
  
  imp point:
  1.doesnot store data 
  2.it updated table from base table
  3.use for security(high some clmn)
  4.use to simplify some querry
  5.it is use to store reusable select querry
  
  types
  1.simple views -- created form 1 table
  exple-ther no use by group by ,only  single table use thre are no func
  
  2.functn view
  created by multiple table
  can use jooin,group by ,func
  
  -- diffrent b/w tables and views
  table store the data  physically while view store on querry and shows the data virtually.
  
  -- now we want to create first_view*/
create view first_view as select *  from employees where salary>60000;
select *from first_view;
select *from first_view where salary > 75000;

create view second_view as select emp_id,salary  from employees where salary>60000; 
select *from second_view; 
 
 
 /* index--
now  i am gone a create the index on salary clmn thorugh the employees table*/
create index salary_index on employees(salary);
-- now i want to drop the salary index
drop index salary_index on employees;
-- now i want to see the indexes in the employee table
show indexes from employees;

/* indexes
system created indxes like pri and unique key can't be drop directory 
we must drop the constraints 1st which automatically remove the  index

-- if we create idx in clmn the database store the clmn value along with their locations so when we search using that clmn the database directly goes to the required row 
instead of require whole table

main raeasion why create the idx is not always preferred 

1.when we insert update,delete the data must be update the table and in the idx also so its slows down the insert ,update,or delete operation
2.it uses the extra stoerages space
3.not useful for small table
database can scan quickly without indexes
4.to many idxes reduce over all performence 

idxes improves select perfromeance but it can slow down the insert,upodate or delete operation because idxes also need to maintain
when idxes is preffered
for larger table
clmn frequently used in where clause
clmn used in forgien key

idxes can be categories based on their internal structure
2 types
1.btree idxes (most common)
2.hash idx

btree idxes balanced table idx that enable fast searchin in logrithmic time


idxes can be categories based on storage
1.clustured idxes
2.non clustured idxes

and idx can be created  on 1 or mmore in the table when ana 
idx invoves multiple clmn its called composite key
-- they are frequently used when querry involve multiple clmn together

-- composite idx*/
create index composite_index  on employees(salary,department);
desc employees;

    