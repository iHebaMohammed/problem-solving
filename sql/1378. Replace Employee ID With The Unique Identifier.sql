SELECT EU.unique_id , E.name
FROM Employees AS E
LEFT JOIN EmployeeUNI AS EU
ON E.id = EU.id