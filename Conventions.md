# Coding Conventions

`typedef` Declarations must always end with `_t` to signify a custom type.
```c
// Correct
typedef int myType_t;

// Incorrect
typedef int myType;
```

## Hungarian Notation
Syntax for variable names is as follows:  
```
[prefix]X[Y][suffix]
```
Where `prefix` is an optional string of lowercase characters signifying the type or purpose of the variable, `X` is the variable name, `Y` is an optional secondary name, and `suffix` is an optional string of Capitalized CamelCase words or letters signifying the purpose of the variable.

* Types
  * `eX` -  `X` is an error code
  * `fX` -  `X` is a flag
  * `gX` -  `X` is a global variable or state (not used when `f`, `k`, or `m` is used)
  * `kX` -  `X` is a constant value
  * `mX` -  `X` is a macro (constant or function)
  * `tX` -  `X` is a string (not an array, necessarily)

```c
// An enum representing an error and no error
enum {
  eNone,
  eGeneric,
}

// A collection of flags (f), representing a list of active tasks in this case
uint32_t fTasks;

// A global (g) counter (c), representing the total number of tasks in this case
int gcTasks;

// A contant (k) value, representing the maximum number of tasks
const int kMaxTasks = 12;

// A macro (m) constant, also representing the maximum number of tasks
#define mMaxTasks = 12

// A macro (m) function, getting if there are any tasks left
#define mAreTasksLeft() (fTasks != 0)
```

* Purposes
  * `pX` -  pointer to `X`
  * `dX` -  delta `X`
  * `uX` - `X` is unsafe (needs to be processed somehow)
  * `sX` - `X` is safe (no longer needs to be processed)
  * `hX` - `X` is stored in (hard) flash memory (like certain strings)
  * `cX` -  integer representing count/number of `X`'s (like length of an array or list)
  * `iX` -  integer index of the array `aX`
  * `aX` -  array of `X`'s indexed by the number `iX` (read as "array of `X`'s'")
  * `lXY` - list of `X`'s indexed by `Y`'s' (read as "list of `X`'s mapped by `Y`'s")
  * `XFirst` -  the first `X` in a set
  * `XLast` -  the last `X` in a set
  * `XMax` or `MaxX` -  the maximum possible `X`
  * `XMin` or `MinX` -  the minimum possible `X`
  * `XNil` -  a distinguished Nil value for X's
  * `XT` -  `X` is temporary
  * `XP` -  previous instance of `X`

```c
// Boolean indicating if something exists (e)
bool eSomething;

// Pointer (p) to the above boolean
bool *peSomething = &eSomething;

// Delta (d) X in some equation
float dX;

// I have no example for a safe (s) or unsafe (u) variable, but I'm sure something will come up using it

// A string stored in (hard (h)) flash, which means the string itself cannot be modified directly
char *hEString = "EString";

// A count (c) of items in an array (also, this line should be below the next to compile properly)
int cSomethings = sizeof(aSomethings);

// An array indexer (i) for aSomethings
int iSomethings = 0;

// An array (a) of Somethings
something_t aSomethings[4];

// There is not yet any code which implements a dictionary/list (l)s
```

* Custom
  * `XFL` -  front left
  * `XFR` -  front right
  * `XBL` -  back left
  * `XBR` -  back right
  * `XA` -  boolean representing if `X` is automatic
  * `XB` -  rising and/or falling edge button (triggers action on press or release events)
