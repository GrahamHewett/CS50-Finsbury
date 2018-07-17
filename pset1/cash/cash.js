function cash(change) {
    let coins = 0;
    let changeOwed = change * 100;
    while(changeOwed >= 25){
        changeOwed = changeOwed-25;
        coins++;
    }
    while(changeOwed >= 10){
        changeOwed = changeOwed-10;
        coins++;
    }
    while(changeOwed >= 5){
        changeOwed = changeOwed-5;
        coins++;
    }
    console.log(changeOwed);
    while(changeOwed >= 1){
        changeOwed = changeOwed-1;
        coins++;
    }
    console.log(`Number of coins needed to give change is ${coins}`);
}

cash(4.2);

