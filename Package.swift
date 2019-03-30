// swift-tools-version:5.0

import PackageDescription

let package = Package(
    name: "CCore",
    products: [
        .library(name: "CCore", targets: ["CCore"])
    ],
    dependencies: [
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages which this package depends on.
        .target(name: "CCore", dependencies: [], path: "Sources", publicHeadersPath: ".")
    ]
)