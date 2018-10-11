|PART ONE|
|--------|

```
If mathematics is easy, then the homework is done, and if it is sunny, then camping is fun.

(S ^ H) -> (M V C) 
```
|PART TWO|
|--------|

| A | B | ¬A | ¬B | ¬B -> ¬A | ¬B -> A | ((¬B -> A) -> B
|---|---|--- |--- | -------- | ------- | ---------------
| T | T | F  | F  | T        | T       | T
| T | F | F  | T  | F        | T       | F
| F | T | T  | F  | T        | T       | T
| F | F | T  | T  | T        | F       | T

```NEITHER```

| A | B | ¬A | A -> B | B -> ¬A | ((A -> B)^(B -> ¬A)) -> A
|---|---|--- | ------ | ------- | -----------------------
| T | T | F  | T      | F       | T
| T | F | F  | F      | T       | T
| F | T | T  | T      | T       | F
| F | F | T  | T      | T       | F

```NEITHER```

|PART THREE|
|----------|

```
(p ^ q) -> r, p -> (q -> r)
(p ^ q)' v r, p' v (q' v r) *IMPLICATION x3*
p' v q' v r, p' v r v q'        *De Morgan's Law*
*Done*

(q v r ) → p, (q → p)∧(r → p)
(q v r)' v p, (q' v p) ^ (r' v p) *IMPLICATION x3*
(q' ^ r') v p, (q' v p) ^ (r' v p)    *De Morgan's Law*
(p v q') ^ (p v r'), (q' v p) ^ (r' v p)  *DISTRIBUTIVE*
*Done*

|PART FOUR|
|---------|

```
For some cities, all travelers love the city, but nobody who lives in the city loves it.
∀y∀x(Traveler(y)^City(x)^Lives(y, x)) -> ¬Loves(y, x)
```

|EXTRA CREDIT|
|------------|
