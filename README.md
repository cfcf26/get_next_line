# get_next_line

The score is 125%.
스코어는 125% 입니다.

Mandatory part and Bonus part have the same code.
  멘덴토리와 보너스는 동일한 코드입니다.

This code has been implemented as a linked list.
  해당 코드는 연결리스트로 구현하였습니다
  
--------------------

>1. Locate the node with the fd value in the head list and separate it.
> >fd값이 있는 node를 head list에서 찾아 분리합니다.

>2. Find newline in str of the node you found.
> >찾은 node의 str에서 newline을 찾습니다.

>3. If there is no new line, read it to create a new_node,
   attach it to the front of the existing node, and then run 2.
   if Then find the new line or EOF, run 4.
> >new line이 없을 경우 read하여 새로운 new_node를 만들고
   기존의 node의 앞에 이어붙인 후 2.를 다시 실행합니다. 그리고 new line을 찾거나 EOF이면 4.를 실행합니다.

>4. Save the value after the new line to the new_node and connect it to the head list.
> >new line 이후의 값을 new_node에 저장하고 head list의 앞에 이어줍니다.

>5. Get a node list, complete it with one stirng, and return it.
> >node list를 가져와 하나의 문장으로 완성하고 리턴합니다.
