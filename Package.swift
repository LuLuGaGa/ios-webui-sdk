// swift-tools-version:5.1
import PackageDescription

let package = Package(
    name: "QueueITLibrary",
    platforms: [
        .iOS(.v9)
    ],
    products: [
        .library(name: "QueueITLibrary",
                 targets: ["QueueITLibrary"]
        ),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "QueueITLibrary",
            dependencies: [],
            path: "QueueITLibrary",
            cSettings: [
                .define("SWIFT_PACKAGE"),
                .headerSearchPath("../QueueITLibrary/include")
            ]
        )
    ]
)
