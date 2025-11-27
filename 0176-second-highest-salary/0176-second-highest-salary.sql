# Write your MySQL query statement below
select MAX(salary) as secondHighestSalary from Employee where salary < (select MAX(salary) from Employee);