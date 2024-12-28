const arr=[2,2,2,2,,3,4,3,43,4];
const newarr=[...new Set(arr)]
console.log(newarr)
const arry=[2,3,4,22,33,4,3,4]
let count=0
const newarry=arry.filter((value,index)=>{
  if(index==arry.indexOf(value)){
   count++;
  }

})
console.log(count)
console.log(newarry)