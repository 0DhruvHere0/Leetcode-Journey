SELECT Employee.name, Bonus.bonus from Employee
    LEFT JOIN Bonus on Employee.empId= Bonus.empId
    WHERE bonus<1000 or bonus IS NULL