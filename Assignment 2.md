//Prove: p -> q <=> q' -> p'
//One: p -> q to p' v q           *Implication*
  p' v q <=> q' -> p'       
Two: q' -> p' to q'' v p'       *Implication*
  p' v q <=> q'' v p' 
Three: q'' v p' to q v p'       *Double negation*
  p' v q <=> q v p'             *Done*

Prove: (p -> r) ^ (q -> r) <=> (p v q) -> r
One: (p -> r) TO (p' v r)                     *Implication*
Two: (q -> r) TO (q' v r)                     *Implication*
(p v q) -> r TO (p v q)' v r                  *Implication*
  (p' v r) ^ (q' v r) <=> (p v q)' v r
Three: (p' v r) ^ (q' v r) TO (p' v q') ^ r   *Distributive*
(p' v q') ^ r <=> (p v q)' v r
Four: (p' v q') ^ r TO (p v q)' ^ r           *De Morgan's Law*
(p v q)' ^ r <=> (p v q)' v r                 *Done*

Prove This is Invalid: (Ǝx)A(x) ^ (Ǝx)B(x) -> (Ǝx)(A(x) ^ B(x))
  x = people.
  A(x) = eat junk food
  B(x) = drink energy drinks 
Saying all the people who eat junk food, (Ǝx)A(x), and all the people who drink energy
drinks, (Ǝx)B(x), all eat AND drink energy drinks, (Ǝx)(A(x) ^ B(x)), is wrong.  Because
someone can drink energy drinks but not eat junk food, and vice versa.
