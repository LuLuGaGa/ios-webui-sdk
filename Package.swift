// swift-tools-version:5.1
import PackageDescription

let package = Package(
    name: "QueueITLib",
    platforms: [
        .iOS("9.3")
    ],
    targets: [
        .target(
            name: "QueueITLib",
            path: "QueueITLib"
        )
    ]
)
