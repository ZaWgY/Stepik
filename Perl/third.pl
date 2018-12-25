#!/usr/bin/perl

my $x = 1;
my $y = 10;
my $k = 0;
my $kringe;
while($x <= $y) {
    for(my $i = 2;$i<$x;$i++){
        $kringe = $x % $i;
        if ($kringe == 0){
            $k++;
        }
    }
    if($k == 0 && $x != 1){
            print "$x ";
            $k = 0;
        } else {
            $k = 0;
        }
    $x++;
}