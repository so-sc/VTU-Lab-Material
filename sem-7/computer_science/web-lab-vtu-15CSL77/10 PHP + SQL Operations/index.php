<?php 

    $host = 'localhost';
    $username = 'root';
    $password = 'root';
    $dbname = 'weblab';

    $conn = mysqli_connect($host, $username, $password, $dbname) or die ("Unable to connect to database");

    $sql = 'select * from students';
    $result = $conn->query($sql);
    $students = array();

    if ($result->num_rows > 0) {
        for ($i = 0; $i < $result->num_rows; $i++) {
            if ($row = $result->fetch_assoc()) {
                $students[$i]['name'] = $row['name'];
                $students[$i]['usn'] = $row['usn'];
                $students[$i]['year'] = $row['year'];
                $students[$i]['college'] = $row['college'];
            }
        }
    }

    if (isset($_GET['sort'])) {
        $key = $_GET['key'];
        for ($i = 0; $i < count($students)-1; $i++) {
            $min = $i;
            for ($j = $i+1; $j < count($students); $j++) {
                if ($students[$i][$key] < $students[$j][$key]) {
                    // swap the two rows
                    $temp = $students[$i];
                    $students[$i] = $students[$j];
                    $students[$j] = $temp;
                }
            }
        }
    }
?>

<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <title>10 Student Details</title>
    <style>
        body {
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;
        }
        table {
            margin-top: 20px;
            border-collapse: collapse;
            border: 1px solid #000000;
        }
        th, td {
            padding: 10px;
            border: 1px solid #000000;
        }
    </style>
</head>
<body>
    <h1>Student Details</h1>
    <form action="" method="GET">
        <label for="keys">Sort By: </label>
        <select name="key" id="keys">
            <option value="name">Name</option>
            <option value="usn">USN</option>
            <option value="year">Year</option>
            <option value="college">College</option>
        </select>
        <input type="submit" name="sort" id="sort" value="SORT">
    </form>
    <table>
        <thead>
            <th>Name</th>
            <th>USN</th>
            <th>Year</th>
            <th>College</th>
        </thead>
        <tbody>
            <?php
                foreach ($students as $student) {
                    echo "<tr>";
                    echo "<td>".$student['name']."</td>";
                    echo "<td>".$student['usn']."</td>";
                    echo "<td>".$student['year']."</td>";
                    echo "<td>".$student['college']."</td>";
                    echo "</tr>";
                }
            ?>
        </tbody>
    </table>
</body>
</html>