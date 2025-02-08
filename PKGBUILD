# Maintainer: Your Name <your.email@example.com>
pkgname=ke
pkgver=1.0.0
pkgrel=1
pkgdesc="A simple utility for creating and deleting files"
arch=('x86_64')
url="https://github.com/enpasant/ke"
license=('GPL')
depends=('clang', 'glibc', 'gcc')
source=("https://github.com/enpasant/ke/archive/refs/tags/v${pkgver}.tar.gz")
sha256sums=('abc123...')

build() {
  cd "$srcdir/ke-${pkgver}/src"  # Navigate to the source code directory
  g++ -o "$srcdir/bin/ke" main.cpp  # Compile the source code into the binary
}

package() {
  install -Dm755 "$srcdir/bin/ke" "$pkgdir/usr/bin/ke"  # Install the compiled binary
}

