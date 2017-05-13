#get the line which in a but b to c

cat b.txt|while read line
        
   do  
          
      cat a.txt|grep $line>>c.txt
       
   done
