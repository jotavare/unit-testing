## ABOUT

## BOOK REFERENCES

| Book | Author |
| :--- | :----- |
| Working Effectively with Legacy Code (Pearson, 2004) | `Michael Feathers` |
| The Complete Guide to Software Testing (Wiley, 1988) | `Bill Hetzel` |
| XUnit Test Patterns (Addison-Wesley Professional, 2007) | `Gerard Meszaros` |
| Unit Testing Principles, Practices, and Patterns | `Vladimir Khorikov` |
| Test-Driven Development: By Example (Addison-Wesley Professional, 2002) | `Kent Beck` |
| Growing Object-Oriented Software, Guided by Tests (Addison-Wesley Professional, 2009) | `Steve Freeman` and `Nat Pryce` |
| Clean Code (Pearson, 2008) | `Robert C. Martin` |

## WEBSITE REFERENCES

| Link | Source |
| :--- | :----- |
| [Command Query Separation](https://martinfowler.com/bliki/CommandQuerySeparation.html) | `Website` |
| [XUnit Test Patterns](https://xunitpatterns.com) | `Website` |
| [Node.js’s assert module](https://nodejs.org/api/assert.html) | `Website` |
https://google.github.io/googletest/primer.html
https://google.github.io/googletest/reference/assertions.html
https://github.com/microsoft/vscode-remote-try-cpp


## VIDEO REFERENCES

https://youtu.be/pxJoVRfpRPE?si=-A3eVD9pUFIryHTY
https://www.youtube.com/watch?v=UH6F6ypdYbw

## UNIT TEST CHECKLIST (organize)

A good unit test should also exhibit the following properties:

- [ ] It should be easy to understand the intent of the test author.
- [ ] It should be easy to read and write.
- [ ] It should be automated.
- [ ] It should be consistent in its results (it should always return the same result if you don’t change anything between runs).
- [ ] It should be useful and provide actionable results.
- [ ] Anyone should be able to run it with the push of a button.
- [ ] When it fails, it should be easy to detect what was expected and determine how to pinpoint the problem.
- [ ] It should run quickly.
- [ ] It should have full control of the code under test (more on that in chapter 3).
- [ ] It should be fully isolated (run independently of other tests).
- [ ] It should run in memory without requiring system files, networks, or databases.
- [ ] It should be as synchronous and linear as possible when that makes sense (no parallel threads if we can help it).

A unit test checklist

Many people confuse the act of testing their software with the concept of a unit test. To start off, ask yourself the following questions about the tests you’ve written and executed up to now:

- [ ] Can I run and get results from a test I wrote two weeks or months or years ago?
- [ ] Can any member of my team run and get results from tests I wrote two months ago?
- [ ] Can I run all the tests I’ve written in no more than a few minutes?
- [ ] Can I run all the tests I’ve written at the push of a button?
- [ ] Can I write a basic test in no more than a few minutes?
- [ ] Do my tests pass when there are bugs in another team’s code?
- [ ] Do my tests show the same results when run on different machines or environments?
- [ ] Do my tests stop working if there’s no database, network, or deployment?
- [ ] If I delete, move, or change one test, do other tests remain unaffected?

We can recognize three main criteria in the previous questions and answers:

    Readability—If we can’t read it, then it’s hard to maintain, hard to debug, and hard to know what’s wrong.
    Maintainability—If maintaining the test or production code is painful because of the tests, our lives will become a living nightmare.
    Trust—If we don’t trust the results of our tests when they fail, we’ll start manually testing again, losing all the time benefit the tests are supposed to provide. If we don’t trust the tests when they pass, we’ll start debugging more, again losing any time benefit.

A unit test is an automated piece of code that invokes the unit of work through an entry point and then checks one of its exit points. A unit test is almost always written using a unit testing framework. It can be written easily and runs quickly. It’s trustworthy, readable, and maintainable. It is consistent as long as the production code we control has not changed.

A good unit test has these qualities:

    It should run quickly.
    It should have full control of the code under test.
    It should be fully isolated (it should run independently of other tests).
    It should run in memory without requiring filesystem files, networks, or databases.
    It should be as synchronous and linear as possible (no parallel threads).

Entry points are public functions that are the doorways into our units of work and trigger the underlying logic. Exit points are the places you can inspect with your test. They represent the effects of the units of work.
An exit point can be a return value, a change of state, or a call to a third-party dependency. Each exit point usually requires a separate test, and each type of exit point requires a different testing technique.
A unit of work is the sum of actions that take place between the invocation of an entry point up until a noticeable end result through one or more exit points. A unit of work can span a function, a module, or multiple modules.
Integration testing is just unit testing with some or all of the dependencies being real and residing outside of the current execution process. Conversely, unit testing is like integration testing, but with all of the dependencies in memory (both real and fake), and we have control over their behavior in the test.
The most important attributes of any test are readability, maintainability, and trust. Readability tells us how easy it is to read and understand the test. Maintainability is the measure of how painful it is to maintain the test code. Without trust, it’s harder to introduce important changes (such as refactoring) in a codebase, which leads to code deterioration.
Test-driven development (TDD) is a technique that advocates for writing tests before the production code. This approach is also referred to as a test-first approach (as opposed to code-first).
The main benefit of TDD is verifying the correctness of your tests. Seeing your tests fail before writing production code ensures that these same tests would fail if the functionality they cover stops working properly.

## TO ORGANIZE

UNIT TEST
Kent Beck introduced the concept of unit testing in Smalltalk, unit testing
SUT
ENTRY POINT
EXIT POINT
WAIT TIME IN MAKEFILE PARELLEL
DRAW A DIAGRAM
CI/CD PIPELINE
TEST WITH FRAMEWORKS AND WITHOUT
FAILURE POINTS
TDD UNIT TEST

Unit testing frameworks such as Jest can provide even more generic helper methods like this

A regression is broken functionality—code that used to work. You can also think of it as one or more units of work that once worked and now don’t.
Good tests can be accessed and run by anyone.

e possivel adicionar google test como fetch no cmake

## COMMANDS

code --list-extensions | xargs -L 1 echo code --install-extension
# cmake -S . # compile source folders
# -B build # output to build folder
# tree -L 3 # show folder structure
# cmake --build build -j 12 # compile with 12 threads
cmake -S . -B build -D FOO="cmd_value"


comprei arduino
universidade
create a pipline