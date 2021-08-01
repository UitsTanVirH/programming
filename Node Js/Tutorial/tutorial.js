const sum=(num1, num2)=>num1+num2;
const PI=3.1416;
class MathObject{
    constructor(){
        console.log('object created');
    }
}
module.exports = {sum:sum, PI:PI, MathObject:MathObject};