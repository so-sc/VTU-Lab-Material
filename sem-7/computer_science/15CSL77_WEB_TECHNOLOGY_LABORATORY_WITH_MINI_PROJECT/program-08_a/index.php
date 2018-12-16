<html>
<!DOCTYPE html>
<html>
<head>
	<title>Result Page</title>
</head>
<body>
	<?php
		// $_POST is a super global array which here holds the values sent by the form in index.html
		$op1=$_POST['op1'];
		$op2=$_POST['op2'];
		$operator=$_POST['operator'];
		switch($operator)
		{
			case'+': $res=$op1+$op2;
					 break;
			case'-': $res=$op1-$op2;
				     break;
			case'*': $res=$op1*$op2;
				     break;
			case'/': if($op2==0)
				     {
						echo '<h1 align="center">Division by 0 error</h1>';
						exit(0);
					 }
			         $res=$op1/$op2;
				     break;
		}
	echo '<h1 align="center">Simple Calculator</h1>';
	echo '<h2 align="center">'.$op1.$operator.$op2.'='.$res.'</h2>';
	?>
</body>
</html>