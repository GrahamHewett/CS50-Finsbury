//Pset1 - Mario

function pyramid(height) {
    let spaces = height - 1;
    let bricks = 2;
    const gap = ' ';
    const brick = '#';

    for (i = 0; i < height; i++) {
        let row = gap.repeat(spaces).concat(brick.repeat(bricks));
        console.log(row);
        spaces--;
        bricks++;
    }
    };

 function init(){
    var input = prompt('Please enter your pyramid height');
    //parseInt(input);
    if(input >= 0 && input < 24) {
        pyramid(input);
    } else {
        init();
    }
}

init();