## ABOUT

This project involves creating and testing a function called `hasPair()` using modern `C++` practices. It required learning `CMake`, and using `GoogleTest` for unit testing. The project setup utilizes a devcontainer for `C++`, and `Node.js` for chapter exercises from `The Art of Unit Testing` (`aout3-samples/`).

## PROJECT CHECKLIST

- [X] [Introduction to unit testing.](https://livebook.manning.com/book/the-art-of-unit-testing-third-edition)
- [X] Implement the function `hasPair()`.
- [X] Use Google Test, for unit testing the code.
- [X] Remember to comment the code where necessary.
- [X] Publish the code on GitHub and send the link.
- [X] **Bonus**: Set up the project with `CMake`.

## PROJECT STRUCTURE

The current folder structure of the project and explanation of each folder and file:

```bash
├── .devcontainer/
│   ├── cpp/
│   │   ├── devcontainer.json   # devcontainer configuration file
│   │   ├── Dockerfile          # Dockerfile for setting up devcontainer
│   │   ├── post-create.sh      # script to run after creating the devcontainer
│   │   └── reinstall-cmake.sh  # script to reinstall cmake
│   ├── node/
│   │   └── devcontainer.json   # devcontainer configuration file for aout3-samples
├── aout3-samples/              # sample exercises from "The Art of Unit Testing" book
├── cmake-tutorial/             # small tutorial i did to learn cmake
├── exercise/
│   ├── cmake/                  # includes a cmake update submodules file
│   ├── example/                # cmake example i did to learn cmake and a makefile example
│   ├── googletest/             # source code of googletest
│   ├── hasPair/                # the main exercise, hasPair function and tests
│   └── CMakeLists.txt          # main cmake configuration file
├── .gitignore
├── .gitmodules
├── LICENSE
└── README.md
```

## COMMANDS

List of commands that I learned while doing this project:

```bash
# generate build system files in the 'build' directory
# use --trace to show the commands being executed
cmake -S . -B build
cmake -S . -B build --trace

# build the project using the generated build system files
# use [n] (threads) to build or $(nproc --all) to use all threads
# use --verbose to show the commands being executed
cmake --build build -j [n]
cmake --build build -j [n] --verbose
cmake --build build -j $(nproc --all)

# run the tests with coloured output and show output on failure
GTEST_COLOR=1 ctest --test-dir build --output-on-failure

# measure the time
time ccmake -S . -B build

# measure the time
time cmake --build build

# display the directory structure up to [n] levels deep
tree -L [n]

# list all installed vs Code extensions
code --list-extensions | xargs -L 1 echo code --install-extension
```

## FUTURE IDEAS

These are some ideas or improvements that I would make in the future:

- [ ] Design a flow diagram of the project and the unit tests.
- [ ] Create a CI/CD pipeline to automate the build and testing process, when code is pushed to the repository.
- [ ] Create a `srand` vector, to test the code with a custom range, size and number of times.
- [ ] Use a variable directly while building the project. `cmake -S . -B build -Dvector="1,2,3,4,5"`
- [ ] Instead of symlink the latest version of Google Test, use a release version or fetch the latest version with `cmake`.
- [ ] Currently, I have to build again with `cmake --build build` so the tests can be disabled/enabled. Find if this is the intended behaviour.

## REFERENCES

Some references that I used or will in the future, to learn and complete this project. Some of them are based on the book `The Art of Unit Testing`.

| Book | Author |
| :--- | :----- |
| Working Effectively with Legacy Code (Pearson, 2004) | `Michael Feathers` |
| The Complete Guide to Software Testing (Wiley, 1988) | `Bill Hetzel` |
| XUnit Test Patterns (Addison-Wesley Professional, 2007) | `Gerard Meszaros` |
| Unit Testing Principles, Practices, and Patterns | `Vladimir Khorikov` |
| Test-Driven Development: By Example (Addison-Wesley Professional, 2002) | `Kent Beck` |
| Growing Object-Oriented Software, Guided by Tests (Addison-Wesley Professional, 2009) | `Steve Freeman` and `Nat Pryce` |
| Clean Code (Pearson, 2008) | `Robert C. Martin` |

| Websites | Source |
| :--- | :----- |
| [Command Query Separation](https://martinfowler.com/bliki/CommandQuerySeparation.html) | `Website` |
| [XUnit Test Patterns](https://xunitpatterns.com) | `Website` |
| [Node.js’s assert module](https://nodejs.org/api/assert.html) | `Website` |
| [GoogleTest Primer](https://google.github.io/googletest/primer.html) | `Website` |
| [GoogleTest Assertions Reference](https://google.github.io/googletest/reference/assertions.html) | `Website` |
| [CPP Devcontainer](https://github.com/microsoft/vscode-remote-try-cpp) | `GitHub` |
| [GNU Smalltalk User's Guide: SUnit - Kent Beck](https://www.gnu.org/software/smalltalk/manual/html_node/SUnit.html) | `Website` |

| Videos |
| :--- |
| [CMake - the essential package](https://www.youtube.com/watch?v=UH6F6ypdYbw) |
| [Do you even test? (your code with CMake)](https://youtu.be/pxJoVRfpRPE?si=-A3eVD9pUFIryHTY) |

## UNIT TEST CHECKLIST

This section includes some checklists and questions from the book `The Art of Unit Testing`, that I found useful to keep in mind when writing unit tests.

### UNIT TEST PROPERTIES

A good unit test should exhibit the following properties:

- [ ] It should be easy to understand the intent of the test author.
- [ ] It should be easy to read and write.
- [ ] It should be automated.
- [ ] It should be consistent in its results (it should always return the same result if you don’t change anything between runs).
- [ ] It should be useful and provide actionable results.
- [ ] Anyone should be able to run it with the push of a button.
- [ ] When it fails, it should be easy to detect what was expected and determine how to pinpoint the problem.

### UNIT TEST QUESTIONS

Ask yourself the following questions about the tests you’ve written and executed up to now:

- [ ] Can I run and get results from a test I wrote two weeks, months or years ago?
- [ ] Can any member of my team run and get results from tests I wrote two months ago?
- [ ] Can I run all the tests I’ve written in no more than a few minutes?
- [ ] Can I run all the tests I’ve written at the push of a button?
- [ ] Can I write a basic test in no more than a few minutes?
- [ ] Do my tests pass when there are bugs in another team’s code?
- [ ] Do my tests show the same results when run on different machines or environments?
- [ ] Do my tests stop working if there’s no database, network, or deployment?
- [ ] If I delete, move, or change one test, do other tests remain unaffected?

### UNIT TEST QUALITIES

A good unit test has these qualities:

- [ ] It should run quickly.
- [ ] It should have full control of the code under test.
- [ ] It should be fully isolated (it should run independently of other tests).
- [ ] It should run in memory without requiring filesystem files, networks, or databases.
- [ ] It should be as synchronous and linear as possible (no parallel threads).
