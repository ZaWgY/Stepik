#!/usr/bin/perl
$x = 10;
$y = 10;
$z = 10;
my $max;
my $min;
if ($x >= $y && $x >= $z){ $max = $x; }
elsif ($y >= $x && $y >= $z){ $max = $y; }
elsif ($z >= $x && $z >= $y){ $max = $z; }

if ($x <= $y && $x <= $z){ $min = $x; }
elsif ($y <= $x && $y <= $z){ $min = $y; }
elsif ($z <= $x && $z <= $y){ $min = $z; }

print "$min, $max\n"