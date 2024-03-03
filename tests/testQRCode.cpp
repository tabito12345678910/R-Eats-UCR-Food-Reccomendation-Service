#include "../external/libqrencode/qrencode.h"
#include <iostream>
#include <string>
#include <vector>

void generateQRCode(const std::string &link) {
  QRcode *qr = QRcode_encodeString(link.c_str(), 0, QR_ECLEVEL_Q, QR_MODE_8, 1);
  if (qr) {
    for (int y = 0; y < qr->width; y++) {
      for (int x = 0; x < qr->width; x++) {
        std::cout << (qr->data[y * qr->width + x] & 1 ? "\033[40m  "
                                                      : "\033[47m  ");
      }
      std::cout << "\033[40m\n";
    }
    QRcode_free(qr);
  } else {
    std::cerr << "Failed to generate QR code" << std::endl;
  }
}

void displayLinkAsQRCode(const std::vector<std::string> &links) {
  for (const auto &link : links) {
    std::cout << "Link: " << link << std::endl;
    generateQRCode(link);
    std::cout << std::endl;
  }
}

int main() {
  std::vector<std::string> links = {"https://example.com"};
  displayLinkAsQRCode(links);
  return 0;
}
