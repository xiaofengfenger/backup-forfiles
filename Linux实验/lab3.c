#this is the first test
ls /home|grep stu>IDfile      #从home目录获取选课名单放到文件IDfile
echo "please input the file you want to count"    #提示信息       
read a b c d e               #从键盘输入获得参与查找的文件名
cat $a $b $c $d $e>file      #将几个文件内容进行合并放到file文件
cat IDfile|while read line   #按行读取ID文件获取学号，未读到末行就循环
     do
        echo -n $line
        echo -n ":"
        echo `cat file|grep $line|wc -l`  #按学号统计某个学生参与实验课的次数
   done
