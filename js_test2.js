// wap to add element in the array , if element already exist , than remove that element first & then add
// wap to check particular string is present in the array or not if not present than add that element in  array

// make a movie filter program , where we can filter by rating , star popular , actor , songs ,


const arr1 = [10,20,30,40,50,60,70,80 ]


let  element =10
let indexno = arr1.indexOf(element)
 
if (arr1.includes(element)){
    arr1.splice(indexno , 1)
    arr1.push(element)
   
}
console.log(arr1);

// 2nd solve

const arr2 = ["apple" , "hp" , "lenovo" , "dell"]
let element2 = "Apple";

if (arr2.includes(element2.toLocaleLowerCase())) {
  console.log("Element present")
}
else{
    arr2.push(element2)
    console.log("element add")
}
console.log(arr2)

// third

const movie = [
  {
    Name: "3 idiotes",
    rating: 5,
    popular: "yes",
    acotor: "amir khan",
    song: "good",
  },
  {
    Name: "ddlg",
    rating: 4,
    popular: "yes",
    acotor: "sahruk khan",
    song: "good",
  },
  {
    Name: "dunki",
    rating: 2,
    popular: "no",
    acotor: "sahruk khan",
    song: "bakwash",
  },
];

let searchByactor = "sahruk khan"
let searchBySong = "good"
let searchByrating = 5
let searchByName = "DDLG"
let searchByPopular = "yes"

console.log("~~~~~~~~~~~~~~~~~~~~~~Search by actor~~~~~~~~~~~~~~~~~~~~~~");
console.log( movie.filter((e)=>e.acotor==searchByactor.toLocaleLowerCase()))
console.log("~~~~~~~~~~~~~~~~~~~~~~Search by name~~~~~~~~~~~~~~~~~~~~~~");
console.log( movie.filter((e)=>e.Name==searchByName.toLocaleLowerCase()))
console.log("~~~~~~~~~~~~~~~~~~~~~~Search by popular~~~~~~~~~~~~~~~~~~~~~~");
console.log( movie.filter((e)=>e.popular==searchByPopular.toLocaleLowerCase()))
console.log("~~~~~~~~~~~~~~~~~~~~~~Search by song~~~~~~~~~~~~~~~~~~~~~~");
console.log( movie.filter((e)=>e.song==searchBySong.toLocaleLowerCase()))
console.log("~~~~~~~~~~~~~~~~~~~~~~Search by Rating~~~~~~~~~~~~~~~~~~~~~~")
console.log( movie.filter((e)=>e.rating>3))




