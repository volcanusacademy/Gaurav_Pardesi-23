let body = document.querySelector("body")
let btndark = document.querySelector("#dark")
let count = 1

const darkMode=()=>{
    count++
    if(count%2==0){
        body.style.backgroundColor="black"
        body.style.color="white"
        btndark.innerHTML="Light mode"
        btndark.style.backgroundColor="white"
        btndark.style.color="black"

    }
    else{
         body.style.backgroundColor = "white";
         body.style.color = "black";
         btndark.innerHTML = "dark mode";
         btndark.style.backgroundColor = "black";
         btndark.style.color = "white";
    }
}
btndark.addEventListener("click",darkMode)

// 2 question

let img = document.querySelector(".container")

const move=()=>{
    // img.style.position="relative"
// 
    // img.style.left="700px"
    // img.style.transform = "translate(45deg);";
   
    img.style.width="1200px"
     img.style.transition = "5s";


    }
document.querySelector("#superman").addEventListener("click" ,move)


// 3rd question

let input1 = document.querySelector("#in1")
let input2 = document.querySelector("#in2")
let result = document.querySelector("#result")

console.log(input1.value)


const addnum=()=>{
    let results = parseInt (input1.value)+parseInt(input2.value)
    console.log(result)

    result.innerHTML=results

}
document.querySelector("#add").addEventListener("click" , addnum)

// sub

const sub = () => {
  let results = parseInt(input1.value)-parseInt(input2.value);
  console.log(result);

  result.innerHTML = results;
};
document.querySelector("#sub").addEventListener("click", sub);

// mul

const mul = () => {
  let results = parseInt(input1.value) * parseInt(input2.value);
  console.log(result);

  result.innerHTML = results;
};
document.querySelector("#mul").addEventListener("click", mul);

// divi
const divi = () => {
  let results = parseInt(input1.value) / parseInt(input2.value);
  console.log(result);

  result.innerHTML = results;
};
document.querySelector("#divi").addEventListener("click", divi);