#!/usr/bin/perl
use Math::Complex;

$a_value = -2;
$b_value = 0;
$c_value = 128;

my $d;
my $x1;
my $x2;
my $x3;

if($a_value == 0){
	print "1No solution!\n";
} else {
	$d =  -1 * (-4 * $a_value * $c_value) + $b_value**2;
	print "$d\n";
	if ($d > 0) {
		$x1 = (-1 * $b_value + sqrt($d)) / (2 * $a_value);
		$x2 = (-1 * $b_value - sqrt($d)) / (2 * $a_value);
		if($x1 >=  $x2) {
			print "$x2, $x1\n"
			}  else {
			print "$x1, $x2\n"
			}
	} elsif ($d == 0) {
		$x1 = (-1 * $b_value) / (2 * $a_value);
		print "$x1\n";
	} else {
		print "2No solution!\n";
	}
}