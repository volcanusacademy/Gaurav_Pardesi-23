let arr = [2, , 2 , 2 , 2 , 2, , 2 , 2 , 2,2, 3, 3, 3, ,3 , 3 , 3  ,4, 5, 5, 5, 5];

let largestNum = 0;
let temp=0
let Second =0 ;
// let mostrepeat
for (let i = 0 ; i<arr.length ; i++){
    let count = 0;
   for(let j = i+1 ; j<arr.length ; j++){
    if(arr[i]==arr[j]){
        count++
        Second=arr[i]
        if(temp<count){
            temp = count
            largestNum = arr[i];

        }
    }

   }
}
console.log("most repeated number is",largestNum);



// q2
let Name = "lol"
let temp3 =[]

for (let i =Name.length-1 ; i!=-1 ; i--){
    
    temp3+=Name[i]
}
if(Name==temp3){
    console.log("this string is palidrom")
}
else{
     console.log("this string is not palidrom");
}




// q 3

let arr2 = [1,5,6,9,7,8,9,3,4,2,3,4]

for (let i=0 ; i<arr2.length ; i++){
    for(let j = i+1 ; j<arr2.length;j++){
        if(arr2[i]>arr2[j]){
           let  temp2 = arr2[i]
           arr2[i]=arr2[j]
           arr2[j]=temp2

        }

    }
}
console.log(arr2)

// q4

let arr3 = [1,9 ,4 , 6 , 20]

for (let i = 0; i < arr3.length; i++) {
  for (let j = i + 1; j < arr3.length; j++) {
    if (arr3[i] > arr3[j]) {
      let temp3 = arr3[i];
      arr3[i] = arr3[j];
      arr3[j] = temp3;}
    }
  }
  console.log("second largest element is " ,arr3[arr3.length-2])


//   q5

let Names = "Superma"
let temp4 = [] 

for (let i = Names.length-1 ; i!=-1 ; i--){
    temp4+=Names[i]  
}
Names = temp4
console.log(Names) 



