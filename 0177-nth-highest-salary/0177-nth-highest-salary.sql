CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
    SELECT DISTINCT a.salary
    FROM Employee a
    WHERE (
        SELECT COUNT(DISTINCT b.salary)
        FROM Employee b
        WHERE b.salary > a.salary
    ) = N - 1
    LIMIT 1
  );
END
