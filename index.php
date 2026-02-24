<!DOCTYPE html>
<html>
<head>
    <title>ESP32 Dashboard</title>
    <meta http-equiv="refresh" content="5">
</head>
<style>
    h1{
        color: blue;
        
    }
    h2{
        color:green;
    }
</style>
<body>

<center><h1>ESP32 Live Data</h1></center>

<?php
$file = "data.txt";

if(file_exists($file)){
    $data = file($file);
    $lastLine = $data[count($data)-1];

    $parts = explode(",", $lastLine);
    $temp = $parts[0];
    $hum = $parts[1];

    echo "<h2>Temperature: $temp °C</h2>";
    echo "<h2>Humidity: $hum %</h2>";
} else {
    echo "No data yet.";
}
?>

</body>
</html>
