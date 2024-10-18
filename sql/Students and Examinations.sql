SELECT S.student_id, S.student_name, Suj.subject_name, count(E.subject_name) AS attended_exams
FROM Students AS S
JOIN Subjects AS Suj
LEFT JOIN Examinations AS E
ON S.student_id = E.student_id AND Suj.subject_name = E.subject_name
GROUP BY S.student_id, Suj.subject_name
ORDER BY student_id