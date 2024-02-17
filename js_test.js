// // (1)reverse string
// const reversString = (Name)=>{
//     let temp2 = [];
//     for(let i =Name.length-1; i!=-1 ; --i){
//        temp2 = temp2+Name[i]
//     }
//     Name = temp2
// console.log(Name);
// }
// // function call
// reversString("anurag")

// //  (2)find vowels
// const findVowells =(str)=>{
//     let temp =0
//     let temp3 = []
//     for(let i = 0 ; i< str.length; i++){

//         if ((str[i] == 'a')) {
//           temp3 =  temp3+'a';

//           temp++
   

//         }
//          else if ((str[i] == 'i')) {
//           temp3 = temp3 + "i";
//            temp++;
     
//         }
//          else if ((str[i] == 'e')) {
//           temp3 = temp3 + "e";
//            temp++;
//         }
//          else if ((str[i] == 'o')) {
//           temp3 = temp3 + "o";
//            temp++;
//         }
//          else if ((str[i] == 'u')) {
//          temp3 = temp3 + "u";
//            temp++;
//         }
//     }
//     console.log(temp3)

//     if(temp<1){
//         console.log("no vowels ")
//     }
// }
// // function call
// findVowells("gaurav")

// // (3) get full name

// const Getfullname = (fname , lname)=>{
//     const person = {
//         firstname : fname ,
//         lastname : lname
//     }
//     console.log(person.firstname+person.lastname)
// }
// // function call
// Getfullname("ashish" ,"yadav")

// // 4  palimdorom (ex = lol)

// const palimdorom=(string)=>{
//      let temp2 = [];
//      for (let i = string.length - 1; i != -1; --i) {
//        temp2 = temp2 + string[i];
//      }
//      if(temp2 == string){
//         console.log("palimdorom")
//      }
//      else{
//         console.log("not palimdorom");
//      }
// }
// // function call

// palimdorom("lol")

const arr1 = [10, 20, 30, 40, 50, 10, 60, 70, 80];
const temp = [];

for (let i = 0; i < arr1.length; i++) {
  for (let j = i; j < arr1.length; j++) {
    if (arr1[i] == arr1[j]) {
     
    }
  }
}

// console.log(temp);
