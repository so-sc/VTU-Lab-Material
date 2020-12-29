<html>
<head>
<title>Pattern Matching using python</title>
</head>
<body>
<?php
$res=shell_exec("python PythonServer/states.py");
$states=explode("\n",$res);	//in python print embed \n at the end
echo "Statement is : <b>$states[4]</b><br/>";
echo "Word that end with xas : <b>$states[0]</b><br/>";
echo "Word that Starts with k and end with s (Case Insensitive):<b>$states[1]</b><br/>";
echo "Word that Starts with M and end with s : <b>$states[2]</b><br/>"; 
echo "Word that end with a : <b>$states[3]</b>";
?>
</body>
</html>
