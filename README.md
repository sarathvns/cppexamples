# C++ Multi-App Project with Google Test

This repository demonstrates a scalable C++ project structure with multiple applications and Google Test integration for unit testing.

## Features

- Modular structure supporting multiple applications
- Google Test integration for unit testing
- Automated build and test workflow using GitHub Actions
- Scalable Makefile system

## Requirements

- G++ compiler with C++14 support
- GNU Make
- Google Test library

## Building the Project

To build all applications and run tests:

```bash
make
```

To build a specific application:

```bash
make app_name
```

For example:

```bash
make sumofnumbers
```

## Running Tests

To run all tests:

```bash
make tests
```

## Adding a New Application

1. Create a new directory under `apps/` for your application.
2. Add your source files and a `Makefile` to the new directory.
3. Update the root `Makefile` if necessary (it should automatically detect new apps).
4. Add corresponding test files in the `tests/` directory.

## GitHub Actions Workflow

This project includes a GitHub Actions workflow that:

- Builds all applications
- Runs linting checks
- Executes all tests

The workflow is triggered on pushes to the main branch and pull requests.

## Project Components

### Root Makefile

The root `Makefile` coordinates the building of all applications and tests. It automatically detects subdirectories in the `apps/` folder and generates appropriate build targets.

### Application Structure

Each application in the `apps/` directory should have its own `Makefile` and source files. The `sumofnumbers` application serves as an example.

### Test Structure

The `tests/` directory mirrors the structure of the `apps/` directory. Each test file should correspond to an application and contain unit tests for that application's functionality.

### Continuous Integration

The GitHub Actions workflow defined in `.github/workflows/stagemain.yml` automates the build and test process. It uses an Ubuntu container to set up the environment, install dependencies, and run the build and test commands.

## Best Practices

- Keep application logic in header files to make it easily testable.
- Write unit tests for all significant functionality.
- Use meaningful names for applications, test files, and test cases.
- Keep the project structure modular to allow easy addition of new applications.

## Troubleshooting

If you encounter build issues:

- Ensure all dependencies are correctly installed.
- Check that your G++ version supports C++14.
- Verify that the Google Test library is properly set up on your system.

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the `LICENSE` file for details.

## Acknowledgments

- Google Test for providing the testing framework
- The C++ community for continuous support and inspiration