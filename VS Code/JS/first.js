console.log("Enternal File :"); 
let a = 10;
{
    let b = 20;
    console.log(a); // Outputs: 10
    console.log(b); // Outputs: 20
}
console.log(a); // Outputs: 10
console.log(b); // Outputs: ReferenceError: b is not defined