#this is the first test
ls /home|grep stu>IDfile      #��homeĿ¼��ȡѡ�������ŵ��ļ�IDfile
echo "please input the file you want to count"    #��ʾ��Ϣ       
read a b c d e               #�Ӽ��������ò�����ҵ��ļ���
cat $a $b $c $d $e>file      #�������ļ����ݽ��кϲ��ŵ�file�ļ�
cat IDfile|while read line   #���ж�ȡID�ļ���ȡѧ�ţ�δ����ĩ�о�ѭ��
     do
        echo -n $line
        echo -n ":"
        echo `cat file|grep $line|wc -l`  #��ѧ��ͳ��ĳ��ѧ������ʵ��εĴ���
   done
