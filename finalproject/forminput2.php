<!DOCTYPE html>
<html>
  <head>
    <title>Secret Number: Binary Searches</title>
  </head>


  <body>

    <h1>Guess a Number</h1>
    <p>User Guessing Game</p>

    <?php
       // define variables and set to empty values
       $arg1 = $result = "";

       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $arg1 = test_input($_POST["arg1"]);
         $result = system( "/usr/lib/cgi-bin/pi/argtest1 " . $arg1 .); 
       }

       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      Arg1: <input type="text" name="arg1"><br>
      <input type="submit">
    </form>

    <?php
       echo "<h2>Your Input:</h2>";
       echo $arg1;
       echo "<br>";
       
       echo "<h2>Calling C program</h2>";
       echo $result;
       
     ?>
    
	<p>Computer Guessing Game</p>

	<?php
	$arg1 = $result ="";
 if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $arg1 = test_input($_POST["arg1"]);
         $result = system( "/usr/lib/cgi-bin/pi/argtest1 " . $arg1 . " " .); 
       }

       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      Arg1: <input type="text" name="arg1"><br>
      <input type="submit">
    </form>

    <?php
       echo "<h2>Your Input:</h2>";
       echo $arg1;
       echo "<br>";
       
       echo "<h2>Calling C program</h2>";
       echo $result;
       
     ?>

  </body>
</html>
