# ErrorHandler

**ErrorHandler** is a lightweight error handling utility written in C. It provides structured error reporting, status tracking, and optional recovery logic. Designed to integrate with embedded or desktop C projects and supports optional logging via the [Logger](https://github.com/StjepanPrakljacic/Logger) library.

---

# Features

- Report errors at different levels: `ERROR_FATAL`, `ERROR_STANDARD`, `WARNING`, `INFO`.
- Log messages using the Logger module.
- Compatible with `Std_Types.h` using `E_OK`, `E_NOT_OK`.
- Store and retrieve the last error code and message.
- Supports optional recovery handler function pointers.
- Prints error messages to standard output if Logger is not enabled.
- Designed to be built with CMake.
- Fully compatible with MiniGW and unit-tested via gTest or CMock.

---

# Usage

To use the ErrorHandler module in your project:

1. **Initialize** the ErrorHandler at the start of your program.
2. **Report errors** whenever a function or operation fails.
3. You can **check the last error** and its type to decide what action to take.
4. Optionally, **define a recovery function** to automatically handle known failures.
5. You can **reset the error state** when the issue is resolved or no longer relevant.

The ErrorHandler works with or without the Logger module. If Logger is available, all error messages will also be logged automatically.

---

# Integration with Logger:
Ensure that the Logger library is properly integrated and initialized in your project to enable error logging.

To clone the Logger library using terminal, run the following command:

```bash
git clone https://github.com/StjepanPrakljacic/Logger.git
```
---

# Contributing
Contributions to the Error Handler project are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request on the GitHub repository.

---

# License
This project is licensed under the [MIT License](LICENSE).
